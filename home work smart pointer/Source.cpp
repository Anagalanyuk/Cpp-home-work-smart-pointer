//���������� ����������� ����� ������ ����������.
//�������� �������� ������� ������ �� �������� ��������� �������� ����������� ��������
//������� �� ���������� ������, � �������������� �������� ����� ������� ����� �����������
//���������� ��������� �� ����.������ ������ ���������������� ����� ������ ������������
//������� �������� ���������� : �������������, ��������� � ������ ������ �����.

#include<iostream>

#include"SmartPtr.h"

#include"bar.h"

using namespace std;

int main()
{
	

	SmartPtr foo = new Bar(10);
	//SmartPtr bar = new Bar(20);
	//SmartPtr bar1 = bar;
	//SmartPtr bar2 = bar1;
	////foo = bar;
	//bar1 = foo;
	//cout << *bar1 << endl;
	//cout << *bar2 << endl;
	//foo = foo;
	//cout << *foo;
	cout << foo->GetBar();
}		