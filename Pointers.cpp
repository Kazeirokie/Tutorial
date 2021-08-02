#include <iostream>
using namespace std;

int main()
{
	int x = 5;
	cout << &x<<"\n\n";//execute x address

	int* y = &x;//give back the real value of x

	cout << *y <<" same as "<< x << "\n\n";


	if (x == *y)
	{
		cout << "True";
	}
	else 
	{
		cout << "False" << endl;
	}

}