#ifndef MATCH_H
#define MATCH_H
#include "pickable.h"

class match : public pickable {
public:
	std::string type = "match";
	int id;
	char icon = '/';
	int getid() const { return id; }
	char geticon() const { return icon; }
	void numeration() {
		static int previous_id = 0;
		id = previous_id++;
	};

	match() {
		numeration();
		show_item[1] = geticon();
	}

};
#endif












/*
#ifndef MATCH_H
#define MATCH_H

class match{
public:
	string type = "match";
	int id;

	void numeration() {
		static int previous_id = 1;
		id = previous_id;
		previous_id++;

	};

	match() {
		numeration();
	}

};
#endif 
*/








