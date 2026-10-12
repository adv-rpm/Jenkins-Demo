pipeline {
    agent any
    environment
    {
        BUILD_TOOL="C:\\Users\\HP\\AppData\\Local\\Keil_v5\\UV4\\UV4.exe"
        PRJ="\\Calc_Project.uvprojx"
        BUILD_LOG="Build_log.txt"
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
                echo %PRJ%%WORKSPACE%
                echo %WORKSPACE%
                '''
            }
        }

        stage ('Build Project')
        {
            steps
            {
                //Clean and Build Project
                bat '''
                @echo off
                echo 'Cleaning %PRJ%
                %BUILD_TOOL% -c %PRJ%
                echo 'Building Project'
                %BUILD_TOOL% -b %PRJ% -o %BUILD_LOG%
                echo %WORKSPACE%

                '''
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