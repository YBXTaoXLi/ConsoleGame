#include "Houses.h"

Houses::Houses(int random)
{
	maxRoom = random;
	exploredRoom = 0;
}

Houses::~Houses()
{
}

int Houses::getMaxRoom()
{
	return maxRoom;
}

int Houses::getExploredRoom()
{
	return exploredRoom;
}
