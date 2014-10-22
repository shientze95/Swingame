#include "core4.h"
#include "inventory.h"
#include "item.h"
#include <vector>
#include <string>
using namespace std;
inventory::inventory()
{

}

inventory::~inventory()
{

}
bool inventory::has_item(string id)
{
	for(item* x:_items)
	{
		if(x->are_you(id))
		{
			return true;
		}
		
	}	
	return false;

}

void inventory::put(item *itm)
{
	_items.push_back(itm);
}

item* inventory:: take(string id)
{
	for(int i=0;i<_items.size();i++)
	{
		item *x=_items[i];
		
		if(x->are_you(id))
		{
			_items.erase(_items.begin()+i);
			return x;
		}
	}
	return NULL;
	
}

item* inventory:: fetch(string id)
{
	for(item* x:_items)
	{
		if(x->are_you(id))
		{
			return x;
		}
	}
	return NULL;
}

string inventory::get_item_list()
{
	string fulllist("");
	for(int i;_items.size();i++)
	{
		fulllist+=_items[i]->get_short_description()+ "\n";
	}
	return fulllist;
				
}
