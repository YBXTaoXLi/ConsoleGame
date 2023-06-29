#pragma once

#define MAXROOM 21;//最大建筑层数
#define MINROOM 3;
class Houses//房屋类
{
	int maxRoom;//最大房间数量
	int exploredRoom;//已探索房间数量
public:
	Houses(int random);
	~Houses();
	int getMaxRoom();
	int getExploredRoom();
};

