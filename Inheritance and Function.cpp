#include <iostream>
#include <vector>
#include <string>
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
};


class Teacher : public User // class Teacher inherit from class User
{
	public:
		std::vector<std::string>classes_teaching;
	
		void output()
		{
			std::cout << "output";
		}

		void create()
		{
			std::cout << "Teacher created";
		}
};

int main()
{
	Teacher teacher;
	teacher._first_name = "Mustaqim";
	cout<<teacher._first_name<<": "<<teacher.get_status()<<endl;
	
	teacher.create();//void create must be called..Teacher() doesnt to be called
}
