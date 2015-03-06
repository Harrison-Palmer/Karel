#pragma once
#include "KAREL.h"

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
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  restartToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;

		kural robot;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->restartToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(471, 82);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(400, 400);
			this->panel1->TabIndex = 1;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(140, 354);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"+0 y";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->restartToolStripMenuItem,
					this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// restartToolStripMenuItem
			// 
			this->restartToolStripMenuItem->Name = L"restartToolStripMenuItem";
			this->restartToolStripMenuItem->Size = System::Drawing::Size(110, 22);
			this->restartToolStripMenuItem->Text = L"Restart";
			this->restartToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::restartToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(110, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->aboutToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(900, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 82);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(413, 400);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(900, 562);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Graphics^ g, ^gbmp;

		Pen^ brackPen;
		array <kural^, 2>^ grid;
		kural kirel;
		Bitmap ^view; // image to draw stuff to
		Bitmap^ rekt = gcnew Bitmap("C:\\Users\\hpalmer\\Desktop\\Image.gif");
		Bitmap^ Beeper = gcnew Bitmap("C:\\Users\\hpalmer\\Documents\\GitHub\\CS114\\Karel-master\\Karel-master\\Karel\\Beeper.png");
		Bitmap^ Karel_bot = gcnew Bitmap("C:\\Users\\hpalmer\\Documents\\GitHub\\CS114\\Karel-master\\Karel-master\\Karel\\Gumby.png");
		Bitmap^ Cells = gcnew Bitmap("C:\\Users\\hpalmer\\Documents\\GitHub\\CS114\\Karel-master\\Karel-master\\Karel\\Cell.png");

		int panelWidth, panelHeight; // width and height of panel1

		//cell size
		int cell;

		//grid image location
		int Xx = 0;
		int Yy = 0;

		//grid size
		int X = 0;
		int Y = 0;
		
		//item quantity
		int num_avenues = kirel.getNum(6, 9, 0, 1);
		int num_streets = kirel.getNum(6, 9, 0, 1);
		int num_beepers;

		//item ave
		int beeper_ave = kirel.getNum(8, 11, 0, 2);
		int wall_ave;
		int robot_ave;

		//item street
		int beeper_street = kirel.getNum(8, 11, 0, 2);
		int wall_street;
		int robot_street;

		//item direction
		int wall_direction;
		int robot_direction;

		//robot's current number of beepers
		int robot_beepers;

		Rectangle gridRect;

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		/*
		*!DONT PUT ANYTHING IN HERE!*
		*/
		panelWidth = pictureBox1->Width; // set panelWidth
		panelHeight = pictureBox1->Height; // set panelHeight
		//Xx = 0; // set original x location of Jared
		//Yy = 0; // set original y location of Jared

		// Create a Bitmap object to create gbmp out of
		view = gcnew Bitmap(panelWidth, panelHeight, System::Drawing::Imaging::PixelFormat::Format32bppArgb);

		// Create a Bitmap object to hold the jared icon
		// jared = gcnew Bitmap("Jared.bmp");

		//g = panel1->CreateGraphics(); // create Graphics g on panel1
		gbmp = Graphics::FromImage(view); // create Graphics gbmp from view
	}

			private: int cellSize(int a){
				int max = 400;

				cell = max / a;

				return cell;
			}
			//draws cells, starts at top left, goes down, moves right
			private: void drawGrid(int b, int c)
			{
					for (int i = 0; i < b; i++)
					{
						for (int j = 0; j < c; j++)
						{
							//draws image, goes down 1
							g->DrawImage(Cells, Xx, Yy, 40, 40);
							Yy += 40;
						}
						//goes back to top and moves right 1
						Xx += 40;
						Yy = 0;
					}
			}

			// function to clear <view>
			private: System::Void clearView()
			{
				 Rectangle clearer = Rectangle(0, 0, view->Width, view->Height); // create a rectangle object that covers the "view" bitmap
				 gbmp->DrawRectangle(Pens::White, clearer); // draw the rectangle to gbmp
				 gbmp->FillRectangle(Brushes::White, clearer); //  fill the rectangle with white
				 return;
			}
			// function to update the graphics on every timer tick
			private: System::Void updateGraphics()
			{
				 clearView();
				 gbmp->DrawImage(Cells, Xx, Yy); // add "jared" image to gbmp (auto adds to the "view" bitmap)
				 pictureBox1->Refresh(); // clear panel1
				 g->DrawImage(view, Point(0, 0)); // draw the "view" image to g (which is on panel1)
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

private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {		 

			// g->DrawImage(rekt, 40, 40, 40, 40);
			 //Refresh();

			 /*
			 g = panel1->CreateGraphics();
			 brackPen = gcnew System::Drawing::Pen(Color::Black);
			 cellSize(kirel.getNum(6, 9, 0, 1));
			 //fillGrid();
			 */
}
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 robot.turnoff();
}
private: System::Void restartToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 //robot.turnoff();			 
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 Refresh();
			 Yy += 40;
			 Refresh();
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 updateGraphics(); // run above function
}
private: System::Void pictureBox1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 g = pictureBox1->CreateGraphics();
			 brackPen = gcnew System::Drawing::Pen(Color::Black);
			 // Refresh();
			 //drawGrid(num_avenues, num_streets);

			 g->DrawImage(rekt, 40, 40);
}
};
}