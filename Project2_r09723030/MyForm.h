#pragma once

#include <cmath>                 // standard C mathematical library
#include <algorithm>             // defines the max() operator
#include <vector>                // STL vector templates
#include <iostream>
#include <cmath>
#include <cstdlib>

namespace Project2 {

	
	using namespace std;
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
	private: System::Windows::Forms::Label^ welcome_label;
	private: System::Windows::Forms::Button^ count;
	private: System::Windows::Forms::TextBox^ stock_price;
	private: System::Windows::Forms::TextBox^ exec_rate;

	protected:




	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ r_rate;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ Steps;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ Sigma;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ Time;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ Simulations;
	private: System::Windows::Forms::Label^ result_text;
	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::Label^ delta_text;
	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Label^ gamma_text;
	private: System::Windows::Forms::Label^ label10;

	private: System::Windows::Forms::Label^ vega_text;
	private: System::Windows::Forms::Label^ label11;











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
			this->welcome_label = (gcnew System::Windows::Forms::Label());
			this->count = (gcnew System::Windows::Forms::Button());
			this->stock_price = (gcnew System::Windows::Forms::TextBox());
			this->exec_rate = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->r_rate = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Steps = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Sigma = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Time = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Simulations = (gcnew System::Windows::Forms::TextBox());
			this->result_text = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->delta_text = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->gamma_text = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->vega_text = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// welcome_label
			// 
			this->welcome_label->AutoSize = true;
			this->welcome_label->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->welcome_label->Location = System::Drawing::Point(231, 28);
			this->welcome_label->Name = L"welcome_label";
			this->welcome_label->Size = System::Drawing::Size(311, 37);
			this->welcome_label->TabIndex = 0;
			this->welcome_label->Text = L"Asian Put Calculator";
			this->welcome_label->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// count
			// 
			this->count->Font = (gcnew System::Drawing::Font(L"Times New Roman", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->count->Location = System::Drawing::Point(519, 196);
			this->count->Name = L"count";
			this->count->Size = System::Drawing::Size(152, 62);
			this->count->TabIndex = 1;
			this->count->Text = L"Count";
			this->count->UseVisualStyleBackColor = true;
			this->count->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// stock_price
			// 
			this->stock_price->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stock_price->Location = System::Drawing::Point(81, 97);
			this->stock_price->Name = L"stock_price";
			this->stock_price->Size = System::Drawing::Size(120, 45);
			this->stock_price->TabIndex = 2;
			this->stock_price->Text = L"100";
			this->stock_price->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// exec_rate
			// 
			this->exec_rate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exec_rate->Location = System::Drawing::Point(79, 164);
			this->exec_rate->Name = L"exec_rate";
			this->exec_rate->Size = System::Drawing::Size(122, 45);
			this->exec_rate->TabIndex = 3;
			this->exec_rate->Text = L"100";
			this->exec_rate->TextChanged += gcnew System::EventHandler(this, &MyForm::exec_rate_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(38, 233);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(28, 37);
			this->label1->TabIndex = 4;
			this->label1->Text = L"r";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(33, 169);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 37);
			this->label2->TabIndex = 5;
			this->label2->Text = L"K";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(38, 103);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 37);
			this->label3->TabIndex = 6;
			this->label3->Text = L"S";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// r_rate
			// 
			this->r_rate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->r_rate->Location = System::Drawing::Point(79, 231);
			this->r_rate->Name = L"r_rate";
			this->r_rate->Size = System::Drawing::Size(122, 45);
			this->r_rate->TabIndex = 7;
			this->r_rate->Text = L"0.03";
			this->r_rate->TextChanged += gcnew System::EventHandler(this, &MyForm::r_rate_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(230, 231);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(86, 37);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Steps";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// Steps
			// 
			this->Steps->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Steps->Location = System::Drawing::Point(322, 228);
			this->Steps->Name = L"Steps";
			this->Steps->Size = System::Drawing::Size(120, 45);
			this->Steps->TabIndex = 8;
			this->Steps->Text = L"365";
			this->Steps->TextChanged += gcnew System::EventHandler(this, &MyForm::Steps_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(216, 169);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(100, 37);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Sigma";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// Sigma
			// 
			this->Sigma->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Sigma->Location = System::Drawing::Point(322, 164);
			this->Sigma->Name = L"Sigma";
			this->Sigma->Size = System::Drawing::Size(120, 45);
			this->Sigma->TabIndex = 10;
			this->Sigma->Text = L"0.5";
			this->Sigma->TextChanged += gcnew System::EventHandler(this, &MyForm::Sigma_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(231, 106);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(85, 37);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Time";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// Time
			// 
			this->Time->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Time->Location = System::Drawing::Point(322, 101);
			this->Time->Name = L"Time";
			this->Time->Size = System::Drawing::Size(120, 45);
			this->Time->TabIndex = 12;
			this->Time->Text = L"1.0";
			this->Time->TextChanged += gcnew System::EventHandler(this, &MyForm::Time_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(460, 109);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(172, 37);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Simulations";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// Simulations
			// 
			this->Simulations->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Simulations->Location = System::Drawing::Point(638, 104);
			this->Simulations->Name = L"Simulations";
			this->Simulations->Size = System::Drawing::Size(120, 45);
			this->Simulations->TabIndex = 14;
			this->Simulations->Text = L"1000";
			this->Simulations->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// result_text
			// 
			this->result_text->AutoSize = true;
			this->result_text->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->result_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->result_text->ForeColor = System::Drawing::SystemColors::InfoText;
			this->result_text->Location = System::Drawing::Point(342, 319);
			this->result_text->MinimumSize = System::Drawing::Size(100, 19);
			this->result_text->Name = L"result_text";
			this->result_text->Size = System::Drawing::Size(100, 38);
			this->result_text->TabIndex = 16;
			this->result_text->Click += gcnew System::EventHandler(this, &MyForm::result_text_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(120, 314);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(196, 46);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Put Price =";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// delta_text
			// 
			this->delta_text->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->delta_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->delta_text->ForeColor = System::Drawing::SystemColors::InfoText;
			this->delta_text->Location = System::Drawing::Point(138, 393);
			this->delta_text->Name = L"delta_text";
			this->delta_text->Size = System::Drawing::Size(100, 37);
			this->delta_text->TabIndex = 19;
			this->delta_text->Click += gcnew System::EventHandler(this, &MyForm::delta_text_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(40, 395);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(96, 34);
			this->label9->TabIndex = 18;
			this->label9->Text = L"delta =";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// gamma_text
			// 
			this->gamma_text->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->gamma_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gamma_text->Location = System::Drawing::Point(377, 392);
			this->gamma_text->Name = L"gamma_text";
			this->gamma_text->Size = System::Drawing::Size(100, 38);
			this->gamma_text->TabIndex = 20;
			this->gamma_text->Click += gcnew System::EventHandler(this, &MyForm::gamma_text_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(248, 393);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(126, 34);
			this->label10->TabIndex = 21;
			this->label10->Text = L"gamma =";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click_1);
			// 
			// vega_text
			// 
			this->vega_text->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->vega_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->vega_text->Location = System::Drawing::Point(593, 391);
			this->vega_text->Name = L"vega_text";
			this->vega_text->Size = System::Drawing::Size(100, 38);
			this->vega_text->TabIndex = 22;
			this->vega_text->Click += gcnew System::EventHandler(this, &MyForm::vega_text_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(496, 394);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(94, 34);
			this->label11->TabIndex = 23;
			this->label11->Text = L"vega =";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(784, 456);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->vega_text);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->gamma_text);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->delta_text);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->result_text);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->Simulations);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->Time);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Sigma);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Steps);
			this->Controls->Add(this->r_rate);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->exec_rate);
			this->Controls->Add(this->stock_price);
			this->Controls->Add(this->count);
			this->Controls->Add(this->welcome_label);
			this->Font = (gcnew System::Drawing::Font(L"細明體_HKSCS", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
		   double random_uniform_0_1(void) {
			   return double(rand()) / double(RAND_MAX); // this uses the C library random number generator. 
		   };
		   double random_normal(void) {
			   double U1, U2, V1, V2;
			   double S = 2;
			   while (S >= 1) {
				   U1 = random_uniform_0_1();
				   U2 = random_uniform_0_1();
				   V1 = 2.0 * U1 - 1.0;
				   V2 = 2.0 * U2 - 1.0;
				   S = pow(V1, 2) + pow(V2, 2);
			   };
			   double X1 = V1 * sqrt((-2.0 * log(S)) / S);
			   return X1;
		   };


		   vector<double>
			   simulate_lognormally_distributed_sequence(const double& S,
				   const double& r,
				   const double& sigma,
				   const double& time,
				   const int& no_steps) {
			   vector<double> prices(no_steps);
			   double delta_t = time / no_steps;
			   double R = (r - 0.5 * pow(sigma, 2)) * delta_t;
			   double SD = sigma * sqrt(delta_t);
			   double S_t = S;
			   for (int i = 0; i < no_steps; ++i) {
				   S_t = S_t * exp(R + SD * random_normal());
				   prices[i] = S_t;
			   };
			   return prices;
		   };

		   double
			   simulate_asian_put_generic(const double& S,
				   const double& K,
				   const double& r,
				   const double& sigma,
				   const double& time,
				   const int& no_steps,
				   const int& no_sims) {
			   double sum_payoffs = 0;
			   for (int n = 0; n < no_sims; n++) {
				   vector<double>prices = simulate_lognormally_distributed_sequence(S, r, sigma, time, no_steps);
				   double sum = 0;
				   for (int i = 0; i < no_steps; ++i) {
					   sum = sum + prices[i];
				   }

				   double avg = sum / prices.size();
				   sum_payoffs += max(0.0, K - avg);
			   };
			   return exp(-r * time) * (sum_payoffs / no_sims);
		   };

		   
		   double
		   option_price_delta(const double& S,
			   const double& K,
			   const double& r,
			   const double& sigma,
			   const double& time,
			   const double& no_steps,
			   const int& no_sims) {
			   double q1 = S * 0.1;
			   double p1 = simulate_asian_put_generic(S - q1, K, r, sigma, time, no_steps, no_sims);
			   double p2 = simulate_asian_put_generic(S + q1, K, r, sigma, time, no_steps, no_sims);
			   return ((p2 - p1) / (2 * q1));
		   };
		   
		   double
		   option_price_gamma(const double& S,
			   const double& K,
			   const double& r,
			   const double& sigma,
			   const double& time,
			   const double& no_steps,
			   const int& no_sims) {
			   double q1 = S * 0.1;
			   double p1 = simulate_asian_put_generic(S - q1, K, r, sigma, time, no_steps, no_sims);
			   double p = simulate_asian_put_generic(S, K, r, sigma, time, no_steps, no_sims);
			   double p2 = simulate_asian_put_generic(S + q1, K, r, sigma, time, no_steps, no_sims);
			   return ((p2 - 2 * p + p1) / (pow(q1, 2)));
		   };

		   double 
			option_price_vega(const double& S,
			   const double& K,
			   const double& r,
			   const double& sigma,
			   const double& time,
			   const double& no_steps,
			   const int& no_sims) {
			   double q2 = sigma * 0.1;
			   double p = simulate_asian_put_generic(S, K, r, sigma, time, no_steps, no_sims);
			   double p3 = simulate_asian_put_generic(S, K, r, sigma + q2, time, no_steps, no_sims);
			   return (p3 - p) / q2;
		   };

		   

		   double asian_put(const double& S,
			   const double& K,
			   const double& r,
			   const double& sigma,
			   const double& time,
			   const int& no_steps,
			   const int& no_sims)
		   {
			   double price = simulate_asian_put_generic(S, K, r, sigma, time, no_steps, no_sims);
			   return price;
		   }

		   
		   double asian_delta(const double& S,
				const double& K,
				const double& r,
				const double& sigma,
				const double& time,
				const double& no_steps,
				const int& no_sims)
		   {
				double delta = option_price_delta(S, K, r, sigma, time, no_steps, no_sims);
				return delta;
		   }
		   
		   double asian_gamma(const double& S,
			   const double& K,
			   const double& r,
			   const double& sigma,
			   const double& time,
			   const double& no_steps,
			   const int& no_sims)
		   {
			   double gamma = option_price_gamma(S, K, r, sigma, time, no_steps, no_sims);
			   return gamma;
		   }

		   double asian_vega(const double& S,
			   const double& K,
			   const double& r,
			   const double& sigma,
			   const double& time,
			   const double& no_steps,
			   const int& no_sims)
		   {
			   double vega = option_price_vega(S, K, r, sigma, time, no_steps, no_sims);
			   return vega;
		   }


	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		double S = System::Convert::ToDouble(stock_price->Text);
		double K = System::Convert::ToDouble(exec_rate->Text);
		double r = ::System::Convert::ToDouble(r_rate->Text);
		double sigma = System::Convert::ToDouble(Sigma->Text);
		double time = System::Convert::ToDouble(Time->Text);
		double steps = System::Convert::ToInt16(Steps->Text);;
		double simulations = System::Convert::ToInt16(Simulations->Text);
	

		double asian_price = asian_put(S,K,r,sigma,time, steps, simulations);
		double delta = asian_delta(S, K, r, sigma, time, steps, simulations);
		double gamma = asian_gamma(S, K, r, sigma, time, steps, simulations);
		double vega = asian_vega(S, K, r, sigma, time, steps, simulations);
		result_text->Text = System::Convert::ToString(asian_price);
		delta_text->Text = System::Convert::ToString(delta);
		gamma_text->Text = System::Convert::ToString(gamma);
		vega_text->Text = System::Convert::ToString(vega);
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Sigma_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void r_rate_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void result_text_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Time_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void exec_rate_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void delta_text_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void gamma_text_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void vega_text_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Steps_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}