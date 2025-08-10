#ifndef PLAYER_H
#define PLAYER_H
#include "pickable.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class player {
	
public:

	int id;
	string name;
	vector <unique_ptr<pickable>> inventory;


	void numeration() {
		static int previous_id = 0;
		id = previous_id++;
		

	};
	
	player() {
		cout << "player's name" << endl;
		cin >> name;
		inventory.resize(10);
		numeration();
	}


};

#endif // !PLAYER_H


