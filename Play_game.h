#pragma once
#include <string>
#include <array>
using namespace std;

class Play_game{
private:
	int  bx_axis;
	char by_axis;
	int  wx_axis;
	char wy_axis;
	int black_pieces[7][8];
	int white_pieces[7][8];
public:
	Play_game();
	void Black_move(int bx_axis, char by_axis, int black_pieces);
	void White_move(int wx_axis, char wy_axis, int white_pieces);
	bool Can_move(int bx_axis, char by_axis, int wx_axis, char wy_axis);
};

