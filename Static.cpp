#include <iostream>
#include <vector>

using namespace std;

class User // default class is private
{
	// This is static
	static int user_count; // Don't put any data in this..data for static can't be written in class

	std::string _status = "Passed";

public:
	static int get_user_count() // Function to get number of user created
	{
		return  user_count;
	}

	std::string _first_name;
	std::string _last_name;
	std::string get_status() // This is getter..get info from private class
	{
		return _status;
	}


	void set_status(std::string status) // This is setter..see if input exist
	{
		if (status == "Passed" || status == "Failed")
		{
			this->_status = status;
		}
		else std::cout << "You are not registered";
	}

	User()
	{
		user_count++; // Count increase when user increase
	}


	//constructor
	User(std::string first_name, std::string last_name, std::string status)
	{
		this->_first_name = first_name;//take the var from class
		this->_last_name = last_name;
		this->_status = status;
		user_count++; // Count increase when user increase
	}
	~User() // Destructor is to end constructor
	{
		user_count--; // Erase one user existed
	}
};

int User::user_count = 0; // Data for static need to be created in new var

int main()
{
	User user1, user2, user3, user4, user5;      // 5 users created
	std::cout << User::get_user_count() << "\n"; // Count all user existed

	user1.~User();                               // Destruct the one user
	std::cout << User::get_user_count() << "\n";

}
// Destructor will be executed everytime constructor ended
