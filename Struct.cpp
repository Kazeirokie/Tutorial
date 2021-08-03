#include <iostream>
#include <vector>

using namespace std;

struct User // default struct is public
{
	std::string first_name;
	std::string last_name;
	std::string get_status()
	{
		return status;
	}
	private:
	std::string status = "Passed";
};

int main()
{
	User user_1;
	user_1.first_name = "Tom";
	user_1.last_name = "Anderson";

	cout << "First name: " << user_1.first_name << "\n" 
	<< "Last name: " << user_1.last_name << "\n" 
	<< "Status : " << user_1.get_status() << endl;
}
