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
	private: System::Windows::Forms::TextBox^  textBox1;





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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->restartToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->panel1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Location = System::Drawing::Point(12, 27);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(400, 400);
			this->panel1->TabIndex = 1;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(153, 125);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 63);
			this->textBox1->TabIndex = 1;
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
			this->menuStrip1->Size = System::Drawing::Size(426, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(426, 435);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Graphics ^ g;
		Pen^ brackPen;
		array <kural^, 2>^ grid;
		kural kirel;
		Bitmap^ bmp = gcnew Bitmap("C:\\Users\\hpalmer\\Desktop\\Image.gif");
		Rectangle gridRect = Rectangle(0, 0, 150, 150);	//Cellsize is the number pixels in a cell
		
		//item quantity
		int num_avenues;
		int num_streets;
		int num_beepers;

		//item ave
		int beeper_ave;
		int wall_ave;
		int robot_ave;

		//item street
		int beeper_street;
		int wall_street;
		int robot_street;

		//item direction
		int wall_direction;
		int robot_direction;

		String^ str = gcnew String(kirel.getFile(0, 1).c_str());
		String^ str2 = gcnew String(kirel.getFile(0, 2).c_str());
		String^ str3 = gcnew String(kirel.getFile(0, 3).c_str());
		String^ str4 = gcnew String(kirel.getFile(0, 4).c_str());

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 /*
				 *!DONT PUT ANYTHING IN HERE!*
				 */
	}

private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 g = panel1->CreateGraphics();
			 brackPen = gcnew System::Drawing::Pen(Color::Black); 
			 g->DrawRectangle(brackPen, gridRect);	//draws the rectangle
			 g->DrawImage(bmp, gridRect); // draws the thing in the rectang;le

			 textBox1->Text = str + "\r\n" + str2 + "\r\n" + str3 + "\r\n" + str4;
}
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 robot.turnoff();
}
private: System::Void restartToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 //robot.turnoff();			 
}
};
}
