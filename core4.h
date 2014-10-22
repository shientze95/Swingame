#ifndef CORE4_H
#define CORE4_H
#include <vector>
#include <string>
using namespace std;

class identifiableObject
{
	private:
		//acts as a dyanamic array to store strings
		vector<string> _identifiers;

	public:
		///constructor
		identifiableObject(vector<string> idents);
		//de-constructor
		~identifiableObject();
		//checking between fred and bob
		bool are_you(string id);
		//first id in 
		string first_id();
		void add_identifier(string id);
};


#endif

