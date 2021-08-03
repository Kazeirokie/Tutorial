#include <iostream>
using namespace std;

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
	
	/*
	cout << "Type the base : ";    // Work with print_pow function
	cin >> base;                   // Work with print_pow function
	cout << "Type the power : ";   // Work with print_pow function
	cin >> exponent;               // Work with print_pow function
	print_pow(base, exponent);     // Work with print_pow function
	*/
	
	print_pow(10, 3); // Work with power function
	print_pow(9, 2);  // Work with power function
	print_pow(8, 10); // Work with power function
}
// I had separated the output
// Uncomment the commented code to see other result
