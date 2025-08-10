/* maybe not eh
#ifndef PLAYER_INVENTORY_H
#define PLAYER_INVENTORY_H
#include "player.h"
#include "torch.h"
#include "match.h" 
#include "pickable.h"
#include <vector>
#include <variant>
#include <memory>

class player_inventory : public player { 

	vector <unique_ptr<pickable>> inventory;
	 
	player_inventory() {
		inventory.resize(10);
	}
};

#endif // !PLAYER_INVENTORY_H
*/