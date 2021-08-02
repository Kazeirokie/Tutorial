#include <iostream>
using std::cout;
using std::cin;

int main()
{
	//enum class Season { summer, spring, fall, winter };
	//Season now = Season::spring;

	/*switch (now)
	{
	case Season::summer:
		cout << "Wow! It's very hot outside.";
		break;
	case Season::spring:
		cout << "Flowers are blooming.";
		break;
	case Season::fall:
		cout << "Look! It's browny outside";
		break;
	case Season::winter:
		cout << "Let's build a snowman!";
		break;
	}*/

	int age;
	cout << "What is your age? \n";
	cin >> age;
	switch (age)
	{
	case 10:
	case 11:
		cout << "You're too young.";
		break;
	case 17:
		cout << "You're not eligible.";
		break;
	case 18:
		cout << "You can make an account.";
		break;
	default:
		cout << "Put a suitable age only! \n\n";
		main();

	}

}

//switch limited to integral only