#ifndef VOID_H
#define VOID_H
#include "player.h"
#include "match.h"
#include "torch.h"
#include "variables.h"
#include <iostream>
#include <vector>
#include <variant>






void test() {
	std::cout << "test" << std::endl;
}

void new_player() {
	players.push_back(player());
	std::cout << "new player created correctly" << std::endl;
}

void move_item(int p_id,int item_id) {
	static int pos = 0;
	items[item_id]->set_stored();
	players[p_id].inventory[pos] = move(items[item_id]);
	pos++;
}


void show_world_items() {

	int items_id = 1;

	for (int i = 0; i < items.size(); i++) {
		if (items[i])std::cout << items[i]->show_item;
	}
}


//it shows the player inventory correctly ** migth be to be redone (easier method implemented inside the classes)
void show_inventory(int p_id) {

	
	static bool is_open = false;
	static std::string inv(30, ' ');
	int inv_id = 1;

	if (is_open) {
		system("CLS");
		is_open = false;
	}

	else {
		system("CLS");
		
		for (int p_inv_id = 0; p_inv_id < players[p_id].inventory.size(); p_inv_id++) {

			if (players[p_id].inventory[p_inv_id]) inv[inv_id] = players[p_id].inventory[p_inv_id]->geticon();
			else inv[inv_id] = '+';
			inv_id += 3;
		}

		std::cout << inv << std::endl;
		std::cout << "ss" << std::endl;
		show_world_items();
		is_open = true;

	}
}

//to be continued








#endif // !VOID_H

