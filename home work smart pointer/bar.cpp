#include<iostream>

#include"Bar.h"

using namespace std;


Bar::Bar()
{
	//cout << "Bar constructor" << endl;
}
Bar::Bar(int item)
{
	//cout << "Bar construtor" << endl;
	num = item;
}

int Bar::GetBar() const
{
	return num;
}

void Bar::print()
{
	cout << num << endl;
}

Bar::~Bar()
{
	//cout << "destructor Bar" << endl;
}

