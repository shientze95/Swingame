#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H
#include <vector>
#include "core4.h"

using namespace std;

class gameObject :public identifiableObject
{
	private:
		string _description;
		string _name;

	public:
		gameObject(vector<string>ids,string name,string desc);
		virtual ~gameObject()=0;
		string get_name();
		string get_short_description();
		virtual string get_full_description();

};
#endif


