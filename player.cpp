#include "player.h"
#include "core4.h"
#include "gameobject.h"
#include "inventory.h"


Player::Player(string name, string desc):gameObject(vector<string>(), name, desc)
{
	add_identifier("me");
	add_identifier("inventory");
	_inventory=  new inventory;
} 
Player::~Player()
{
	delete _inventory;
}
gameObject* Player::locate(string id)
{
	if(are_you(id))
	{
		return this;
	}
	else
	{
		return _inventory->fetch(id);
	}
}

string Player::get_full_description()
{
	return get_name()+ get_short_description();
}

inventory* Player::get_inventory()
{
	return _inventory;
}
