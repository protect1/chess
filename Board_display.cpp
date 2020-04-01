//this is where the board will be visable to the player

#include "Board_display.h"
#include <iostream>
#include <iomanip>
using namespace std;

/*this function will generate the board after every move made
by taking in the new board as an argument
*/
void Board_display :: board_update(string newboard[7][8]) {
	cout << "-----------------------------" << endl;
	for (int i = 0; i < 7; i++) {
		cout << '|';
		for (int j = 0; j < 7; j++) {
			cout << setw(2) << newboard[i][j] << setw(2) << '|';
		}
		cout << "\n-----------------------------" << endl;
	}
}

//This function will create a new board for a new game and display it
void Board_display :: new_game(string (&board)[7][8]) {
	board[0][0] = "R";
	board[0][1] = "Kn";
	board[0][2] = "B";
	board[0][3] = "K";
	board[0][4] = "Q";
	board[0][5] = "B";
	board[0][6] = "Kn";
	board[0][7] = "R";
	for (int i = 1; i < 2; i++) {
		for (int j = 0; j < 8; j++) {
			board[i][j] = "P";
		}
	}
	for (int i = 2; i < 5; i++) {
		for (int j = 0; j < 8; j++) {
			board[i][j] = " ";
		}
	}
	for (int i = 5; i < 6; i++) {
		for (int j = 0; j < 8; j++) {
			board[i][j] = "P";
		}
	}
	board[6][0] = "R";
	board[6][1] = "Kn";
	board[6][2] = "B";
	board[6][3] = "K";
	board[6][4] = "Q";
	board[6][5] = "B";
	board[6][6] = "Kn";
	board[6][7] = "R";
	board_update(board);
}

//constructor 
Board_display :: Board_display() {
	x_axis = 0;
	y_axis = 'e';
	//board[8][7] = { NULL };
}