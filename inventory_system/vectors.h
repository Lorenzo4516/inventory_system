#ifndef VECTORS_H
#define VECTORS_H
#include <vector>
#include <variant>
#include<memory>
#include "player.h"
#include "pickable.h"

vector <unique_ptr<pickable>> items;
vector <player> players;

#endif // !VECTORS_H

