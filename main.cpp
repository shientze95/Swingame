#include <iostream>
#include <string>
#include "core4.h"
#include "gameobject.h"
#include "item.h"
#include "inventory.h"
#include "player.h"
#include <vector>
using namespace std;

int main()
{
	vector<string> ids;
	ids.push_back("shovel");
	ids.push_back("spade");
	item *shovel = new item( ids, "Shovel"," ,This is a might fine ...");
	Player *endless = new Player("Endless"," ,not a good player");
	inventory *invent =endless->get_inventory();
	invent->put(shovel);
	identifiableObject *id = new identifiableObject( ids ); 
	cout<<"Player name="<<endless->get_full_description()<<endl;
	cout<<"Are you shovel?="<<shovel->are_you("shovel")<<endl;
	cout<<"Description="<<shovel->get_short_description()<<endl;
	cout<<"Long description="<<shovel->get_full_description()<<endl;
	if(invent->has_item("shovel"))
	{
		cout<<"Is shovel avaiable?="<<"Shovel is avaiable"<<endl;
	}
	else
	{
		cout<<"Is shovel avaiable?="<<"Shovel is not in the invent"<<endl;
	}
	item *shovel_fetch=invent->fetch("shovel");
	if(shovel_fetch->are_you("shovel"))
	{
		cout<<"What are you fetching?="<<"A shovel!!"<<endl;
	}
	else
	{
		cout<<"What are you fetching?="<<"Nothing"<<endl;
	}
	item *gone=invent->take("shovel");
	if(gone->are_you("shovel"))
	{
		cout<<"Is Shovel avaiable?="<<"Nope,shovel is gone"<<endl;
	}
	else
	{
		cout<<"Is Shovel avaiable?="<<"Shovel is still in the inventory"<<endl;
	}
	if(invent->has_item("shovel"))
	{
		cout<<"Is Shovel still in Inventory?="<<"Shovel is avaiable"<<endl;
	}
	else
	{
		cout<<"Is Shovel still in Inventory?="<<"Shovel is not in the inventory"<<endl;
	}
	
	
	if(endless->are_you("me"))
	{
		cout<<"Are you ME?="<<"You're me"<<endl;
	}
	else
	{
		cout<<"Are you ME?="<<"imposter"<<endl;
	}
	cout<<"Can spade be located?="<<endless->locate("spade")<<endl;
	cout<<invent->get_item_list()<<endl;
	
	//freeing memory
	delete(id);
	return 0;
}




