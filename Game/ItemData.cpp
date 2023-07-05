#include "ItemData.h"

ItemData::ItemData(std::vector<std::string>* writeData)
{
	int i = 0;
	int j = 0;
	int k = 0;
	std::string buf = (*writeData)[i];
	std::string sbuf;
	Data databuf;
	i++;
	while (j<buf.size())
	{
		while (buf[j] != '\t' && j < buf.size())
		{
			sbuf += buf[j];
			j++;
		}
		while (buf[j] == '\t' && j < buf.size())
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
		else{
			subscript += "4 ";
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
	while (i < (*writeData).size())
	{
		buf = (*writeData)[i];
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
			//std::cout << sbuf << "\t";
			if (subscript[k]=='1'){
				//std::cout << "i" << sbuf << "\t";
				databuf.iData.push_back(atoi(sbuf.c_str()));
			}
			else if(subscript[k] == '2'){
				//std::cout << "d" << sbuf << "\t";
				databuf.dData.push_back(std::stod(sbuf));
			}
			else if (subscript[k] == '3') {
				//std::cout << "s" << sbuf << "\t";
				databuf.sData.push_back(sbuf);
			}
			else {
				databuf.sData.push_back("无效数据");
				std::cout << "数据类型错误！" << std::endl;
			}
			sbuf = "";
			k += 2;
		}
		data.push_back(databuf);
		databuf.iData.clear();
		databuf.dData.clear();
		databuf.sData.clear();
		k = 0;
		j = 0;
		i++;
		//std::cout << std::endl;
	}
	
	
}

ItemData::~ItemData()
{
}

void ItemData::viewAll()
{
	std::vector<std::string>::iterator i;
	std::list<Data>::iterator k = data.begin();
	std::list<int>::iterator iSubscript;
	std::list<double>::iterator dSubscript;
	std::list<std::string>::iterator sSubscript;
	int j = 0;
	int l = 0;
	for (i = name.begin(); i != name.end(); ++i)
	{
		std::cout << *i << "\t";
		/*if (((*i).size()) / 8 == 0);
		{
			std::cout << "\t";
		}
		for (size_t k = 0; k < ((*i).size())/8; k++)
		{
			std::cout << "\t";
		}*/
	}
	std::cout << std::endl;
	for (;k != data.end(); ++k)
	{
		iSubscript = (*k).iData.begin();
		dSubscript = (*k).dData.begin();
		sSubscript = (*k).sData.begin();
		int size = (*k).iData.size() + (*k).dData.size() + (*k).sData.size();
		while (l<size)
		{
			if (subscript[j] == '1') {
				if ((*k).iData.end() != iSubscript)
				{
					std::cout << *iSubscript << "\t";
					++iSubscript;
				}
			}
			else if (subscript[j] == '2') {
				if ((*k).dData.end() != dSubscript)
				{
					std::cout << *dSubscript << "\t";
					++dSubscript;
				}
			}
			else if (subscript[j] == '3') {
				if ((*k).sData.end() != sSubscript)
				{
					std::cout << *sSubscript << "\t";
					++sSubscript;
				}
			}
			else {
				if ((*k).sData.end() != sSubscript)
				{
					std::cout << *sSubscript << "\t";
					++sSubscript;
				}
				//std::cout << "无效数据" << '\t';
			}
			j += 2;
			l++;
		}
		std::cout << std::endl;
		j = 0;
		l = 0;
	}
}
