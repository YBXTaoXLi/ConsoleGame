#include "Map.h"

Map::Map(std::list<std::string>* data)
{
	std::vector<unsigned short> mapBuf;
	std::string buf;
	std::list<std::string>::iterator i;
	for ( i = data->begin(); i!=data->end(); ++i)
	{
		for (size_t j = 0; j < (*i).size();)
		{
			while ((*i)[j] != ' ' && j < (*i).size())
			{
				buf += (*i)[j];
				j++;
			}
			if (buf != "")
			{
				mapBuf.push_back(std::stoi(buf));
			}
			buf = "";
			while ((*i)[j] == ' ' && j < (*i).size())
			{
				j++;
			}
		}
		manyMapData.push_back(mapBuf);
	}
}

Map::~Map()
{
}

std::vector<unsigned short>* Map::getMap(int selectMap)
{
	std::list<std::vector<unsigned short>>::iterator i = manyMapData.begin();
	//std::cout << manyMapData.size() << std::endl;
	if (manyMapData.size() < selectMap)
	{
		std::cout << "严重错误！地图超出最大值！" << std::endl;
		return nullptr;
	}
	for (size_t j = 1; j <selectMap ; j++)
	{
		i++;
	}
	return &(*i);
}
