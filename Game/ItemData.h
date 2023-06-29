#pragma once
#include <iostream>
#include <vector>
#include <list>
struct Data
{
	int iSubscript;//存储使用时候的下标
	double dSubscript;//存储使用时候的下标
	std::string sSubscript;//存储使用时候的下标
	std::list<int> iData;
	std::list<double> dData;
	std::list<std::string> sData;
};
class ItemData
{
	std::string subscript;//储存读取次序
	std::vector<std::string> name;//存储变量名字
	std::list<Data> data;
public:
	ItemData(std::vector<std::string>& writeData);
	~ItemData();
};

