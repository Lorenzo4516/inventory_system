#ifndef PICKABLE_H
#define PICKABLE_H

class pickable {
public:

	bool stored = false;
	virtual ~pickable() = default; //to make it polymophal?
};


#endif // !PICKABLE_H

