#pragma once
#include <vector>
#include <list>
#include <iostream>
#include <string>

class Map
{
	std::list<std::vector<unsigned short>> manyMapData;
public:
	Map(std::list<std::string>* data);
	~Map();
	std::vector<unsigned short>* getMap(int selectMap);
};

