#include<iostream>
#include<vector>


void print_vector(std::vector<int> data)
{
	for (int i = 0; i < data.size(); i++)
		//data size is 3 according to 1,2,3
		//i is 0,1,2 and the code will execute 1,2,3
	{
		std::cout << data[i] << "\t";
	}
	std::cout << "\n" << std::endl;//space downward by one
}
int main()
{
	/* //several useful func
	std::vector<int> data = {1,2,3};//same like array
	data.push_back(21);//is add 21 after 3
	std::cout << data[data.size() - 1] << std::endl;//data.size is 4 after added 21
	data.pop_back();//buang satu dr blakang
	std::cout << data.size() << std::endl;
	*/

	//work with void func
	std::vector<int> data = { 1,2,3 };
	print_vector(data);
}
//search geeksforgeeks vector in C++ for more...
