#include "Product.h"
#include <iostream>
#include <Windows.h>
using namespace std;

Product makeProduct(unsigned int x, double y)
{
	Product nn;
	if (!nn.Init(x, y))
		cout << "wrong argument to Init!(second)" << endl;
	return nn;
}
int main()
{
	Product i;
	unsigned int a; 
	double b;
	cout << "Enter calories per 100g: ";
	cin >> a;
	cout << "Enter kilograms of food: ";
	cin >> b;
	i = makeProduct(a, b);
	cout << "Power of your food: " <<i.power(0)<< endl;
	i.Display();
	return 0;
}