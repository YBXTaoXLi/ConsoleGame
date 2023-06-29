#include "ItemData.h"

ItemData::ItemData(std::vector<std::string>& writeData)
{
	int i = 0;
	int j = 0;
	int k = 0;
	std::string buf = writeData[i];
	std::string sbuf;
	i++;
	while (j<buf.size())
	{
		while (buf[j] != '\t' && j < buf.size())
		{
			sbuf += buf[j];
			j++;
		}
		while (buf[j] == '\t')
		{
			j++;
		}
		//std::cout << sbuf << std::endl;
		if (sbuf[0]=='i'){
			subscript += "1 ";
		}
		else if(sbuf[0] == 'd'){
			subscript += "2 ";
		}
		else if (sbuf[0] == 's') {
			subscript += "3 ";
		}
		sbuf.erase(sbuf.begin());
		name.push_back(sbuf);
		sbuf = "";
	}
	/*std::vector<std::string>::iterator k;
	for (k = name.begin(); k != name.end(); ++k) {
		std::cout << *k << std::endl;
	}*/
	j = 0;
	sbuf = "";
	//std::cout << writeData.size() << std::endl;
	while (i < writeData.size())
	{
		buf = writeData[i];
		while (j < buf.size())
		{
			while (buf[j] != '\t' && j < buf.size())
			{
				sbuf += buf[j];
				j++;
			}
			while (buf[j] == '\t')
			{
				j++;
			}
			std::cout << sbuf << "\t";
			if (subscript[k]=='1'){

			}
			else if(subscript[k] == '2'){

			}
			else if (subscript[k] == '3') {

			}

			sbuf = "";
		}
		j = 0;
		i++;
		std::cout << std::endl;
	}
	
	
}

ItemData::~ItemData()
{
}
