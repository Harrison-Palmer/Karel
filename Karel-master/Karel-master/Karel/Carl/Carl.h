#pragma once
#include <cstring>
#include <string>
using namespace std;

public ref class sugardaddy{

private:
	int start;
	int end;
	int row; 
	int col;
	bool access;
	bool hasBeeper;

public:
	sugardaddy(void){}
	sugardaddy(int a, int b, bool c);

	//getters

	//setters
	void setBeeper(bool beep);


	//possibly unneeded
	int move();
	void turnleft();
	void turnoff();
	void putbeeper();
	void pickbeeper();


	string getFile(int start, int end);

	string parsing(int a, int b, int c, int d);

	int getNum(int e, int f, int g, int h);
};