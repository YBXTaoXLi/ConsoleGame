#include "Operate.h"

Operate::Operate()
{
}

Operate::~Operate()
{
}

std::string Operate::getOperate()
{
	return operate;
}

void Operate::mapOperate(std::vector<unsigned short>* map, std::string operateSymbol, int width)
{
	std::vector<unsigned short>::iterator i;
	for (i = map->begin(); i != map->end(); ++i)
	{
		if ((*i)==1)
		{
			break;
		}
	}
	if (operateSymbol == "W" || operateSymbol == "w") {
		for (size_t k = 0; k < width; k++)
		{
			i--;
		}
		if ((*i) == 2)
		{
			(*i) = 1;
			for (size_t k = 0; k < width; k++)
			{
				i++;
			}
			(*i) = 2;
		}
		
	}
	else if (operateSymbol == "S" || operateSymbol == "s"){
		for (size_t k = 0; k < width; k++)
		{
			i++;
		}
		if ((*i) == 2)
		{
			(*i) = 1;
			for (size_t k = 0; k < width; k++)
			{
				i--;
			}
			(*i) = 2;
		}
	}
	else if (operateSymbol == "A" || operateSymbol == "a") {
		i--;
		if ((*i) == 2)
		{
			(*i) = 1;
			i++;
			(*i) = 2;
		}
	}
	else if (operateSymbol == "D" || operateSymbol == "d") {
		i++;
		if ((*i) == 2)
		{
			(*i) = 1;
			i--;
			(*i) = 2;
		}
	}
	else{
		std::cout << "严重错误！没有找到合适的操作！" << std::endl;
	}
	return;
}

void Operate::setOperate()
{
	while (true)
	{
		//std::cin >> operate;
		operate = _getch();
		if (operate == "w" || operate == "W" || operate == "s" || operate == "S" || operate == "a" || operate == "A" || operate == "d" || operate == "D" || operate == "0"){
			return;
		}
		else{
			std::cout << "\n输入错误！\n";
		}
	}
}
