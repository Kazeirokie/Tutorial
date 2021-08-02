#include <iostream>

class Position
{

public:
	int x = 10;
	int y = 20;


	Position operator + (Position pos)//operator + is command & not var
	{
		Position new_pos;
		new_pos.x = x + pos.x;// x=10 , pos.x=10...pos3.x = 20
		new_pos.y = y + pos.y;// y=20 , pos.y=20...pos3.y = 40
		return new_pos;
	}


	bool operator == (Position pos)//operator == is command & not var
	{
		if (x == pos.x && y == pos.y)
		{
			return true;//if true code will be executed
		}
		else
		{
			return false;
		}
	}
};


int main()
{

	Position pos1, pos2;//every pos(pos1,pos2,pos3) has x and y (x,y)

	Position pos3 = pos1 + pos2;//pos3 = (10,20)+(10,20) = (20,40)
	std::cout << pos3.x << " " << pos3.y << std::endl;


	if (pos1 == pos2)
	//considering to no change in int x and int y..so pos1 and pos2 has same x and y
	{
		std::cout << "\n" << "They are the same!" << std::endl;
	}

}