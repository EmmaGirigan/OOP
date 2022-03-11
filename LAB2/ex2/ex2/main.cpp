#include "Functions.h";
#include "Student.h";
#include <iostream>

void main() {
	std::cout << "0 if equal, 1 if first bigger, -1 otherwise" << "\n\n";

	std::cout << "Me vs not me" << "\n\n";
	Student me;
	me.setName("Emma");
	me.setMathGrade(7.56);
	me.setHistoryGrade(4.20);
	me.setEnglishGrade(10.0);
	std::cout<< "My average grade: " << me.averageGrade()<< "\n" ;

	Student not_me;
	not_me.setName("Andreea");
	not_me.setMathGrade(7.56);
	not_me.setHistoryGrade(8.2);
	not_me.setEnglishGrade(9.50);
	std::cout << "Not my average grade: " << not_me.averageGrade() << "\n";

	std::cout << "Names: " << compareName(me, not_me) << "\n";
	std::cout << "Average: " << compareAverageGrade(me, not_me) << "\n";
	std::cout << "Math: " << compareMathGrade(me, not_me) << "\n";
	std::cout << "History: " << compareHistoryGrade(me, not_me) << "\n";
	std::cout << "English: " << compareEnglishGrade(me, not_me) << "\n";

	std::cout << "\n\n" << "Me vs not not me" << "\n\n";
	Student not_not_me;
	not_not_me.setName("Emma");
	not_not_me.setMathGrade(6.88);
	not_not_me.setHistoryGrade(12.12);
	std::cout << "Names: " << compareName(me, not_not_me) << "\n";
	std::cout << "Average: " << compareAverageGrade(me, not_not_me) << "\n";
}