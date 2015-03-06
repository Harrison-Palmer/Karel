#include "KAREL.h"
#include <iostream>
#include <string>
#include <fstream>
#include <conio.h>
using namespace std;
using namespace System::Windows::Forms;
//#include <Application>

int kural::move()
{
	return 5;
}
void kural::turnleft()
{
	return;
}
void kural::turnoff()
{
	Application::Exit();
}
void kural::putbeeper()
{
	
}
void kural::pickbeeper()
{

}

string kural::getFile(int start, int end){
	ifstream a_file;
	string strInput;
	a_file.open("Swag.txt");

	for (int i = start; i < end; i++){
		getline(a_file, strInput);
	}
	return strInput;
}

string kural::parsing(int a, int b, int c, int d){
	string str = getFile(c, d);
	string start = str.substr(a, b);
	string end = str.substr(b);

	return start;
}

int kural::getNum(int e, int f, int g, int h){
	string stri = parsing(e, f, g, h);
	int num = std::stoi(stri);

	return num;
}