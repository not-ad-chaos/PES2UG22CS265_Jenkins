pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                script {
                    echo "Building the application..."
                    sh "make -C main"
                }
            }
        }

        stage('Test') {
            steps {
                script {
                    echo "Running tests..."
                    sh "./output"
                }
            }
        }

        stage('Deploy') {
            steps {
                script {
                    echo "Deploying application..."
                    sh 'echo "Deployment successful!"'
                }
            }
        }
    }

    post {
        failure {
            echo "Pipeline failed"
        }
        success {
            echo "Pipeline completed successfully!"
        }
    }
}
