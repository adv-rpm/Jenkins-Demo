pipeline {
    agent any
    environment
    {
        BUILD_TOOL="C:\\Users\\HP\\AppData\\Local\\Keil_v5\\UV4\\UV4.exe"
        PRJ="Calc_Project.uvprojx"
        BUILD_LOG="Build_log.txt"
        VS="C:\\Program Files\\Microsoft Visual Studio\\18\\Community\\Common7\\IDE\\devenv.exe"
        TEST_PROJ="\\Tests\\Calculator_Test_Proj\\Calculator_Test_Proj.slnx"
        TEST_EXE="\\Tests\\Calculator_Test_Proj\\x64\\Debug\\Calculator_Test_Proj.exe"
        UNIT_TEST_XML="Unit_Test.xml"
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
                echo %WORKSPACE%%TEST_PROJ%
                echo %VS%
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
                    archiveArtifacts artifacts: 'Build_log.txt, Objects\\*.axf',
                                    fingerprint: true
                }
            }


        }
        //stages
        //{
            parallel
            {
                stage('Static Analysis')
                {
                    steps
                    {
                    bat '''
                    @echo off
                    echo running Static tests
                    '''
                    }
                    post
                    {
                        success
                        {
                        bat '''
                        @echo off 
                        echo Completed Static Testing
                        '''
                        }
                    }
                }

                stage('Unit Testing')
                {
                    stage ('Unit Test Porject Build')
                    {
                        steps
                        {
                            bat '''
                            echo Building Test Project 
                            "%VS%" %WORKSPACE%%TEST_PROJ% /Rebuild
                            '''
                        }
                        post
                        {
                            always
                            {
                                archiveArtifacts artifacts: 'Tests\\Calculator_Test_Proj\\x64\\Debug\\Calculator_Test_Proj.exe',
                                fingerprint:true
                            }
                        }
                    }
                    stage('Unit Test Execution')
                    {
                        steps
                        {
                            bat'''
                            %WORKSPACE%%TEST_EXE% --gtest_output=xml:%WORKSPACE%\\Unit_Test.xml
                            '''
                        }
                        post
                        {
                            always
                            {
                                /*xunit (
                                    tools: [
                                        GoogleTest(pattern: 'Unit_Test.xml')
                                    ]
                                )*/

                                junit testResults:'Unit_Test.xml',
                                skipPublishingChecks: true
                            }
                        }
                    }
                }
            }
       // }
    }
}