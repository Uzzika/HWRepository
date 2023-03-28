#pragma once
#include "CTriangle.h"
#include "rational.h"
namespace CppCLRWinformsProjekt {

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

	protected:

	private: System::Windows::Forms::Button^ AddButton;
	private: System::Windows::Forms::TextBox^ XDen;

	private: System::Windows::Forms::TextBox^ XNum;
	private: System::Windows::Forms::TextBox^ YRac;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ XRac;
	private: System::Windows::Forms::TextBox^ YNum;
	private: System::Windows::Forms::TextBox^ YDen;
	private: System::Windows::Forms::TextBox^ ansRac;
	private: System::Windows::Forms::TextBox^ ansNum;
	private: System::Windows::Forms::TextBox^ ansDen;








	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->AddButton = (gcnew System::Windows::Forms::Button());
			this->XDen = (gcnew System::Windows::Forms::TextBox());
			this->XNum = (gcnew System::Windows::Forms::TextBox());
			this->YRac = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->XRac = (gcnew System::Windows::Forms::TextBox());
			this->YNum = (gcnew System::Windows::Forms::TextBox());
			this->YDen = (gcnew System::Windows::Forms::TextBox());
			this->ansRac = (gcnew System::Windows::Forms::TextBox());
			this->ansNum = (gcnew System::Windows::Forms::TextBox());
			this->ansDen = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// AddButton
			// 
			this->AddButton->Location = System::Drawing::Point(10, 115);
			this->AddButton->Name = L"AddButton";
			this->AddButton->Size = System::Drawing::Size(41, 22);
			this->AddButton->TabIndex = 1;
			this->AddButton->Text = L"+";
			this->AddButton->UseVisualStyleBackColor = true;
			this->AddButton->Click += gcnew System::EventHandler(this, &Form1::AddButton_Click);
			// 
			// XDen
			// 
			this->XDen->Location = System::Drawing::Point(140, 34);
			this->XDen->Name = L"XDen";
			this->XDen->Size = System::Drawing::Size(100, 20);
			this->XDen->TabIndex = 2;
			// 
			// XNum
			// 
			this->XNum->Location = System::Drawing::Point(140, 12);
			this->XNum->Name = L"XNum";
			this->XNum->Size = System::Drawing::Size(100, 20);
			this->XNum->TabIndex = 3;
			// 
			// YRac
			// 
			this->YRac->Location = System::Drawing::Point(267, 26);
			this->YRac->Name = L"YRac";
			this->YRac->Size = System::Drawing::Size(100, 20);
			this->YRac->TabIndex = 4;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(7, 26);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(21, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"x =";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(246, 26);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(21, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"y =";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(15, 74);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(13, 13);
			this->label7->TabIndex = 7;
			this->label7->Text = L"=";
			// 
			// XRac
			// 
			this->XRac->Location = System::Drawing::Point(34, 23);
			this->XRac->Name = L"XRac";
			this->XRac->Size = System::Drawing::Size(100, 20);
			this->XRac->TabIndex = 8;
			this->XRac->TextChanged += gcnew System::EventHandler(this, &Form1::XRac_TextChanged);
			// 
			// YNum
			// 
			this->YNum->Location = System::Drawing::Point(373, 12);
			this->YNum->Name = L"YNum";
			this->YNum->Size = System::Drawing::Size(100, 20);
			this->YNum->TabIndex = 9;
			// 
			// YDen
			// 
			this->YDen->Location = System::Drawing::Point(373, 34);
			this->YDen->Name = L"YDen";
			this->YDen->Size = System::Drawing::Size(100, 20);
			this->YDen->TabIndex = 10;
			// 
			// ansRac
			// 
			this->ansRac->Location = System::Drawing::Point(34, 71);
			this->ansRac->Name = L"ansRac";
			this->ansRac->Size = System::Drawing::Size(100, 20);
			this->ansRac->TabIndex = 13;
			// 
			// ansNum
			// 
			this->ansNum->Location = System::Drawing::Point(140, 60);
			this->ansNum->Name = L"ansNum";
			this->ansNum->Size = System::Drawing::Size(100, 20);
			this->ansNum->TabIndex = 12;
			// 
			// ansDen
			// 
			this->ansDen->Location = System::Drawing::Point(140, 82);
			this->ansDen->Name = L"ansDen";
			this->ansDen->Size = System::Drawing::Size(100, 20);
			this->ansDen->TabIndex = 11;
			// 
			// Form1
			// 



			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(480, 181);
			this->Controls->Add(this->ansRac);
			this->Controls->Add(this->ansNum);
			this->Controls->Add(this->ansDen);
			this->Controls->Add(this->YDen);
			this->Controls->Add(this->YNum);
			this->Controls->Add(this->XRac);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->YRac);
			this->Controls->Add(this->XNum);
			this->Controls->Add(this->XDen);
			this->Controls->Add(this->AddButton);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void AddButton_Click(System::Object^ sender, System::EventArgs^ e) {
	//X,Y,ANS
	rationalWithIntPart X, Y, ANS;
	X.setIntPart(int::Parse(this->XRac->Text));
	X.setDenumerator(int::Parse(this->XDen->Text));
	X.setNumerator(int::Parse(this->XNum->Text));
	Y.setIntPart(int::Parse(this->YRac->Text));
	Y.setDenumerator(int::Parse(this->YDen->Text));
	Y.setNumerator(int::Parse(this->YNum->Text));
	ANS = X + Y;
	ansRac->Text = ANS.getIntPart().ToString();
	ansNum->Text = ANS.getNumerator().ToString();
	ansDen->Text = ANS.getDenumerator().ToString();
}
private: System::Void XRac_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
