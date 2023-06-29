#include<string>
#include "FileReadWrite.h"
#define dataRelativePath "../Game/test.txt"
FileReadWrite::FileReadWrite()
{
	
}

FileReadWrite::~FileReadWrite()
{
}

void FileReadWrite::setData()
{
	std::string buf;
	std::ifstream ifs(dataRelativePath);
	if (!ifs.is_open()) {
		std::cout << "Á´½ÓÎÄ¼þÊ§°Ü" << std::endl;
	}
	
	while (std::getline(ifs, buf))
	{
		data.push_back(buf);
	}
	/*std::vector<std::string>::iterator i;
	for (i = data.begin(); i != data.end(); ++i) {
		std::cout << *i << std::endl;
	}*/
}

std::vector<std::string>& FileReadWrite::getData()
{
	return data;
}


