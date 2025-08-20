#include <iostream>
#include <vector>
#include <conio.h>
#include "inputs.h"
#include "player.h"
#include "void.h"
#include "torch.h"
#include "match.h" 
#include "pickable.h"
#include "ui.h"
#include <stdlib.h>
using namespace std;

int main()
{
	
	
	
	items.emplace_back(new torch());
	items.emplace_back(new match());
	items.emplace_back(new match());
	items.emplace_back(new torch());
	items.emplace_back(new torch());
	items.emplace_back(new torch());
	items.emplace_back(new match());
	items.emplace_back(new torch());
	items.emplace_back(new match());
	items.emplace_back(new torch());
	players.push_back(player());

	if (!players[0].inventory[0]) {

		cout << "doesn't have an item" << endl;
	}
	else cout << "has an item5" << endl;
	
	move_item(0, 0);
	move_item(0, 1);
	move_item(0, 2);
	move_item(0, 3);
	//move_item(0, 4);
	move_item(0, 5);
	move_item(0, 6);
	move_item(0, 7);
	//move_item(0, 8);
	move_item(0, 9);
	
	//players[0].inventory[0] = move(items[0]);//easy
	//								used to check if the slot has an item
	if (!players[0].inventory[0]) {

		cout << "doesn't have an item5" << endl;
	}
	else cout << "has an item6" << endl;
	


	
	

	
	while (1) {
		
		input();
		Sleep(100);
	}
	
    return 0;
}