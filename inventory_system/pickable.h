#ifndef PICKABLE_H
#define PICKABLE_H

class pickable {
public:

	bool stored=false;

	virtual ~pickable() = default; //to make it polymophal?
	virtual int getid() const=0;
	virtual char geticon() const = 0;
	std::string show_item=" + ";

	bool get_stored()const { return stored;}

	void set_stored() {  //muator void //accessor int
		bool _stored = get_stored();
		if (_stored) stored = false;
		else stored = true;
	}
};
#endif // !PICKABLE_H