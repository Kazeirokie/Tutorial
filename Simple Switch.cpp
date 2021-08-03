#include <iostream>
using namespace std;

int main()
{
	enum class Season { summer, spring, fall, winter };
	Season now = Season::spring;

	switch (now)
	{
	case Season::summer:
		cout << "Wow! It's very hot outside.\n\n";
		break;
	case Season::spring:
		cout << "Flowers are blooming.\n\n";
		break;
	case Season::fall:
		cout << "Look! It's browny outside\n\n";
		break;
	case Season::winter:
		cout << "Let's build a snowman!\n\n";
		break;
	default:
		break;
	}

	int age;
	cout << "What is your age? \n";
	cin >> age;
	switch (age)
	{
	case 10: // 10 & 11 will execute same output
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

// switch limited to int only
