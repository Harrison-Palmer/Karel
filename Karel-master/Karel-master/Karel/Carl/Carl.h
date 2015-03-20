#pragma once
#include <cstring>
#include <string>
using namespace std;

public ref class sugardaddy{

private:
	int row; 
	int col;
	bool access;
	bool hasBeeper;

public:
	sugardaddy(void){}
	sugardaddy(int a, int b, bool c);

	//getters
	bool getAccess() { return access; }
	int getRow() { return row; }
	int getCol() { return col; }
	bool getBeeper() { return hasBeeper; }

	//setters
	void setBeeper(bool beep) { hasBeeper = true; }
	void setAccess(bool a) { access = a; }

	string getFile(int start, int end);

	string parsing(int a, int b, int c, int d);

	int getNum(int e, int f, int g, int h);
};