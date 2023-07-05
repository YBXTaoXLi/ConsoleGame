#pragma once
#include <vector>
#include <iostream>
#include "ItemData.h"
class FoodData :public ItemData
{
public:
	FoodData(std::vector<std::string>* writeData);
	~FoodData();
};

