// Factorial is 4!(4x3x2x1) , 5!(5x4x3x2x1)
// Uncomment loop one by one ( Do Not Open Simultaneously)
#include <iostream>
using namespace std;

int main()
{
	/*
	//While loops
	int factorial;
	cout << "Insert the factorial : ";
	cin >> factorial;
	int i = factorial - 1;
	while (i > 0)
	{
		factorial *= i;
		i--;
	}
	cout << "\n The answer is : " << factorial;
	*/

	/*
	//For loops
	int factorial;
	cout << "Insert the factorial : ";
	cin >> factorial;
	for (int i = factorial - 1; i > 1; i--)
	{
		factorial *= i;
	}
	cout << "The answer is : "<<factorial;
	*/
	
	/*
	//Do While Loop
	std::string password = "kazeirokie";
	std::string guess;
	do
	{
		std::cout << "Enter the password : ";
		std::cin >> guess;
		std::cout << "Welcome Aminul";
	} 
	while (guess != password);
	*/

	//Range-based For Loops
	int data[] = { 1,2,3,4,5,6 };

	for (int x : data)
	{
		std::cout << x << "\t";
	}
}
