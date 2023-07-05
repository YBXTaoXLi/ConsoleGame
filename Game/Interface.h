#pragma once
#include <iostream>
#include <vector>
class Interface
{
	int choose;
public:
	Interface();
	~Interface();
	void mainPrintf();
	int getChoose();
	void mapPrint(std::vector<unsigned short>* map, int width);
	void choosePrint();
};

