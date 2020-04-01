#pragma once
#include <string>
using namespace std;

class Title {
private:
	bool start;
	bool quit;
	string name;
	string heading;
public:
	bool display(bool play);
	Title();
};