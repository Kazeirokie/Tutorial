#include <iostream>
#include <array>
#include <vector>

void print_STL_array(std::array<int, 100> data) // 100 is limit in array
{
	for (int i =0; i < data.size();i++) // data.size is 20..i is 19..index start from 0
	{
		std::cout << data[i] << "\t";
	}
}

int main()
{
	std::array<int, 20> data = { 1,2,3 }; // 20 data inserted in array
	print_STL_array(data);                // 1,2,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
}
