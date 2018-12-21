#include<iostream>

#include"SmartPtr.h"

#include"bar.h"

using namespace std;

SmartPtr::SmartPtr(Bar* pointer)
{
	ptr = pointer;
	capacity = new int(0);
	//cout << "constructor" << endl;
}

SmartPtr::SmartPtr(const SmartPtr& obj)
{
	ptr = obj.ptr;
	capacity = obj.capacity;
	*capacity += 1;
	//cout << "constructor copy" << endl;
}

void SmartPtr::Print()
{
	cout << ptr; 
	cout << endl;
}

int SmartPtr:: operator*() const
{
	return ptr->GetBar();
}

Bar* SmartPtr::operator->() const
{
	return ptr;
}

SmartPtr& SmartPtr::operator = ( const SmartPtr& item)
{	
	if (this != &item)
	{
		if (*capacity == 0)
		{
			delete ptr;
			delete capacity;
			ptr = item.ptr;
			*item.capacity += 1;
			//cout << "operatior =" << endl;
			capacity = item.capacity;
		}
		else if (ptr != item.ptr)
		{
			*capacity -= 1;
			*item.capacity += 1;
			ptr = item.ptr;
			capacity = item.capacity;
			//cout << "operatior =" << endl;
		}
	}
	return *this;
}

Bar* SmartPtr::GetPointer()const
{
		return ptr;	
}

SmartPtr::~SmartPtr()
{
	if (*capacity != 0)
	{
		*capacity -= 1;
		ptr = nullptr;
		capacity = nullptr;
	}
	else 
	{
		delete ptr;
		delete capacity;
		ptr = nullptr;
		capacity = nullptr;
		//cout << "destructor" << endl;
	}

}