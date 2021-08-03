#include <vector>
#include <string>
#include <iostream>
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
	virtual void output()
	{
		std::cout << "I am a user" << endl;
	}
};


class Teacher : public User // class Teacher inherit from class User
{
public:
	std::vector<std::string>classes_teaching;

	Teacher()
	{
		std::cout << "Teacher created" << endl;
	}
};


class Student : public User//student inherit from user
{
public:
	void output()
	{
		std::cout << "I am a student"<<endl;
	}
};

std::ostream& operator << (std::ostream& output, User user) // Must have output
{
	output << "First name: " << user._first_name << "\nLast name: " << user._last_name;
	return output;
}

std::istream& operator >> (std::istream& input, User& user) // Must have input
{
	input >> user._first_name >> user._last_name;
	return input;
}

void separate_class(User& user)
{
	user.output();
}

int main()
{
	Student student;     // Create student to get data from class Student
	User& u1 = teacher;  //u1 represent user1
	User& u2 = student;

	//u1.output();  //output function inherit from User class
	//u2.output();

	separate_class(u1);  //act the same like u1.output
	separate_class(u2);
}
//how both of them different even they inherite from same User..
//the output func will be taken from the student / teacher first.
//if no output func there..then it will be taken from User.(referred to teacher)
