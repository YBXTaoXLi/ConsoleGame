#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <list>
/*
* ˼·��
* int���ʹ��iData
* double���ʹ��dData
* string���ʹ��sData
* ��ȡʱ����subscript�����洢��˳����ж�ȡ
* subscript�洢��ȡ˳��
* 1Ϊint����
* 2Ϊdouble����
* 3Ϊstring����
* 4Ϊ����
*/

struct Data
{
	//int iSubscript;//�洢ʹ��ʱ����±�
	//double dSubscript;//�洢ʹ��ʱ����±�
	//std::string sSubscript;//�洢ʹ��ʱ����±�
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
	std::string subscript;//�����ȡ����
	std::vector<std::string> name;//�洢��������
	std::list<Data> data;
public:
	ItemData(std::vector<std::string>& writeData);
	~ItemData();
	void viewAll();
};

