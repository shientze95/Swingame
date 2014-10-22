#ifndef INVENTORY_H
#define INVENTORY_H
#include "item.h"
#include "vector"
using namespace std;

class inventory 
{
	private:
		vector<item*>_items;

	public:
		inventory();
		~inventory();
		bool has_item(string id);
		void put(item *itm);
		item *take(string id);
		item *fetch(string id);
		string get_item_list();

};
#endif
