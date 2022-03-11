#include "Functions.h";
#include "Student.h";
#include <iostream>

void main() {
	Student me;
	const char* my_name = "Emma";
	me.setName(my_name);
	me.setMathGrade(7.56);
	me.setHistoryGrade(4.20);
	me.setEnglishGrade(10.0);
	std::cout<< me.averageGrade()<< "\n" ;

	Student not_me;
	const char* not_my_name = "Tudor";
	not_me.setName(not_my_name);
	not_me.setMathGrade(6.88);
	not_me.setHistoryGrade(8.2);
	not_me.setEnglishGrade(9.50);
	std::cout << not_me.averageGrade() << "\n";


}