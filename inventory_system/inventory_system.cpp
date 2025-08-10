#include <iostream>
#include <vector>
#include <conio.h>
#include <Windows.h>
#include "player.h"
#include "void.h"
#include "torch.h"
#include "match.h" 
#include "pickable.h"

#include <variant>
#include <memory>
using namespace std;

int main()
{

	
	

 	items.emplace_back(new torch()); //should be stable enough (idk how to pass them: items->player.inventory) **
	items.emplace_back(new torch());
	items.emplace_back(new match());
	items.emplace_back(new match());
	
	cout << "test3" << endl;
	players.push_back(player());


	cout << players[0].inventory[0] << endl;
	
	auto* torchPtr = dynamic_cast<torch*>(items[0].get()); //not ideal at all but works for now (too many if iterations)
	if (torchPtr) {															//this isn't required but if the bool is true it means that it's a torch object
		cout << "this is a ";
		cout << torchPtr->type << endl;
		cout << "whith id ";
		cout << torchPtr->id << endl;
		cout << "memory address ";
		cout << torchPtr << endl;
	}
	players[0].inventory[0]=move(items[0]); //it moves the ownership? ** tehcically i did it
	
	if (torchPtr) {															
		cout << "this is a ";
		cout << torchPtr->type << endl;
		cout << "whith id ";
		cout << torchPtr->id << endl;
		cout << "memory address ";
		cout << torchPtr << endl;
	}
	else cout << "idk" << endl;
	cout << "memory address inventory ";
	cout << players[0].inventory[0] << endl;



	while (1) {

		if (GetKeyState(0x53) & 0x8000)
		{
		//	new_player();		stopped for testing as of now
		}
	 Sleep(100);
		
	}
	
    return 0;
}