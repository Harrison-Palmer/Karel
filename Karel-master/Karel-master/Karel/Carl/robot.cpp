#include "robot.h"

carlrobot::carlrobot(int newrow, int newcol)
{
	row = 0;
	col = 0;
	direction = 0;

	if (newrow >= 0)
	{
		row = newrow;
		col = newcol;
	}
}

System::Drawing::Bitmap^ carlrobot::getimage()
{
	if (direction == 0)
	{
		return CarlRight;
	}
	else if (direction == 1)
	{
		return CarlLeft;
	}
	else if (direction == 2)
	{
		return CarlUp;
	}
	else if (direction == 3)
	{
		return CarlDown;
	}
	else
	{
		System::Windows::Forms::MessageBox::Show("Please enter a valid direction");
	}
}