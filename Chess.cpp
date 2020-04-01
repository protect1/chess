// Chess.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*This is where the main code will be at
 By: Lucas Parish all rights reserved*/

#include <iostream>
#include "title.h"
#include "Board_display.h"
#include "Play_game.h"
using namespace std;

//this is the main function where the fun stuff happens
int main(void) {
	bool play = true;
	while (play == true){
		//variable definition for playing game
		bool start = NULL;
		//call the main title screen here
		Title begin;
		start = begin.display(start); 
		//check to see if start is true
		if (start == true) {
			//play game
			string game_board[7][8];
			Board_display board;
			board.new_game(game_board);

			play = false;
		}
		else if (start == false) {
			cout << "Have a good day!";
			play = false;
		}
		
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
