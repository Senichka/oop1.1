//Product.cpp
#include "Product.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Product::setFirst(unsigned int value)
{
	first = value;
}
void Product::setSecond(double value)
{
	second = value;
}
bool Product::Init(int x, double y)
{
	if (x >= 0)
	{
		if (y >= 0)
		{
			second = y;
			first = x;
			return true;
		}
		else
		{
			first = 0;
			second = 0;
			return false;
		}
	}
	else
	{
		first = 0;
		second = 0;
		return false;
	}
	
}
void Product::Display() const
{
	cout << "first = " << first << " second = " << second << endl;
}
void Product::Read() 
{
	unsigned int x;
	double y;
	cout << "enter calories per 100g: " << endl;
	cin >> x;
	do 
	{
		cout << "enter kilograms of food: " << endl;
		cin >> y;
	} while (!Init(x, y));
}
double Product::power(double value)
{
	double P;
	P = first * second;
	return P;
}