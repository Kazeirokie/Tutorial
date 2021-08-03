#include <iostream>
using namespace std;

void swap(int &a, int &b) //& sign check for all preferences..
{
	int temp = a;  // "a" data copied into temp
	a = b;       // "b" data copied into "a"
	b = temp;    // temp data copied into "b"
	cout << "a: " << a << "\n" << "b: " << b <<"\n" << std::endl;
}


void swap(std::string a, std::string b)
{	
	std::string temp =a;
	a = b;
	b = temp;
	cout << "a: " << a << "\n" << "b: " << b <<"\n" << std::endl;
}
	
	
int main()
{
	int a = 10;
	int b = 20;
	swap(a, b);
	
	
	std::string last_name = "Omi";
	std::string first_name = "Tanuki";
	swap(last_name,first_name );
}
