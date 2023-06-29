#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <list>
/*
* 思路：
* int类型存进iData
* double类型存进dData
* string类型存进sData
* 读取时按照subscript变量存储的顺序进行读取
* subscript存储读取顺序
* 1为int类型
* 2为double类型
* 3为string类型
* 4为错误
*/

struct Data
{
	//int iSubscript;//存储使用时候的下标
	//double dSubscript;//存储使用时候的下标
	//std::string sSubscript;//存储使用时候的下标
	std::list<int> iData;
	std::list<double> dData;
	std::list<std::string> sData;
};
//enum typeEnum
//{
//	ITYPE = 1,
//	DTYPE = 2,
//	SDYPE = 3,
//	MISTAKE = 4, 
//};
class ItemData
{
	std::string subscript;//储存读取次序
	std::vector<std::string> name;//存储变量名字
	std::list<Data> data;
public:
	ItemData(std::vector<std::string>& writeData);
	~ItemData();
	void viewAll();
};

