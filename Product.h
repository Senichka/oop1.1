//Product.h
#pragma once

class Product
{
	unsigned int first;
	double second;
public:
	unsigned int getFirst() const { return first; }
	double getSecond() const { return second; }
	void setFirst(unsigned int value);
	void setSecond(double value);	

	bool Init(int x, double y);
	void Display() const;
	void Read();
	double power(double value);
};
