#include <iostream>
using namespace std;

void swap(int &a, int &b) //& sign check for all preferences..
{
	int temp = a;  // "a" data copied into temp
	a = b;       // "b" data copied into "a"
	b = temp;    // temp data copied into "b"
}

int main()
{
	int a = 10;
	int b = 20;
	swap(a, b);
	cout << "a: " <<a<< "\n" << "b: " <<b<<"\n" << std::endl;
}
