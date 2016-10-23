This example demonstrates how to analyze a Groovy project with Gradle.

Prerequisites
=============
* [SonarQube](http://www.sonarsource.org/downloads/) 4.5+
* [SonarQube Groovy Plugin](http://docs.sonarqube.org/display/PLUG/Groovy+Plugin) 1.3.1+
* Gradle 2.0+

Usage
=====
* Compile the project:

        gradlew install

* Analyze it with SonarQube using Maven:

        gradlew sonarqube
