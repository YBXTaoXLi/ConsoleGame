#include<string>
#include "FileReadWrite.h"

FileReadWrite::FileReadWrite()
{
	
}

FileReadWrite::~FileReadWrite()
{
}

void FileReadWrite::setData(std::string path)
{
	std::string buf;
	std::ifstream ifs(path.c_str());
	if (!ifs.is_open()) {
		std::cout << "链接文件失败" << std::endl;
	}
	while (std::getline(ifs, buf))
	{
		data.push_back(buf);
	}
	/*std::vector<std::string>::iterator i;
	for (i = data.begin(); i != data.end(); ++i) {
		std::cout << *i << std::endl;
	}*/
	ifs.close();
}

void FileReadWrite::setMapData(std::string path)
{
	std::string buf;
	std::string mapbuf;
	std::ifstream ifs(path.c_str());
	if (!ifs.is_open()) {
		std::cout << "链接文件失败" << std::endl;
	}
	while (std::getline(ifs, buf))
	{
		buf += " ";
		mapbuf += buf;
	}
	mapData.push_back(mapbuf);
	/*std::list<std::string>::iterator i;
	for (i = mapData.begin(); i != mapData.end(); ++i) {
		std::cout << *i << std::endl;
	}*/
	ifs.close();
}

std::vector<std::string>* FileReadWrite::getData()
{
	return &data;
}

std::list<std::string>* FileReadWrite::getMapData()
{
	return &mapData;
}


