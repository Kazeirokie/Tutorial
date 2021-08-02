// Lots example included..commented code to avoid error
#include <iostream>
#include <limits>
using std::cout;

// Data get from "Work with void print_array"
/*void print_array(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << array[i] << "\t";
	}
}*/

void change_array( int data[], int size)
{
	for (int i = 0;i < size;i++)
	{
		data[i]++;
		//kind like vector.."data.size"..
		//by adding ++ you will get 2,3,4 instead of 1,2,3
		cout << data[i] << "\t";
	}
	cout << "\n";
}

int main()
{
	// Index starts from zero
	/* 
	int guesses[] = {3,34,98,65,4344,34,43};
	std::cout << guesses[3]; 
	*/
	
	// Update value
	/* 
	int guesses[] = { 23,34,35,656,34456 };
	std::cout << guesses[0]<<"\n";
	guesses[0] = 100; 
	std::cout << guesses[0];
	*/

	// Make own number
	/* 
	int guess[20]; 
	std::cin >> guess[0];
	std::cout << guess[0];
	*/

	/*
	// 24-bit total. Every number is 4-bit
	int guess[10] = {34,4,5,43,23,86};
	int size = sizeof(guess) / sizeof(guess[0]);
	std::cout << size << std::endl;

	// To get array 
	for (int i = 0; i < size; i++)
	// size=6 bit,so 6-1=5,from 34 to 86
	{
		std::cout << guess[i] << "\t";
	}
	*/

	
	// Work with void print_array
	/*
	int guess[] = { 12,34,56,87,89,90 };
	print_array(guess, 5);//will generate number to 89
	*/
	
	// Work with void print_array
	/*
	const int SIZE = 10;
	int guess[SIZE];

	int count = 0;

	for (int i = 0; i < SIZE; i++)
	{
		if (std::cin >> guess[i])
		{
			count++;
		}
		else
		{
			break;
		}
	}
	
	print_array(guess, count);      // When count increase then guess increase until reach the limit,refer back to the void
	std::cin.clear();               // Without this,test cant be written after put wrong char
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	// Will ignore character , number limits and space

	std::string test;
	std::cout << "\n";
	std::cin >> test;
	std::cout <<"\n" << test << std::endl;
	*/

	int data[] = { 1,2,3 };//work with change_array
	change_array(data, 3);


	
}	

