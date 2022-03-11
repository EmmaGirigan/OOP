#include "NumberList.cpp"
#include "NumberList.h"

void main() {
	NumberList list;
	list.Init();
	list.Add(5);
	list.Add(1);
	list.Add(10);
	list.Add(10);
	list.Add(6);
	list.Add(3);
	list.Print();
	list.Sort();
	list.Print();
}