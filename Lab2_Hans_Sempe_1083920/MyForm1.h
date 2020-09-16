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


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Campo))->BeginInit();
			this->SuspendLayout();
			// 
			// Campo
			// 
			this->Campo->BackgroundColor = System::Drawing::Color::White;
			this->Campo->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Campo->Location = System::Drawing::Point(12, 149);
			this->Campo->Name = L"Campo";
			this->Campo->Size = System::Drawing::Size(892, 47);
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
			this->button2->Location = System::Drawing::Point(157, 26);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 44);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Reiniciar";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm1::timer1_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Blue;
			this->label1->Location = System::Drawing::Point(20, 104);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(15, 22);
			this->label1->TabIndex = 3;
			this->label1->Text = L".";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Blue;
			this->label2->Location = System::Drawing::Point(20, 126);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(15, 22);
			this->label2->TabIndex = 4;
			this->label2->Text = L".";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(358, 104);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(348, 22);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Cada cuadro rojo representa un: ¡OUCH!";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(916, 211);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Campo);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Campo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		//MyForm1label1.Text = "erbr";

		String^ Store = System::Convert::ToString("¡BANG!");
		String^ Storex = System::Convert::ToString("¡Y ARRANCAN!");

		label1->Text = Store;
		label2->Text = Storex;

		Campo->ColumnHeadersVisible = false;
		Campo->RowHeadersVisible = false;

		int Num_Fila = 1, Num_Columns = 80;

		for (int i = 0; i < Num_Columns; i++) {

			DataGridViewColumn^ nuevacolumna = gcnew DataGridViewColumn();
			nuevacolumna->Width = 20;

			DataGridViewCell^ cellTemplate = gcnew DataGridViewTextBoxCell();
			nuevacolumna->CellTemplate = cellTemplate;

			Campo->Columns->Add(nuevacolumna);
		}

		//for (int i = 1; i < Num_Fila; i++) {
		//	Campo->Rows->Add();
		//}

		//for (int i = 0; i < Num_Fila; i++)
		//{
			//for (int j = 0; j < Num_Columns; j++)
		//	{
		//		Campo->Rows[i]->Cells[j]->Style->BackColor = Color::Green;
		//	}
		//}
	
		Campo->Rows[0]->Cells[0]->Value = "T";
		Campo->Rows[0]->Cells[0]->Value = "H";

		timer1->Enabled = true;

	}
		  

		  int *generarAtor(int limI, int limS) {	
			   int xx;
			   xx = limI + rand() % (limS + 1 - limI);
			   int* T = &xx;
			   return T;
		  }

		  int *generarAlib(int limIi, int limSs) {
			   int  yy;
			   yy = limIi + rand() % (limSs + 1 - limIi);
			   int* L = &yy;
			   return L;
		   }

		 
		 // int TT = 1 + rand() % (10 + 1 - 1);
		  //int LL = 1 + rand() % (10 + 1 - 1);
 
		  
		  int p = 0;
		  int k = 1;
		  int t, l;

