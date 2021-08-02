#include <iostream>
using std::cout;
using std::cin;
using std::endl;

double power(double base, int exponent)
{
	double result = 1;
	for (int i = 0; i < exponent; i++)
	{
		result = result * base;
	}
	return result;
}


void print_pow(double base, int exponent) 
{
	double myPower = power(base, exponent);
	cout << base << " raised to the " << exponent <<" power is " << myPower << endl;
}


int main()
{
	double base;
	int exponent;
	//cout << "Type the base : ";
	//cin >> base;
	//cout << "Type the power : ";
	//cin >> exponent;
	//print_pow(base, exponent); //read the comment first...example ...
	print_pow(10, 3); //We can get as many data as we want..yay
	print_pow(9, 2);
	print_pow(8, 10);
}

//BENEFITS :-
//void function functions as the constant.
//dont need to 'repeat the code' or 'delete and rewrite' to get various data.
//Uncomment the cout, cin and first print_pow to see the effect.