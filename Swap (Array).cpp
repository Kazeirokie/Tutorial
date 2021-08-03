#include <iostream>

template <typename X>

void swap(X a[], X b[], int size)
{
	for (int i = 0;i < size;i++)
	{
		X temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}

int main()
{
	int SIZE = 6;                   // SIZE to activate void swap
	int nines[] = { 9,9,9,9,9,9 };  // Array to be swapped
	int ones[]  = { 1,1,1,1,1,1 };  // Array to be swapped
	
	for (int i = 0; i < 6 ;i++)
	{
		std::cout << nines[i] << " " << ones[i] << "\t"; // Execute 9 and 1 repeatedly
	}
	std::cout << "\n\n";

	swap(nines, ones, SIZE);

	for (int i = 0; i < 6; i++)
	{
		std::cout << nines[i] << " " << ones[i] << "\t"; //Swap
	}
	std::cout << "\n\n";
}
