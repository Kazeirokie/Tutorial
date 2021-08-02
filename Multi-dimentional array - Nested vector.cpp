#include <iostream>
#include <vector>

int main()
{
	std::vector<std::vector<int>> grades =
	 { 
		{1,2,3},   // column 1 
		{4,5,6},   // column 2
		{7,8,9}    // column 3
	 };

	for (int r=0;r<3;r++)//r represent row
	{
		for (int c=0;c<1;c++)//c represent column
		{
			std::cout << grades[r][c] << "\t";
		}
		std::cout << "\n";

	}
}
//chance r<1 / c<3 or r<3 / c<1 to see the effect