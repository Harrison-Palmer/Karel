#include "KAREL.h"
#include <iostream>
#include <fstream>
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
void pickbeeper()
{
	
}
string getFile()
{
	ifstream myfile;
	myfile.open("Swag.txt");
	cout << "Reading from this file yo.\n";
	myfile.close();
}