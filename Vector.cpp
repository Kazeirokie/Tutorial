#include<iostream>
#include<vector>
using namespace std;


void print_vector(std::vector<int> data)
{
	for (int i = 0; i < data.size(); i++)  // data size = 3 according to 1,2,3   	                                  
	{                                      // i = 0,1,2 and the code will execute 1,2,3
		cout << data[i] << "\t";
	}
	cout << "\n" << endl;
}

int main()
{
	/* 
	std::vector<int> data = {1,2,3};          // Vector 
	data.push_back(21);//is add 21 after 3    // push.back add one data
	cout << data[data.size() - 1] << endl;    // data.size is 4 after added 21
	data.pop_back();                          // pop.back erase one data
	cout << data.size() << endl;
	*/

	// Work with print_vector
	std::vector<int> data = { 1,2,3 };
	print_vector(data);
}
//search geeksforgeeks vector in C++ for more info.
