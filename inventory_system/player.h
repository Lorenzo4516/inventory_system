#ifndef PLAYER_H
#define PLAYER_H
#include "pickable.h"
#include <iostream>
#include <string>
#include <vector>


class player {
	
public:

	int id;
	std::string name;
	std::vector <std::unique_ptr<pickable>> inventory;


	void numeration() {
		static int previous_id = 0;
		id = previous_id++;
		

	};
	
	player() {
		/*
		std::cout << "player's name" << std::endl;
		std::cin >> name;		//to be removed*/
		name = "p1";
		
		inventory.resize(10);
		numeration();
	}


};

#endif // !PLAYER_H


