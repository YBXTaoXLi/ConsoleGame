#pragma once
#include <vector>
#include <iostream>
#include <fstream>
class FileReadWrite//�ļ���д��
{
	std::vector<std::string> data;
public:
	FileReadWrite();
	~FileReadWrite();
	void setData();
	std::vector<std::string>& getData();
};

