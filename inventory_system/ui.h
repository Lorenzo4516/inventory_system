#ifndef UI_H
#define UI_H
#include <iostream>
#include <vector>
class ui {

public:
	std::vector < std::vector<char>> un = {
		{'+', '-', '-', '-', '-', '-','+'},
		{'|', ' ', ' ', ' ', ' ', ' ','|'},
		{'|', ' ', '+', '-', '+', ' ','|'},
		{'|', ' ', '|', ' ', '|', ' ','|'},
		{'|', ' ', '+', '-', '+', ' ','|'},
		{'|', ' ', ' ', ' ', ' ', ' ','|'},
		{'+', '-', '-', '-', '-', '-','+'}
	};

	std::vector < std::vector<char>> sel = {
		{'+', '-', '-', '-', '-', '-','+'},
		{'|', '*', '-', '-', '-', '*','|'},
		{'|', '|', '+', '-', '+', '|','|'},
		{'|', '|', '|', ' ', '|', '|','|'},
		{'|', '|', '+', '-', '+', '|','|'},
		{'|', '*', '-', '-', '-', '*','|'},
		{'+', '-', '-', '-', '-', '-','+'}
	};

	void get_sel() {

		for (int i = 0; i < sel.size(); i++) {
			for (int j = 0; j < sel[i].size(); j++) {
				if (i == 3 && j == 3) std::cout << "s";
				else std::cout << sel[i][j];
			}
			if(i < sel.size()-1) std::cout << "" << std::endl;
		}
	}

	void get_un() {

		for (int i = 0; i < un.size(); i++) {
			for (int j = 0; j < un[i].size(); j++) {
				if (i == 3 && j == 3) std::cout << "s";
				else std::cout << un[i][j];
			}
			if (i < sel.size() - 1) std::cout << "" << std::endl;
		}
	}

	ui() {
		//un.push_back(<std::vector <char>>);

	}

};

#endif // !UI_H

