#pragma once

#include"bar.h"

class SmartPtr
{
public:
	SmartPtr(Bar* pointer);
	SmartPtr(  const SmartPtr& obj);
	void Print();
	Bar* GetPointer()const;
	int operator*() const;
	Bar* operator ->() const;
	SmartPtr& operator = ( const SmartPtr& item);
	~SmartPtr();
private:
	int* capacity = nullptr;
    Bar* ptr;
};

