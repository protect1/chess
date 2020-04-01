#pragma once
#include <string>
using namespace std;
class Board_display{
private:
	int x_axis;
	char y_axis;
	//string board[7][8];
public:
	void board_update(string newboard[7][8]);
	void new_game(string(&board)[7][8]);
	Board_display();
};

