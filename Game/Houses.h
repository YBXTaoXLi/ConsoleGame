#pragma once

#define MAXROOM 21;//���������
#define MINROOM 3;
class Houses//������
{
	int maxRoom;//��󷿼�����
	int exploredRoom;//��̽����������
public:
	Houses(int random);
	~Houses();
	int getMaxRoom();
	int getExploredRoom();
};

