#include <iostream>
#include <time.h>
#include <stdlib.h>
#pragma once

namespace Lab2HansSempe1083920 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Resumen de MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ Campo;
	protected:

	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->Campo = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Campo))->BeginInit();
			this->SuspendLayout();
			// 
			// Campo
			// 
			this->Campo->BackgroundColor = System::Drawing::Color::White;
			this->Campo->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Campo->Location = System::Drawing::Point(12, 149);
			this->Campo->Name = L"Campo";
			this->Campo->Size = System::Drawing::Size(892, 107);
			this->Campo->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(23, 26);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 44);
			this->button1->TabIndex = 1;
			this->button1->Text = L"START";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(23, 87);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 44);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Reiniciar";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm1::timer1_Tick);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(916, 275);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Campo);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Campo))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


		int Num_Fila = 2, Num_Columns = 70;

		for (int i = 0; i < Num_Columns; i++) {

			DataGridViewColumn^ nuevacolumna = gcnew DataGridViewColumn();
			nuevacolumna->Width = 20;


			DataGridViewCell^ cellTemplate = gcnew DataGridViewTextBoxCell();
			nuevacolumna->CellTemplate = cellTemplate;


			Campo->Columns->Add(nuevacolumna);
		}

		for (int i = 1; i < Num_Fila; i++) {
			Campo->Rows->Add();
		}

		Campo->ColumnHeadersVisible = false;
		Campo->RowHeadersVisible = false;


		for (int i = 0; i < Num_Fila; i++)
		{
			for (int j = 0; j < Num_Columns; j++)
			{
				Campo->Rows[i]->Cells[j]->Style->BackColor = Color::Green;
			}
		}

		Campo->Rows[0]->Cells[0]->Value = "T";
		Campo->Rows[1]->Cells[0]->Value = "H";

		timer1->Enabled = true;

	}
		   
		   
		   int generarAtor(int limI, int limS) {
			   int x;
			   x = limI + rand() % (limS + 1 - limI);			   
			   return x;
		   }

		   int generarAlib(int limIi, int limSs) {
			   int  y;	  
			   y = limIi + rand() % (limSs + 1 - limIi);
			   return y;
		   }

		   int k = 0;
		   int t, l;

private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	 
		srand(time(NULL));
		t = generarAtor(1, 10);
		l = generarAlib(1, 10);

	if (t == 1 || t == 2 || t == 3 || t == 4 || t == 5)
	{
		k++;
		Campo->Rows[0]->Cells[k]->Value = "T";
		Campo->Rows[0]->Cells[k - 1]->Value = " ";
		
	}
	if (t == 6 || t == 7) {

		if (k < 6)
		{
			if (k < 5)
			{
				if (k < 4)
				{
					if (k < 3)
					{
						if (k < 2)
						{
							if (k < 1)
							{
								Campo->Rows[0]->Cells[k]->Value = "T";
							}
							else {
								k = k - 1;
								Campo->Rows[0]->Cells[k]->Value = "T";
								Campo->Rows[0]->Cells[k + 1]->Value = " ";
							}
						}
						else {
							k = k - 2;
							Campo->Rows[0]->Cells[k]->Value = "T";
							Campo->Rows[0]->Cells[k + 2]->Value = " ";
						}
					}
					else {
						k = k -3 ;
						Campo->Rows[0]->Cells[k]->Value = "T";
						Campo->Rows[0]->Cells[k + 3]->Value = " ";
					}
				}
				else {
					k = k - 4;
					Campo->Rows[0]->Cells[k]->Value = "T";
					Campo->Rows[0]->Cells[k + 4]->Value = " ";
				}
			}
			else {
				k = k - 5;
				Campo->Rows[0]->Cells[k]->Value = "T";
				Campo->Rows[0]->Cells[k + 5]->Value = " ";
			}
		}
		else {
        k = k - 6;
		Campo->Rows[0]->Cells[k]->Value = "T";
		Campo->Rows[0]->Cells[k + 6]->Value = " ";
		}
		
		
	}
	if (t == 8 || t == 9 || t == 10) {

		k = k + 3;
		Campo->Rows[0]->Cells[k]->Value = "T";
		Campo->Rows[0]->Cells[k - 3]->Value = " ";
		
	}







    }
};
}
