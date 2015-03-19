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
	if (direction == 1)
	{
		return CarlLeft;
	}
	if (direction == 2)
	{
		return CarlUp;
	}
	if (direction == 3)
	{
		return CarlDown;
	}
}