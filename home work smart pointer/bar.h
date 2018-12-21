#pragma once

class Bar
{
public:
	Bar();
	Bar( int item);
	int GetBar() const;
	void print();
	~Bar();
private:
	int num;
};