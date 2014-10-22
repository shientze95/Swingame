#include <vector>
#include <ctype.h>
#include <string>
#include "core4.h"
#include "gameobject.h"
#include "inventory.h"
#include "item.h"
#include "player.h"

using namespace std;

identifiableObject::identifiableObject(vector<string> idents)
{
	_identifiers=idents;

}
identifiableObject::~identifiableObject()
{
}

bool identifiableObject::are_you(string id)
{
	int i=0;
	int p;
	do
	{
		for(p=0;p<id.length();p++){
			id[p]=tolower(id[p]);	
		}
		if(_identifiers.at(i)==id)
		{

			return true;
		}
		i++;
	}while(i<_identifiers.size());
	return false;
}

string identifiableObject::first_id()
{	
	if(_identifiers.size()==0)
	{
		return "";

	}
	else
	{
		return _identifiers.front();
	}

}

void identifiableObject::add_identifier(string id)
{	
	int i;
	for(i=0;i<id.length();i++){
		id[i]=tolower(id[i]);
	}
	_identifiers.push_back(id);
}














