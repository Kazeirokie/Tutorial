#include <iostream>

class User//default class is public
{
	std::string status = "Passed";

public:
	std::string first_name;
	std::string last_name;
	std::string get_status()
	{
		return status;
	}
};



std::ostream& operator << (std::ostream& output, User user)
{
	output << "First name: " << user.first_name << "\nLast name: " << user.last_name;
	return output;
}

std::istream& operator >> (std::istream& input, User &user)
{
	input >> user.first_name >> user.last_name;
	return input;
}

int main()
{
	User user;

	/*
	for ostream
	user.first_name = "Aminul";
	user.last_name = "Aiman";
	std::cout << user << std::endl;
	*/

	//for istream//
	std::cin >> user;
	std::cout << user << std::endl;

	
		
}