#pragma once
#include "carl.h"

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
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  newGameToolStripMenuItem;
	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newGameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(12, 26);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(260, 224);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// toolStrip1
			// 
			this->toolStrip1->Location = System::Drawing::Point(0, 24);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(284, 25);
			this->toolStrip1->TabIndex = 1;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(284, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->newGameToolStripMenuItem });
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// newGameToolStripMenuItem
			// 
			this->newGameToolStripMenuItem->Name = L"newGameToolStripMenuItem";
			this->newGameToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->newGameToolStripMenuItem->Text = L"New Game";
			this->newGameToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::newGameToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->panel1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
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

		array <sugardaddy^, 2>^ grid;
		sugardaddy bigpapa;

		Bitmap^ rekt = gcnew Bitmap("C:\\Users\\hpalmer\\Desktop\\Image.gif");
		Bitmap^ Beeper = gcnew Bitmap("C:\\Users\\hpalmer\\Documents\\GitHub\\CS114\\Karel-master\\Karel-master\\Karel\\Beeper.png");
		Bitmap^ Karel_bot = gcnew Bitmap("C:\\Users\\hpalmer\\Documents\\GitHub\\CS114\\Karel-master\\Karel-master\\Karel\\Gumby.png");
		Bitmap^ Cells = gcnew Bitmap("C:\\Users\\hpalmer\\Documents\\GitHub\\CS114\\Karel-master\\Karel-master\\Karel\\Cell.png");

		//cell size
		int cell;

		int row;
		int col;

		//grid image location
		int Xx = 0;
		int Yy = 0;

		//item quantity
		int num_avenues = bigpapa.getNum(6, 8, 0, 1);
		int num_streets = bigpapa.getNum(8, 10, 0, 1);
		int num_beepers;

		//item ave
		int beeper_ave = bigpapa.getNum(8, 11, 0, 2);
		int wall_ave;
		int robot_ave;

		//item street
		int beeper_street = bigpapa.getNum(11, 13, 0, 2);
		int wall_street;
		int robot_street;

		//item direction
		int wall_direction;
		int robot_direction;

		//robot's current number of beepers
		int robot_beepers;

/*************************************************************************/

	//sets every cell perportional to the # of cells
	private: int cellSize(){
				 int max = MyForm::Size.Width;

				 cell = max / bigpapa.getNum(8, 10, 0, 1);

				return cell;
	}
	//draws cells, starts at top left, goes down, moves right
	private: void drawGrid()
	{
				 int rows, cols;
				 int x, y;

				 panel1->Refresh();

				 for (rows = 0; rows < num_avenues; row++)
				 for (cols = 0; cols < num_streets; cols++)
				 {
					 x = cols * cellSize();
					 y = rows * cellSize();

					 Rectangle gridRect = Rectangle(x, y, cellSize() - 1, cellSize() - 1);
					 g->FillRectangle(whitebrush, gridRect);
					 g->DrawRectangle(brackPen, gridRect);
				 }
	}
	//places beepers at designated locations
	private: void drawBeepers()
	{
			for (int i = 0; i < num_beepers; i++)
			{
				g->DrawImage(Beeper, beeper_ave, beeper_street, 40, 40);
			}
	}
	//draws a wall at specified location and direction
	private: void drawWall()
	{
					g->DrawImage(rekt, wall_ave, wall_street, 40, 40);
	}
				//places karel in the world with location, direction, and number of beepers indicated
	private: void drawRobot()
	{
					g->DrawImage(Karel_bot, robot_ave, robot_street, 40, 40);
	}


/******************************************************/

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 g = panel1->CreateGraphics();
				 brackPen = gcnew System::Drawing::Pen(Color::Black);
				 whitebrush = gcnew System::Drawing::SolidBrush(Color::White);

				 grid = gcnew array<sugardaddy^, 2>(num_avenues, num_streets);

				 for (row = 0; row < num_avenues; row++)
					 for (col = 0; col < num_streets; col++)
						 grid[row, col] = gcnew sugardaddy(row, col, true);

				 //panel1->Refresh();
				 /*
				 g->DrawRectangle(brackPen, gridRect);
				 gridRect.X = 50;
				 gridRect.Y = 50;
				 gridRect.Size.Height = 50;
				 gridRect.Size.Width = 50;

				 cellSize(bigpapa.getNum(6, 9, 0, 1));
				 //drawGrid(num_avenues, num_streets);
				 g->DrawImage(rekt, gridRect);
				 */
	}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 //g->DrawRectangle(brackPen, gridRect);
			 g->DrawImage(Cells, 0, 0, 150, 150);
}
private: System::Void newGameToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 int x, y;

			 //draws grid
			 drawGrid();

			 //determines location
			 x = beeper_ave * cellSize();
			 y = beeper_street * cellSize();

			 //where the beeper will be placed
			 Rectangle BeepRect = Rectangle(x, y, cellSize(), cellSize());

			 //draws the beeper at specified location
			 g->DrawImage(Beeper, BeepRect);

			 grid[beeper_ave, beeper_street]->setBeeper(true);
}
};
}
