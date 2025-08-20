#ifndef VARIABLES_H
#define VARIABLES_H
#include <vector>
#include <variant>
#include<memory>
#include "player.h"
#include "pickable.h"

std::vector <std::unique_ptr<pickable>> items; //should be stable enough (idk how to pass them: items->player.inventory) **

std::vector <player> players;



#endif // !VARIABLES_H

