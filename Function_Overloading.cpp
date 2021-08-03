#include <iostream>
#include <string>
using std::cout;

struct Rectangle // Create a rectangle with its feature
{
	double length;
	double width;
};

double area(double length, double width)//the calculation related to rectangle
{
	return length * width;
}
	
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
