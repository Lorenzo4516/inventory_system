#ifndef VOID_H
#define VOID_H
#include "player.h"
#include "match.h"
#include "torch.h"
#include "vectors.h"
#include <iostream>
#include <vector>
#include <variant>
using namespace std;





void test() {
	cout << "test" << endl;
}

void new_player() {
	players.push_back(player());
	cout << "new player created correctly" << endl;
}





/* to renew with the cleaner inventory system (hopefully it's gonna work)

void selected_player(int player_id) {
	if (player_id > players.size()-1) cout << "error: no player with this id found" << endl;
	else {
		cout << "you selected the player with id " << players[player_id]->id << " with name " << players[player_id]->name << endl;
	}	
}

void select_player() {
	int player_id;
	cout << "insert player's id" << endl;
	cin >> player_id;
	selected_player(player_id);
}
*/



#endif // !VOID_H

