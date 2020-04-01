//This is the title code, should be displayed when game boots up
#include "title.h"
#include <iostream>
#include <iomanip>
using namespace std;

bool Title::display(bool play) {
	//this is the title screen
	cout << setw(50) << "Chess!!" << endl;
	for (int i = 0; i < 4; i++) {
		cout << endl;
	}
	//prmopt user to play game
	cout << setw(40) << "Start" << setw(17) << "Quit"<<endl;
	//while loop to get player to make a choice
		string choice;
		cin >> choice;

		if (choice == "start") {
			play = true;
			return play;
		}
		else if(choice == "Start") {
			play = true;
			return play;
		}
		else if (choice == "quit" ) {
			play = false;
			return play;
		}
		else if (choice == "Quit") {
			play = false;
			return play;
		}
		else{
			cout << "please make a choice by typing 'start' or 'quit'."<<endl;
		}
}

Title :: Title() {
	start = false;
	quit = true;
	name = "no name";
	heading = "Chess";
}