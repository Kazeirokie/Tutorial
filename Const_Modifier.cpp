#include <iostream>
#include <array>
using std::cout;

void do_something(const int  array[])
//this must const too to avoid interference in command with print_array
{

}
void print_array(const int data[], int size)
{
	for (int i = 0;i < size;i++)
	{
		data[i];
		//kind like vector.."data.size"..
		//by adding ++ you will get 2,3,4 instead of 1,2,3
		cout << data[i] << "\t";
	}
	cout << "\n";
	do_something(data);
}

int main()
{
	int data[] = { 1,2,3 };
	print_array(data, 3);

}