private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		//srand(time(NULL));
		//T = 1 + rand() % (10 + 1 - 1);
		//L = 1 + rand() % (10 + 1 - 1);
		//punteroT == &T;
		//punteroL == &L;

      	t = *generarAtor(1,10);
		l = *generarAlib(1,10);

	if (k >= 70){
		timer1->Enabled = false;
		MessageBox::Show("¡LA TORTUGA GANA! ¡BRAVO!", "Ganador", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else if (p >= 70) {
		timer1->Enabled = false;
		MessageBox::Show("La liebre gana. Ni hablar", "Ganador", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	
	else
	{
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
							k = k - 3;
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

		if (l == 1 || l == 2) {
			Campo->Rows[0]->Cells[p]->Value = "H";
		}
		if (l == 3 || l == 4) {
			p = p + 9;
			Campo->Rows[0]->Cells[p]->Value = "H";
			Campo->Rows[0]->Cells[p - 9]->Value = " ";
		}
		if (l == 5) {

			if (p < 12) {

				if (p < 11) {

					if (p < 10) {

						if (p < 9) {

							if (p < 8) {
								
								if (p < 7) {

									if (p < 6) {

										if (p < 5) {

											if (p < 4) {

												if (p < 3) {

													if (p < 2) {

														if (p < 1) {
															Campo->Rows[0]->Cells[p]->Value = "H";
														}
														else {
															p = p - 1;
															Campo->Rows[0]->Cells[p]->Value = "H";
															Campo->Rows[0]->Cells[p + 1]->Value = " ";
														}
													}
													else {
														p = p - 2;
														Campo->Rows[0]->Cells[p]->Value = "H";
														Campo->Rows[0]->Cells[p + 2]->Value = " ";
													}
												}
												else {
													p = p - 3;
													Campo->Rows[0]->Cells[p]->Value = "H";
													Campo->Rows[0]->Cells[p + 3]->Value = " ";
												}
											}
											else {
												p = p - 4;
												Campo->Rows[0]->Cells[p]->Value = "H";
												Campo->Rows[0]->Cells[p + 4]->Value = " ";
											}
										}
										else {
											p = p - 5;
											Campo->Rows[0]->Cells[p]->Value = "H";
											Campo->Rows[0]->Cells[p + 5]->Value = " ";
										}
									}
									else {
										p = p - 6;
										Campo->Rows[0]->Cells[p]->Value = "H";
										Campo->Rows[0]->Cells[p + 6]->Value = " ";
									}
								}
								else {
									p = p - 7;
									Campo->Rows[0]->Cells[p]->Value = "H";
									Campo->Rows[0]->Cells[p + 7]->Value = " ";
								}
							}
							else {
								p = p - 8;
								Campo->Rows[0]->Cells[p]->Value = "H";
								Campo->Rows[0]->Cells[p + 8]->Value = " ";
							}
						}
						else {
							p = p - 9;
							Campo->Rows[0]->Cells[p]->Value = "H";
							Campo->Rows[0]->Cells[p + 9]->Value = " ";
						}
					}
					else {
						p = p - 10;
						Campo->Rows[0]->Cells[p]->Value = "H";
						Campo->Rows[0]->Cells[p + 10]->Value = " ";
					}
				}
				else {
					p = p - 11;
					Campo->Rows[0]->Cells[p]->Value = "H";
					Campo->Rows[0]->Cells[p + 11]->Value = " ";
				}
			}
			else {
				p = p - 12;
				Campo->Rows[0]->Cells[p]->Value = "H";
				Campo->Rows[0]->Cells[p + 12]->Value = " ";
			}
		}
		if (l == 6 || l == 7 || l == 8) {
			p++;
			Campo->Rows[0]->Cells[p]->Value = "H";
			Campo->Rows[0]->Cells[p - 1]->Value = " ";
		}
		if (l == 9 || l == 10) {

			if (p < 2) {

				if (p < 1) {

					Campo->Rows[0]->Cells[p]->Value = "H";
				}
				else {
					p = p - 1;
					Campo->Rows[0]->Cells[p]->Value = "H";
					Campo->Rows[0]->Cells[p + 1]->Value = " ";
				}
			}
			else {
				p = p - 2;
				Campo->Rows[0]->Cells[p]->Value = "H";
				Campo->Rows[0]->Cells[p + 2]->Value = " ";
			}
		}

		if (k == p) {
			Campo->Rows[0]->Cells[k]->Style->BackColor = Color::Red;
		}
	}
    }


private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	k = 0;
	p = 0;

	for (int g = 0; g < 79; g++) {

		Campo->Rows[0]->Cells[g]->Style->BackColor = Color::White;
		Campo->Rows[0]->Cells[g]->Value = " ";

	}

	timer1->Enabled = true;

}
};
}
