#pragma once
#include <iostream>

int compareName(Student student1, Student student2) {
	if (student1.getName() == student2.getName())
		return 0;
	return -1;
}

int compareMathGrade(Student student1, Student student2) {
	if (student1.getMathGrade() == student2.getMathGrade())
		return 0;
	else if (student1.getMathGrade() > student2.getMathGrade())
		return 1;
	else return -1;
}

int compareEnglishGrade(Student student1, Student student2) {
	if (student1.getEnglishGrade() == student2.getEnglishGrade())
		return 0;
	else if (student1.getEnglishGrade() > student2.getEnglishGrade())
		return 1;
	else return -1;
}

int compareHistoryGrade(Student student1, Student student2) {
	if (student1.getHistoryGrade() == student2.getHistoryGrade())
		return 0;
	else if (student1.getHistoryGrade() > student2.getHistoryGrade())
		return 1;
	else return -1;
}

int compareAverageGrade(Student student1, Student student2) {
	if (student1.averageGrade(student1.getMathGrade(), student1.getEnglishGrade(), student1.getHistoryGrade()) == student2.averageGrade(student2.getMathGrade(), student2.getEnglishGrade(), student2.getHistoryGrade()))
		return 0;
	else if (student1.averageGrade(student1.getMathGrade(), student1.getEnglishGrade(), student1.getHistoryGrade()) > student2.averageGrade(student2.getMathGrade(), student2.getEnglishGrade(), student2.getHistoryGrade()))
		return 1;
	else return -1;
}