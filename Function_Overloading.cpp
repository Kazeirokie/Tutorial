#include <iostream>
#include <string>
using std::cout;

struct Rectangle//create a rectangle with its feature
{
	double length;
	double width;
};

double area(double length, double width)//the calculation related to rectangle
{
	return length * width;
}
	/*
	//create 2 same name func with different perimeter//
	void swap(int a, int b)
	{

		int temp = a;
		a = b;
		b = temp;
		cout << "a: " << a << "\n" << "b: " << b <<"\n" << std::endl;

	}

	void swap(std::string a, std::string b)
	{

		std::string temp =a;
		a = b;
		b = temp;
		cout << "a: " << a << "\n" << "b: " << b << std::endl;

	}
	int main()
	{
		int a = 1;
		int b = 2;
		swap(a,b);

		std::string last_name = "Aiman";
		std::string first_name = "Aminul";
		swap(last_name,first_name );
	}
		*/
	
int main()
{
	Rectangle rectangle;//refer to struct
	rectangle.length ;
	rectangle.width ;

	std::cout << "Calculate Rectangle Area"<<"\n"<<std::endl;
	std::cout << "Rectangle Length: ";
	std::cin >> rectangle.length;
	std::cout << "\n" << "Rectangle Width: ";
	std::cin >> rectangle.width;
	std::cout <<"\n"<<"The answer is: "<< area(rectangle.length, rectangle.width) << std::endl;
}
