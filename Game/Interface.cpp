#include <iostream>
#include "Interface.h"
Interface::Interface()
{
	choose = 0;
	do
	{
		system("cls");
		std::cout << "*****************��ӭ��������ȥ*****************" << std::endl;
		std::cout << "*                                              *" << std::endl;
		std::cout << "*                  1-��ʼ��Ϸ                  *" << std::endl;
		std::cout << "*                  2-������Ϸ                  *" << std::endl;
		std::cout << "*                  3-�˳���Ϸ                  *" << std::endl;
		std::cout << "*                                              *" << std::endl;
		std::cout << "************************************************" << std::endl;
		std::cin >> choose;
	} while (choose>3||choose<1);
}

int Interface::getChoose()
{
	return choose;
}
