#pragma once
#include <cstring>
#include <string>
using namespace std;

public ref class kural{

private:
	int start;
	int end;

public:
	int move();
	void turnleft();
	void turnoff();
	void putbeeper();
	void pickbeeper();
	string getFile(int start, int end);
};