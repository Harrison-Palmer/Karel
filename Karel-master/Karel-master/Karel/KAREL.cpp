#include "KAREL.h"
#include <iostream>
#include <string>
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
string kural::getFile()
{
	ifstream a_file("Swag.txt");

	a_file.open("Swag.txt");

	//a_file.open("Swag.txt");
	std::string strInput;

	while (!a_file.eof) // To get you all the lines.
	{
		getline(a_file, strInput); // Saves the line in STRING.
		//cout << STRING; // Prints our STRING.
	}

	return strInput;
}