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
	const int SIZE = 6;//same like nines and ones size
	int nines[] = { 9,9,9,9,9,9 };
	int ones[]  = { 1,1,1,1,1,1 };
	
	for (int i = 0; i<6 ;i++)
	{
		std::cout << nines[i] << " " << ones[i] << "\t";//execute 9 and 1 repeatedly
	}
	std::cout << "\n\n";

	swap(nines, ones, SIZE);

	for (int i = 0; i < 6; i++)
	{
		std::cout << nines[i] << " " << ones[i] << "\t";//swap
	}
	std::cout << "\n\n";
}