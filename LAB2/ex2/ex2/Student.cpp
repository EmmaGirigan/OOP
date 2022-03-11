#pragma once
#include "Student.h"
#include <iostream>

void Student::setName(const char studentName[40]) {
	strcpy_s(this->name, studentName);
}

char* Student::getName() {
	return this->name;
}

void Student::setMathGrade(float grade) {
	if (grade >= 1.0 && grade <= 10.0)
		this->mathGrade = grade;
}

float Student::getMathGrade() {
	return this->mathGrade;
}

void Student::setEnglishGrade(float grade) {
	if (grade >= 1.0 && grade <= 10.0)
		this->englishGrade = grade;
}

float Student::getEnglishGrade() {
	return this->englishGrade;
}

void Student::setHistoryGrade(float grade) {
	if (grade >= 1.0 && grade <= 10.0)
		this->historyGrade = grade;
}

float Student::getHistoryGrade() {
	return this->historyGrade;
}

float Student::averageGrade() {
	return (this->mathGrade + this->englishGrade + this->historyGrade) / 3;
}