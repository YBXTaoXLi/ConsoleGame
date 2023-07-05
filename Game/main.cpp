#include<fstream>
#include <iostream>
#include "Map.h"
#include "Interface.h"
#include "Random.h"
#include "Thing.h"
#include "FileReadWrite.h"
#include "ItemData.h"
#include "FoodData.h"
#include "Operate.h"
#define MAP_WIDTH 20//地图宽度
#define ITEM_DATA "../Game/Test.txt"//物品列表
#define FOOD_DATA "../Game/FoodTest.txt"//食物列表
#define MAP_DATA  "../Game/MapTest.txt"//地图列表
int main()
{
	FileReadWrite fileReadWrite{};
	Operate operate{};
	Interface interface {};
	fileReadWrite.setData(FOOD_DATA);
	FoodData foodData{fileReadWrite.getData()};
	fileReadWrite.setMapData(MAP_DATA);
	Map map{fileReadWrite.getMapData()};
	srand(time(nullptr));
	interface.mainPrintf();
	switch (interface.getChoose()) {
	case 1:
		while (true)
		{
			system("cls");
			interface.mapPrint(map.getMap(1), MAP_WIDTH);
			interface.choosePrint();
			operate.setOperate();
			if (operate.getOperate()=="0")
			{
				break;
			}
			operate.mapOperate(map.getMap(1), operate.getOperate(), MAP_WIDTH);
		}
		break;
	case 2:
		break;
	case 3:
		return 0;
		break;
	}
	return -1;
}