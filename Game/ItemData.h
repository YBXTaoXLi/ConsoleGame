#pragma once
#include <iostream>
#include <vector>
#include <list>
struct Data
{
	int iSubscript;//�洢ʹ��ʱ����±�
	double dSubscript;//�洢ʹ��ʱ����±�
	std::string sSubscript;//�洢ʹ��ʱ����±�
	std::list<int> iData;
	std::list<double> dData;
	std::list<std::string> sData;
};
class ItemData
{
	std::string subscript;//�����ȡ����
	std::vector<std::string> name;//�洢��������
	std::list<Data> data;
public:
	ItemData(std::vector<std::string>& writeData);
	~ItemData();
};

