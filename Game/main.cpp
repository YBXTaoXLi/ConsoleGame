#include<fstream>
#include <iostream>
#include "Houses.h"
#include "Interface.h"
#include "Random.h"
#include "Thing.h"
#include "FileReadWrite.h"
#include "ItemData.h"

int main()
{
	/*std::ofstream ofs;
	ofs.open("../Game/test.txt", std::ios::out);
	if (!ofs.is_open())
	{
		std::cout << "链接文件失败" << std::endl;
	}
	ofs << "0\t小麦" << std::endl;
	ofs << "1\t面粉" << std::endl;
	ofs << "2\t面包" << std::endl;
	ofs.close();
	char buf[1024]={ 0 };
	int b = 0;
	std::ifstream fin;
	fin.open("../Game/test.txt", std::ios::out);
	while (fin.getline(buf, sizeof(buf))) {
		std::cout << buf << std::endl;
	}
	return 0;*/
	FileReadWrite fileReadWrite{};
	fileReadWrite.setData();
	ItemData itemData{fileReadWrite.getData()};
	/*srand(time(nullptr));
	Interface interface{};
	switch (interface.getChoose()) {
	case 1:
		break;
	case 2:
		break;
	case 3:
		return 0;
		break;
	}
	return -1;*/
}