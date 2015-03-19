#pragma once
using namespace std;

public ref class carlrobot{

private:
	int row;
	int col;
	int direction;// 0 right 1 left 2 up 3 down

	static System::Drawing::Bitmap^ CarlRight = gcnew System::Drawing::Bitmap("C:\\Users\\hpalmer\\Documents\\GitHub\\CS114\\Karel-master\\Karel-master\\Karel\\Gumbyright.jpg");
	static System::Drawing::Bitmap^ CarlLeft = gcnew System::Drawing::Bitmap("C:\\Users\\hpalmer\\Documents\\GitHub\\CS114\\Karel-master\\Karel-master\\Karel\\Gumbyleft.jpg");
	static System::Drawing::Bitmap^ CarlUp = gcnew System::Drawing::Bitmap("C:\\Users\\hpalmer\\Documents\\GitHub\\CS114\\Karel-master\\Karel-master\\Karel\\Gumbyup.jpg");
	static System::Drawing::Bitmap^ CarlDown = gcnew System::Drawing::Bitmap("C:\\Users\\hpalmer\\Documents\\GitHub\\CS114\\Karel-master\\Karel-master\\Karel\\Gumbydown.jpg");

public:
	carlrobot(void){}
	carlrobot(int row, int col);

	//getters
	int getrow()
	{
		return row;
	}
	int getcol()
	{
		return col;
	}

	System::Drawing::Bitmap^ getimage();

	//setters
	void setrow(int newrow)
	{
		row = newrow;
	}
	void setcol(int newcol)
	{
		col = newcol;
	}

	//actions
	void goright()
	{
		col++;
		direction = 0;
	}
	void goleft()
	{
		col--;
		direction = 1;
	}
	void goup()
	{
		row--;
		direction = 2;
	}
	void godown()
	{
		row++;
		direction = 3;
	}
};