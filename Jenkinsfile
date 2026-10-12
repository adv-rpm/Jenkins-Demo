pipeline {
    agent any
    environment
    {
        BUILD_TOOL="C:\\Users\\HP\\AppData\\Local\\Keil_v5\\UV4\\UV4.exe"
        PRJ="Calc_Project.uvprojx"
        BUILD_LOG="D:\\Prem\\Build_log.txt"
    }
    stages
    {
        stage('Pre-Checks')
        {
            steps
            {
                bat '''
                @echo off
                echo 'Printing variables'
                echo %BUILD_TOOL%
                echo %PRJ%
                '''
            }
        }

        stage ('Build Project')
        {
            steps
            {
                //Clean and Build Project
                bat '''
                if exist %BUILD_LOG% del %BUILD_LOG%
                echo 'Cleaning %WORKSPACE%\\%PRJ%
                %BUILD_TOOL% -c %WORKSPACE%\\%PRJ%
                echo 'Building Project'
                %BUILD_TOOL% -b %WORKSPACE%\\%PRJ% -o %BUILD_LOG%

                echo Keil Exit Code: %ERRORLEVEL%

                findstr /C:"0 Error(s)" "%BUILD_LOG%" >nul

                if errorlevel 1 (
                echo BUILD FAILED
                exit /b 1

                ) else (

                echo BUILD SUCCESSFUL

                exit /b 0

                )
                '''
            }

            post
            {
                success
                {
                    bat '''
                    @echo off
                    echo 'Build successful!'
                    '''
                    archiveArtifacts artifacts: '%BUILD_LOG%',
                                    fingerprint: true
                }
            }


        }
        /* stage('Test Stage')
        // {
        //     parallel
        //     {
        //         stage('Static Analysis')
        //         {
        //             steps
        //             {
        //             bat '''
        //             @echo off
        //             echo running Static tests
        //             '''
        //             }
        //             post
        //             {
        //                 success
        //                 {
        //                 bat '''
        //                 @echo off 
        //                 echo Completed Static Testing
        //                 '''
        //                 }
        //             }
        //         }
        //         stage('Unit Test')
        //         {
        //             steps
        //             {
        //             bat 'echo running Unit tests' 
        //             }
        //             post
        //             {
        //                 success
        //                 {
        //                 bat 'echo Completed Unit Testing'
        //                 }
        //             }
        //         }
        //         stage('Integration Test')
        //         {
        //             steps
        //             {
        //             bat 'echo running Integration tests' 
        //             }
        //             post
        //             {
        //                 success
        //                 {
        //                 bat 'echo Completed Integration Testing'
        //                 }                    }
        //         }
        //         stage('Qualification Tests')
        //         {
        //             steps
        //             {
        //             bat 'echo running Qualification tests' 
        //             }
        //             post
        //             {
        //                 success
        //                 {
        //                 bat 'echo Completed Qualification Testing'
        //                 }                    
        //             }
        //         }
        //     }
         } */
    }
}