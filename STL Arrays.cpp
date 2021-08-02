#include <iostream>
#include <array>
#include <vector>

void print_STL_array(std::array<int, 20> data)
{
	for (int i =0; i < data.size();i++)
		//data.size is 20..i is 19..index start from 0
	{
		std::cout << data[i] << "\t";
	}
}
int main()
{
	std::array<int, 20> data = { 1,2,3 };
	print_STL_array(data);
}