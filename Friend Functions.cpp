#include <iostream>
#include <vector>

using std::cout;

class User//default class is private
{
	// This is static
	static int user_count; // Don't put any data in this..data can't be written in class

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
		else
		{
			std::cout << "You are not registered";
		}
	}
	
	User()
	{
		user_count++; // Count increase when user increase
	}

	// Constructor
	User(std::string first_name, std::string last_name, std::string status)
	{
		this->_first_name = first_name; // take the var from class
		this->_last_name = last_name;
		this->_status = status;
		user_count++; // count increase when user increase
	}
	~User() // Destructor is to end constructor
	{
		user_count--; // Kill one user existed
	}
	friend std::ostream& operator << (std::ostream& output, User user);

	friend std::istream& operator >> (std::istream& input, User& user);
};

int User::user_count = 0; // Data for static need to be created in new var

std::ostream& operator << (std::ostream& output, User user)
{
	output << "First name: " << user._first_name << "\nLast name: " 
		<< user._last_name << "\nStatus: " << user._status;
	return output;
}

std::istream& operator >> (std::istream& input, User& user)
{
	input >> user._first_name >> user._last_name >>user._status;
	return input;
}

int main()
{
	User user;

	//for ostream
	/*user._first_name = "Aminul";
	user._last_name = "Aiman";
	user.set_status("Passed");
	*/

	//for istream
	std::cin >> user;
	std::cout << user;

}
// Destructor will be executed everytime constructor ended
// Friend Function gives direct access to private class
