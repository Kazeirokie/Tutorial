#include <iostream>
#include <vector>
using namespace std;

class User // default class is private
{
	std::string _status = "Passed";

public:
	std::string _first_name;
	std::string _last_name;
	std::string get_status() // This is getter..get info from private class
	{
		return _status;
	}

	void set_status(std::string status) // This is setter..see if input exist
	{
		if (status == "Aplus" || status == "Asolid")
		{
			cout<<"Congratulations!!!"<<endl;
		}
		else
		{
			std::cout << "Better Next Time.";
		}
	}

	// Constructor
	User(std::string first_name, std::string last_name, std::string status)
	{
		this->_first_name = first_name; // Variable from class
		this->_last_name = last_name;
		this->_status = status;
	}
	~User() // Destructor is to end constructor
	{
		std::cout <<"\n" << "Destructor";
	}
};

int main()
{
	User user("Tori", "Pota", "Passed"); // Refer back to Constructor
	std::cout << user._first_name;       // first_name refer to ..Constructor..refer to class

	// _status can't be accessed since it's private
	// can accessed by using getter

	std::cout << "\n" << user.get_status() << "\n"; // from getter..get status from class

	user.set_status("Aplus"); // from setter..check if the status right or not

}
// Destructor will be executed everytime constructor ended
