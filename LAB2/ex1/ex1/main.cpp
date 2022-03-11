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

	list.Add(19);
	list.Add(18);
	list.Add(17);
	list.Add(16);
	list.Add(15);

	list.Print();
}