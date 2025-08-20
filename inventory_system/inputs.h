#ifndef INPUT_H
#define INPUT_H

#include <windows.h>
#include "void.h"
#include <iostream>


void input() {

	if (GetKeyState(0x53) & 0x8000)
	{
		//	new_player();		stopped for testing as of now
	}

	if (GetKeyState(0x45) & 0x8000)
	{
		show_inventory(0);
	}
	if (GetKeyState(VK_LSHIFT) & 0x8000)
	{
		std::cout << "shift" << std::endl;
		show_world_items();
	}
}


#endif // !INPUT_H

