#pragma once
#include "carl.h"
#include "robot.h"

#using <mscorlib.dll>
#include <tchar.h>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;

	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  newGameToolStripMenuItem;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::ToolStripMenuItem^  playPauseToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::ComponentModel::IContainer^  components;
	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newGameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->playPauseToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(12, 26);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(330, 330);
			this->panel1->TabIndex = 0;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->aboutToolStripMenuItem, this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(367, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->newGameToolStripMenuItem,
					this->playPauseToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// newGameToolStripMenuItem
			// 
			this->newGameToolStripMenuItem->Name = L"newGameToolStripMenuItem";
			this->newGameToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->newGameToolStripMenuItem->Text = L"New Game";
			this->newGameToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::newGameToolStripMenuItem_Click);
			// 
			// playPauseToolStripMenuItem
			// 
			this->playPauseToolStripMenuItem->Name = L"playPauseToolStripMenuItem";
			this->playPauseToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->playPauseToolStripMenuItem->Text = L"Play/Pause";
			this->playPauseToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::playPauseToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::aboutToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::helpToolStripMenuItem_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(367, 368);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->panel1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Gumby";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Graphics^ g;

		Pen^ brackPen;
		Brush^ whitebrush;
		Brush^ redbrush;

		array <sugardaddy^, 2>^ grid;
		sugardaddy bigpapa;

		//robot object
		carlrobot^ mrRobot;

		char direction;

		Bitmap^ Beeper = gcnew Bitmap("C:\\Users\\hpalmer\\Documents\\GitHub\\Karel\\Karel-master\\Karel-master\\Karel\\Beeper.png");
		Bitmap^ Karel_bot = gcnew Bitmap("C:\\Users\\hpalmer\\Documents\\GitHub\\Karel\\Karel-master\\Karel-master\\Karel\\Gumby.png");
		Bitmap^ Cells = gcnew Bitmap("C:\\Users\\hpalmer\\Documents\\GitHub\\Karel\\Karel-master\\Karel-master\\Karel\\Cell.png");

		bool play = false;

		//cell size
		int cell;

		//x
		int num_avenues = 8; // bigpapa.getNum(6, 8, 0, 1);
		//y
		int num_streets = 8; // bigpapa.getNum(8, 10, 0, 1);
		int num_beepers;

		//beeper x
		int beeper_ave = 3; // bigpapa.getNum(8, 11, 0, 2);
		int wall_ave;
		//robots x
		int robot_ave = 2;

		//beeper y
		int beeper_street = 3; // bigpapa.getNum(11, 12, 0, 2);
		int wall_street;
		//robots y
		int robot_street = 2;

		//item direction
		int wall_direction;
		int robot_direction;

		//robot's current number of beepers
		int robot_beepers;

		/*************************************************************************/

		//sets every cell perportional to the # of cells
	private: int cellSize(){
				 int max = MyForm::Size.Width;

				 cell = max / 8; //bigpapa.getNum(8, 10, 0, 1);

				 return cell;
	}
			 //draws cells, starts at top left, goes down, moves right
	private: void drawGrid()
	{
				 int rows, cols;
				 int x, y;

				 panel1->Refresh();

				 for (rows = 0; rows < num_avenues; rows++)
				 {
					 for (cols = 0; cols < num_streets; cols++)
					 {
						 x = cols * cellSize();
						 y = rows * cellSize();

						 Rectangle gridRect = Rectangle(x, y, cellSize() - 1, cellSize() - 1);
						 g->FillRectangle(whitebrush, gridRect);
						 g->DrawRectangle(brackPen, gridRect);
					 }
				 }
	}
			 //checks if a robot is colliding with a wall
	private: bool isColliding()
	{
				 if (direction == 'r')
				 {
					 if (mrRobot->getcol() < num_avenues - 1)
						 return true;
				 }
				 else if (direction = 'l')
				 {
					 if (mrRobot->getcol() > 0)
						 return true;
				 }
				 else if (direction = 'd')
				 {
					 if (mrRobot->getrow() < num_streets - 1)
						 return true;
				 }
				 else if (direction = 'u')
				 {
					 if (mrRobot->getrow() > 0)
						 return true;
				 }
	}
			 /******************************************************/
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 //create graphics objects
				 g = panel1->CreateGraphics();
				 brackPen = gcnew System::Drawing::Pen(Color::Black);
				 whitebrush = gcnew System::Drawing::SolidBrush(Color::White);
				 redbrush = gcnew System::Drawing::SolidBrush(Color::Red);

				 int row;
				 int col;

				 //declare the array
				 grid = gcnew array<sugardaddy^, 2>(num_avenues, num_streets);

				 //fill array with the grid
				 for (row = 0; row < num_avenues; row++)
				 {
					 for (col = 0; col < num_streets; col++)
						 grid[row, col] = gcnew sugardaddy(row, col, true);
				 }
	}
	private: System::Void newGameToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 int x, y;
				 
				 //determines location
				 x = beeper_ave * cellSize();
				 y = beeper_street * cellSize();

				 //sets starting direction
				 direction = 'r';

				 

				 //draws the grid
				 drawGrid();
				 mrRobot = gcnew carlrobot(robot_ave, robot_street);
				 //where the beeper will be placed
				 Rectangle BeepRect = Rectangle(x, y, cellSize(), cellSize());
				 //draws the beeper at specified location
				 g->DrawImage(Beeper, BeepRect);
				 //makes the grid aware a beeper is at this location
				 grid[beeper_ave, beeper_street]->setBeeper(true);

				 //the robots location
				 mrRobot->setrow(robot_ave);
				 mrRobot->setcol(robot_street);
				 x = robot_ave + cellSize();
				 y = robot_street + cellSize();

				 //what the robot will be drawn in
				 Rectangle robotRect = Rectangle(x, y, cellSize(), cellSize());
				 g->DrawImage(mrRobot->getimage(), robotRect);

				 //begin le timer
				 timer1->Start();
				 play = true;
	}
	private: System::Void playPauseToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (play)
					 timer1->Stop();
				 else
					 timer1->Start();
	}
	private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 Application::Exit();
	}
	private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 MessageBox::Show("Developed by Harrison, Jared, Trevah, and Ross.");
	}
	private: System::Void helpToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 MessageBox::Show("You're out of luck.");
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				 int x, y;
				 int rows, cols;

				 rows = mrRobot->getrow();
				 cols = mrRobot->getcol();
				 x = mrRobot->getcol() * cellSize();
				 y = mrRobot->getrow() * cellSize();

				 //records current robot position
				 Rectangle nowrobot = Rectangle(x, y, cellSize(), cellSize());

				 if (!isColliding())
				 {
					 g->FillRectangle(redbrush, nowrobot);
					 g->DrawRectangle(brackPen, nowrobot);

					 //move to the specified place
					 switch (direction)
					 {
					 case 'r':
						 mrRobot->goright();
						 break;
					 case 'l':
						 mrRobot->goleft();
						 break;
					 case 'd':
						 mrRobot->godown();
						 break;
					 case 'u':
						 mrRobot->goup();
						 break;
					 }

					 rows = mrRobot->getrow();
					 cols = mrRobot->getcol();
					 x = cols * cellSize();
					 y = rows * cellSize();

					 Rectangle robotRectv2 = Rectangle(x, y, cellSize(), cellSize());
					 g->DrawImage(mrRobot->getimage(), robotRectv2);

					 if (grid[rows, cols]->getBeeper())
					 {
						 grid[rows, cols]->setBeeper(false);
						 timer1->Stop();
						 MessageBox::Show("Radical bruh, you got da beeer.");
					 }
				 }
				 else
				 {
					 switch (direction)
					 {
					 case 'r':
						 direction = 'd';
						 break;
					 case 'l':
						 direction = 'u';
						 break;
					 case 'u':
						 direction = 'r';
						 break;
					 case 'd':
						 direction = 'l';
						 break;
					 }
				 }
	};
	};
}