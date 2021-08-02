#include <iostream>

double pow(double base, int pow = 2)
{
	int total = 1;
	for (int i = 0;i < pow;i++)
		//if pow is 2 then loop will run 2 times
	{
		total *= base;//(1x3)+(1x3)
	}
	return total;
}
int main()
{
	std::cout << pow(3, 3) << "\n";
	std::cout << pow(3);
}