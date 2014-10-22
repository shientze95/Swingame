#include <vector>
#include <ctype.h>
#include <string>
#include "core4.h"
#include "gameobject.h"

gameObject::gameObject(vector<string>ids,string name,string desc):identifiableObject(ids)
{
	_name=name;
	_description=desc;	

}
gameObject::~gameObject()
{

}
string gameObject::get_name()
{
	return _name;
}

string gameObject::get_short_description()
{
	return _description;
}

string gameObject::get_full_description()
{
	return _name+_description;
}

