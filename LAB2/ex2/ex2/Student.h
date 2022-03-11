#pragma once
#include <iostream>

void Student::setName(char studentName[40]) {
	this->name = studentName;
}

char Student::getName() {
	return this->name;
}

void Student::setMathGrade(float grade) {
	this->mathGrade = grade;
}

float Student::getMathGrade() {
	return this->mathGrade;
}

void Student::setEnglishGrade(float grade) {
	this->englishGrade = grade;
}

float Student::getEnglishGrade() {
	return this->englishGrade;
}

void Student::setHistoryGrade(float grade) {
	this->historyGrade = grade;
}

float Student::getHistoryGrade() {
	return this->historyGrade;
}

float Student::averageGrade(float mathGrade, float englishGrade, float historyGrade) {
	return (mathGrade + englishGrade + historyGrade) / 3;
}