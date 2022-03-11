#pragma once
#include "Student.h"
class Student {
	char name[40];
	float mathGrade;
	float englishGrade;
	float historyGrade;

public:
	void setName(char studentName[40]);
	char getName();

	void setMathGrade(float grade);
	float getMathGrade();

	void setEnglishGrade(float grade);
	float getEnglishGrade();

	void setHistoryGrade(float grade);
	float getHistoryGrade();

	float averageGrade(float mathGrade, float englishGrade, float historyGrade);
};