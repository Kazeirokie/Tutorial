#include <iostream>
using std::cout;

template <typename N>//template function

void swap(N &a, N &b)//& sign check for all preferences..
{
	N temp = a;//"a" need to be new var in order to swap with b
	a = b;
	b = temp;
	
		
}
int main()
{
	int a = 10;
	int b = 20;
	swap(a, b);
	cout << "a: " <<a<< "\n" << "b: " <<b<<"\n" << std::endl;

	std::string first_name = "Aminul";
	std::string last_name = "Aiman";
	swap(first_name, last_name);
	cout << "First name: " << first_name << "\n" << "Last name: " << last_name << std::endl;
}