#include <iostream>
#include <vector>
#include <string>
#include <iostream>

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

};



class Teacher : public User//teacher inherit from User
{
	public:
		std::vector<std::string>classes_teaching;

		void output()
		{
			std::cout << "output";
		}

		void create()//act same like Teacher()
		{
			std::cout << "Teacher created";
		}

		Teacher()//act same like void create()
		{
			std::cout << "Teacher created";
		}
};


std::ostream& operator << (std::ostream& output, User user)
{
	output << "First name: " << user._first_name << "\nLast name: " << user._last_name;
	return output;
}

std::istream& operator >> (std::istream& input, User& user)
{
	input >> user._first_name >> user._last_name;
	return input;
}

int main()
{
	Teacher teacher;
	teacher.create();//void create must be called..Teacher() doesnt to be called
	

}
