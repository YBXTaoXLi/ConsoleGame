#include <iostream>
#include "Interface.h"
Interface::Interface()
{
	choose = 0;
	do
	{
		system("cls");
		std::cout << "*****************欢迎来到苟下去*****************" << std::endl;
		std::cout << "*                                              *" << std::endl;
		std::cout << "*                  1-开始游戏                  *" << std::endl;
		std::cout << "*                  2-继续游戏                  *" << std::endl;
		std::cout << "*                  3-退出游戏                  *" << std::endl;
		std::cout << "*                                              *" << std::endl;
		std::cout << "************************************************" << std::endl;
		std::cin >> choose;
	} while (choose>3||choose<1);
}

int Interface::getChoose()
{
	return choose;
}
