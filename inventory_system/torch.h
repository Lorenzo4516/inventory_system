#ifndef TORCH_H
#define TORCH_H
#include "pickable.h"

class torch : public pickable {
public:
	std::string type = "torch";
	int id;
	char icon = '*';
	bool is_lit = false;

	int getid() const { return id; }
	char geticon() const { return icon; }
	void numeration() {
		static int previous_id = 0;
		id = previous_id++;
	};

	torch() {
		numeration();
		show_item[1] = geticon();
	}

};
#endif 








/*
#ifndef TORCH_H
#define TORCH_H
#include "pickable.h"

class torch{
public:
	string type = "torch";
	int id;
	bool is_lit = false;


	void numeration() {
		static int previous_id = 1;
		id = previous_id;
		previous_id++;

	};

	torch() {
		numeration();
	}

};
#endif 
*/












