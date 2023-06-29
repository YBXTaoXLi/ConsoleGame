#include <random>
#include "Random.h"

int Random::random(int min,int max)
{
	return ((rand() % (max-min))+min+1);
}
