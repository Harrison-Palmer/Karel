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
string kural::getFile(int start, int end)
{
	ifstream a_file;
	string strInput;
	a_file.open("Swag.txt");

	for (int i = start; i < end; i++)
	{
		getline(a_file, strInput);
	}
	return strInput;
}