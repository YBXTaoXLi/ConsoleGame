#include "Interface.h"
Interface::Interface()
{
	
}

Interface::~Interface()
{
}

void Interface::mainPrintf()
{
	choose = 0;
	do
	{
		std::cout << "*****************欢迎来到苟下去*****************" << std::endl;
		std::cout << "*                                              *" << std::endl;
		std::cout << "*                  1-开始游戏                  *" << std::endl;
		std::cout << "*                  2-继续游戏                  *" << std::endl;
		std::cout << "*                  3-退出游戏                  *" << std::endl;
		std::cout << "*                                              *" << std::endl;
		std::cout << "************************************************" << std::endl;
		std::cin >> choose;
		system("cls");
	} while (choose > 3 || choose < 1);
}

void Interface::choosePrint()
{
	std::cout << "请输入  W-向上  S-向下  A-向左  D-向右\n";
}

int Interface::getChoose()
{
	return choose;
}

void Interface::mapPrint(std::vector<unsigned short>* map,int width)
{
	std::cout << std::endl;
	int j = 1;
	bool judge = true;
	std::vector<unsigned short>::iterator i;
	for (i = map->begin(); i !=map->end() ; ++i)
	{
		//std::cout << (*i);
		if ((*i) == 1) {
			std::cout << "玩";//玩家
		}
		else if ((*i) == 2){
			std::cout << "　";//可移动的块
		}
		else if ((*i) == 3){
			std::cout << "墙";//墙壁
		}
		else if ((*i) == 4) {
			std::cout << "树";//墙壁
		}
		if ((j % width) == 0)
		{
			std::cout << std::endl;
		}
		j++;
	}
	std::cout << std::endl;
}




