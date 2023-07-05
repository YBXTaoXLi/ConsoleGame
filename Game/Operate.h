#pragma once
#include <iostream>
#include <vector>
#include <conio.h>
class Operate
{
	std::string operate;
public:
	Operate();
	~Operate();
	std::string getOperate();
	void mapOperate(std::vector<unsigned short>* map, std::string operateSymbol, int width);
	void setOperate();
};

