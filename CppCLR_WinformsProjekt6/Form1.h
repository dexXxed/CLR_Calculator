#pragma once
#include "string"
using namespace std;

namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lblDisplay;
	protected:

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;


	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lblDisplay = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblDisplay
			// 
			this->lblDisplay->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblDisplay->Location = System::Drawing::Point(24, 21);
			this->lblDisplay->Name = L"lblDisplay";
			this->lblDisplay->Size = System::Drawing::Size(384, 53);
			this->lblDisplay->TabIndex = 0;
			this->lblDisplay->Text = L"0";
			this->lblDisplay->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblDisplay->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(24, 237);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(83, 40);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(124, 237);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(83, 40);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(226, 237);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(83, 40);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(24, 191);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(83, 40);
			this->button4->TabIndex = 4;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(124, 191);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(83, 40);
			this->button5->TabIndex = 8;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(226, 191);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(83, 40);
			this->button6->TabIndex = 7;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(24, 144);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(83, 41);
			this->button7->TabIndex = 6;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(124, 144);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(83, 41);
			this->button8->TabIndex = 5;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(226, 144);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(83, 41);
			this->button9->TabIndex = 12;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(24, 283);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(285, 41);
			this->button10->TabIndex = 11;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button11
			// 
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(24, 95);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(83, 43);
			this->button11->TabIndex = 10;
			this->button11->Text = L"C";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button12
			// 
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(124, 95);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(83, 43);
			this->button12->TabIndex = 9;
			this->button12->Text = L"/";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// button13
			// 
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(325, 237);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(83, 87);
			this->button13->TabIndex = 16;
			this->button13->Text = L"=";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// button14
			// 
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(325, 144);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(83, 87);
			this->button14->TabIndex = 15;
			this->button14->Text = L"+";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
			// 
			// button15
			// 
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->Location = System::Drawing::Point(226, 95);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(83, 43);
			this->button15->TabIndex = 14;
			this->button15->Text = L"x";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
			// 
			// button16
			// 
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->Location = System::Drawing::Point(325, 95);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(83, 43);
			this->button16->TabIndex = 13;
			this->button16->Text = L"-";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(420, 336);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lblDisplay);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}
		double firstnum, secondnum, Result;
		char operation;
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (lblDisplay->Text == "0") {
			lblDisplay->Text = "1";
		}
		else
		{
			lblDisplay->Text = Convert::ToDouble(lblDisplay->Text) + "1";
		}
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (lblDisplay->Text == "0") {
		lblDisplay->Text = "2";
	}
	else
	{
		lblDisplay->Text = Convert::ToDouble(lblDisplay->Text) + "2";
	}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (lblDisplay->Text == "0") {
		lblDisplay->Text = "3";
	}
	else
	{
		lblDisplay->Text = Convert::ToDouble(lblDisplay->Text) + "3";

	}
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (lblDisplay->Text == "0") {
		lblDisplay->Text = "4";
	}
	else
	{
		lblDisplay->Text = Convert::ToString(lblDisplay->Text) + "4";

	}
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (lblDisplay->Text == "0") {
		lblDisplay->Text = "5";
	}
	else
	{
		lblDisplay->Text = Convert::ToDouble(lblDisplay->Text) + "5";

	}
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	if (lblDisplay->Text == "0") {
		lblDisplay->Text = "6";
	}
	else
	{
		lblDisplay->Text = Convert::ToDouble(lblDisplay->Text) + "6";

	}
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	if (lblDisplay->Text == "0") {
		lblDisplay->Text = "7";
	}
	else
	{
		lblDisplay->Text = Convert::ToDouble(lblDisplay->Text) + "7";

	}
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	if (lblDisplay->Text == "0") {
		lblDisplay->Text = "8";
	}
	else
	{
		lblDisplay->Text = Convert::ToDouble(lblDisplay->Text) + "8";

	}
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	if (lblDisplay->Text == "0") {
		lblDisplay->Text = "9";
	}
	else
	{
		lblDisplay->Text = Convert::ToDouble(lblDisplay->Text) + "9";

	}
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	if (lblDisplay->Text == "0") {
		lblDisplay->Text = "0";
	}
	else
	{
		lblDisplay->Text = Convert::ToDouble(lblDisplay->Text) + "0";
	}
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	lblDisplay->Text = "0";
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	firstnum = Convert::ToDouble(lblDisplay->Text);
	lblDisplay->Text = "0";
	operation = '/';
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	firstnum = Convert::ToDouble(lblDisplay->Text);
	lblDisplay->Text = "0";
	operation = '-';
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	firstnum = Convert::ToDouble(lblDisplay->Text);
	lblDisplay->Text = "0";
	operation = 'x';
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	firstnum = Convert::ToDouble(lblDisplay->Text);
	lblDisplay->Text = "0";
	operation = '+';
}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		secondnum = Convert::ToDouble(lblDisplay->Text);
		switch (operation)
		{
		case '+':
			Result = firstnum + secondnum;
			lblDisplay->Text = System::Convert::ToString(Result);
			firstnum = 0;
			secondnum = 0;
			break;
		case '-':
			Result = firstnum - secondnum;
			lblDisplay->Text = System::Convert::ToString(Result);
			break;
		case 'x':
			Result = firstnum * secondnum;
			lblDisplay->Text = System::Convert::ToString(Result);
			break;
		case '/':
			if (int(secondnum) != 0) {
				Result = firstnum / secondnum;
				lblDisplay->Text = System::Convert::ToString(Result);
				break;
			}
			else {
				MessageBox::Show("Çàïðåùåíî äåëèòü íà íîëü!");
			}
		default:
			break;
		}
	}
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
}

};
}
