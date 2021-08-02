#include <iostream>
#include <vector>

using std::cout;


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

int add_user_if_not_exist(std::vector<User>& users, User user)
{
	for (int i = 0; i < users.size(); i++)//user given 3..index 0,1,2
	{
		if (users[i].first_name == user.first_name &&
			users[i].last_name == user.last_name)
		{
			return i;
		}
	}
	users.push_back(user);
	return users.size() - 1;
}

int main()
{
	std::vector<User> users;//users is the name of the vector

	User user1, user2, user3;

	user1.first_name = "Aminul";//index 0
	user1.last_name = "Aiman";

	user2.first_name = "Karim";//index 1
	user2.last_name = "Ahmad";

	user3.first_name = "Loki";//index 2
	user3.last_name = "Odinson";

	users.push_back(user1);//this code give user1,user2,user3..
	users.push_back(user2);//its index.
	users.push_back(user3);

	User user;

	user.first_name = "Thor";//if new user detected 
	user.last_name = "Odinson";//it will be taken new index

	std::cout << add_user_if_not_exist(users, user);//index will be displayed
	return 0;
}