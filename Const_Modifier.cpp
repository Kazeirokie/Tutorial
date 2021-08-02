#include <iostream>
#include <array>
using namespace std;

void print_array(const int data[], int size)
{
	for (int i = 0; i < size; i++)
	{
		data[i]; // If vector.."data.size"..
		cout << data[i] << "\t"; 
	}
	cout << "\n";
}

int main()
{
	int data[] = { 1,2,3 };
	print_array(data, 3);
}
