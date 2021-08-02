#include <iostream>
#include <vector>

using std::cout;


class User//default class is private
{
	std::string _status = "Passed";

public:
	std::string _first_name;
	std::string _last_name;
	std::string get_status()//this is getter..get info from private class
	{
		return _status;
	}


	void set_status(std::string status)//this is setter..see if input exist
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


	//constructor
	User(std::string first_name, std::string last_name, std::string status)
	{
		this->_first_name = first_name;//take the var from class
		this->_last_name = last_name;
		this->_status = status;
	}
	~User()//destructor is to end constructor
	{
		std::cout <<"\n" << "Destructor";
	}

};



int main()
{
	User user("Aminul", "Aiman", "Passed");//refer back to constructor
	std::cout << user._first_name;//first_name refer to ..constructor..refer to class

	//user.status can't be accessed since it's private//
	//can accessed by using getter//'

	std::cout << "\n" << user.get_status() << "\n";//from getter..get status from class

	user.set_status("No");//from setter..check if the status right or not

}
//destructor will be executed everytime constructor ended