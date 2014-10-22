#ifndef ITEM_H
#define ITEM_H
#include <vector>
#include "gameobject.h"
#include<string>

using namespace std;

class item: public gameObject
{
	public:
		item(vector<string>ids,string name, string desc);

};
#endif


