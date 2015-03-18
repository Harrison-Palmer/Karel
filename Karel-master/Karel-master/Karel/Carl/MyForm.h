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
	private: System::Windows::Forms::PictureBox^  pictureBox1;
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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(260, 238);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		Graphics^ g;

		Pen^ brackPen;
		

		array <sugardaddy^, 2>^ grid;
		sugardaddy bigpapa;

		Bitmap^ rekt = gcnew Bitmap("C:\\Users\\hpalmer\\Desktop\\Image.gif");
		Bitmap^ Beeper = gcnew Bitmap("C:\\Users\\hpalmer\\Documents\\GitHub\\CS114\\Karel-master\\Karel-master\\Karel\\Beeper.png");
		Bitmap^ Karel_bot = gcnew Bitmap("C:\\Users\\hpalmer\\Documents\\GitHub\\CS114\\Karel-master\\Karel-master\\Karel\\Gumby.png");
		Bitmap^ Cells = gcnew Bitmap("C:\\Users\\hpalmer\\Documents\\GitHub\\CS114\\Karel-master\\Karel-master\\Karel\\Cell.png");

		//cell size
		int cell;

		//grid image location
		int Xx = 0;
		int Yy = 0;

		//item quantity
		int num_avenues = bigpapa.getNum(6, 9, 0, 1);
		int num_streets = bigpapa.getNum(6, 9, 0, 1);
		int num_beepers;

		//item ave
		int beeper_ave = bigpapa.getNum(8, 11, 0, 2);
		int wall_ave;
		int robot_ave;

		//item street
		int beeper_street = bigpapa.getNum(8, 11, 0, 2);
		int wall_street;
		int robot_street;

		//item direction
		int wall_direction;
		int robot_direction;

		//robot's current number of beepers
		int robot_beepers;

		//used to store images placed on picturebox/panel
		Rectangle gridRect;

/*************************************************************************/

	//sets every cell perportional to the # of cells
	private: int cellSize(int a){
				 int max = MyForm::Size.Width;

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

	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
				 brackPen = gcnew System::Drawing::Pen(Color::Black);
				 cellSize(bigpapa.getNum(6, 9, 0, 1));
				 drawGrid(num_avenues, num_streets);
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
