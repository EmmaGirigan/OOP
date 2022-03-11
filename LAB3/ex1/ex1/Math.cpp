#include "Math.h"
#include <iostream>
#include <cstring>
#include <cstdarg>

int Math::Add(int a, int b) {
	return a + b;
}

int Math::Add(int a, int b, int c) {
	return a + b + c;
}

int Math::Add(double a, double b) {
	return a + b;
}

int Math::Add(double a, double b, double c) {
	return a + b + c;
}

int Math::Mul(int a, int b) {
	return a * b;
}

int Math::Mul(int a, int b, int c) {
	return a * b * c;
}

int Math::Mul(double a, double b) {
	return a * b;
}

int Math::Mul(double a, double b, double c) {
	return a * b * c;
}

int Math::Add(int count, ...) {
	int sum = 0;
	va_list args;
	va_start(args, count);
	for (int i = 0; i < count; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return sum;
}

char* Math::Add(const char* a, const char* b) {
	int size = strlen(a) + strlen(b);
	if (a == nullptr || b == nullptr)
		return nullptr;
	else {
		char* ab = new char[size];
		strcpy(ab, a);
		strcat(ab, b);
		return ab;
	}
	
}