#pragma once
#include <vector>
#include <iostream>
#include <fstream>
#include <list>
class FileReadWrite//ÎÄ¼þ¶ÁÐ´Àà
{
	std::vector<std::string> data;
	std::list<std::string> mapData;
public:
	FileReadWrite();
	~FileReadWrite();
	void setData(std::string path);
	void setMapData(std::string path);
	std::vector<std::string>* getData();
	std::list<std::string>* getMapData();
};

