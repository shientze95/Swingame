#ifndef PLAYER_H
#define PLAYER_H
#include "inventory.h"
#include "gameobject.h"


using namespace std;

class Player :public gameObject
{
	private:
		inventory *_inventory;

	public:
		Player(string name,string desc);
		virtual ~Player();
		gameObject* locate(string id);
		inventory* get_inventory();
	  	string get_full_description();
};
#endif
