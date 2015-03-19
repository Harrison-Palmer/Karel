#include "Carl.h"
#include <iostream>
#include <string>
#include <fstream>
#include <conio.h>
using namespace std;
using namespace System::Windows::Forms;
//#include <Application>

sugardaddy::sugardaddy(int a, int b, bool c)
{
	if (a >= 0) row = a;
	if (b >= 0) col = c;
	access = c;
	hasBeeper = false;
}

void sugardaddy::setBeeper(bool beep)
{
	hasBeeper = true;
}

int sugardaddy::move()
{
	return 5;
}
void sugardaddy::turnleft()
{
	return;
}
void sugardaddy::turnoff()
{
	Application::Exit();
}
void sugardaddy::putbeeper()
{

}
void sugardaddy::pickbeeper()
{

}

string sugardaddy::getFile(int start, int end){
	ifstream a_file;
	string strInput;
	a_file.open("Swag.txt");

	for (int i = start; i < end; i++){
		getline(a_file, strInput);
	}
	return strInput;
}

string sugardaddy::parsing(int a, int b, int c, int d){
	string str = getFile(c, d);
	string start = str.substr(a, b);
	string end = str.substr(b);

	return start;
}

int sugardaddy::getNum(int e, int f, int g, int h){
	string stri = parsing(e, f, g, h);
	int num = std::stoi(stri);

	return num;
}