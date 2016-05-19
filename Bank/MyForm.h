#pragma once
#include <msclr\marshal_cppstd.h>
#include <string>
namespace Bank {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  Label1;

	private: System::Windows::Forms::Label^  Label3;
	private: System::Windows::Forms::NumericUpDown^  Data;
	private: System::Windows::Forms::Label^  Label4;
	private: System::Windows::Forms::Label^  Label5;
	private: System::Windows::Forms::TextBox^  Value2;

	protected:

	protected:












	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  Label2;
	private: System::Windows::Forms::ComboBox^  Value;

	private: System::Windows::Forms::ComboBox^  Capital;
	private: System::Windows::Forms::TextBox^  SumDepos;
	private: System::Windows::Forms::TextBox^  Percent;
	private: System::Windows::Forms::TextBox^  Result;









	protected:

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Label1 = (gcnew System::Windows::Forms::Label());
			this->Label3 = (gcnew System::Windows::Forms::Label());
			this->Data = (gcnew System::Windows::Forms::NumericUpDown());
			this->Label4 = (gcnew System::Windows::Forms::Label());
			this->Label5 = (gcnew System::Windows::Forms::Label());
			this->Value2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Label2 = (gcnew System::Windows::Forms::Label());
			this->Value = (gcnew System::Windows::Forms::ComboBox());
			this->Capital = (gcnew System::Windows::Forms::ComboBox());
			this->SumDepos = (gcnew System::Windows::Forms::TextBox());
			this->Percent = (gcnew System::Windows::Forms::TextBox());
			this->Result = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Data))->BeginInit();
			this->SuspendLayout();
			// 
			// Label1
			// 
			this->Label1->AutoSize = true;
			this->Label1->Location = System::Drawing::Point(13, 13);
			this->Label1->Name = L"Label1";
			this->Label1->Size = System::Drawing::Size(83, 13);
			this->Label1->TabIndex = 0;
			this->Label1->Text = L"Сумма вклада:";
			this->Label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// Label3
			// 
			this->Label3->AutoSize = true;
			this->Label3->Location = System::Drawing::Point(13, 63);
			this->Label3->Name = L"Label3";
			this->Label3->Size = System::Drawing::Size(124, 13);
			this->Label3->TabIndex = 0;
			this->Label3->Text = L"Срок вклада, месяцев:";
			// 
			// Data
			// 
			this->Data->Location = System::Drawing::Point(240, 63);
			this->Data->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 120, 0, 0, 0 });
			this->Data->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->Data->Name = L"Data";
			this->Data->Size = System::Drawing::Size(120, 20);
			this->Data->TabIndex = 1;
			this->Data->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// Label4
			// 
			this->Label4->AutoSize = true;
			this->Label4->Location = System::Drawing::Point(13, 89);
			this->Label4->Name = L"Label4";
			this->Label4->Size = System::Drawing::Size(221, 13);
			this->Label4->TabIndex = 0;
			this->Label4->Text = L"Процентная ставка по вкладу, % годовых:";
			// 
			// Label5
			// 
			this->Label5->AutoSize = true;
			this->Label5->Location = System::Drawing::Point(13, 115);
			this->Label5->Name = L"Label5";
			this->Label5->Size = System::Drawing::Size(210, 13);
			this->Label5->TabIndex = 0;
			this->Label5->Text = L"Начисление процентов(капитализация):";
			// 
			// Value2
			// 
			this->Value2->Location = System::Drawing::Point(298, 171);
			this->Value2->Name = L"Value2";
			this->Value2->Size = System::Drawing::Size(50, 20);
			this->Value2->TabIndex = 2;
			this->Value2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(20, 171);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Label2
			// 
			this->Label2->AutoSize = true;
			this->Label2->Location = System::Drawing::Point(11, 36);
			this->Label2->Name = L"Label2";
			this->Label2->Size = System::Drawing::Size(84, 13);
			this->Label2->TabIndex = 4;
			this->Label2->Text = L"Валюта вклада";
			// 
			// Value
			// 
			this->Value->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(3) { L"руб", L"$", L"евро" });
			this->Value->FormattingEnabled = true;
			this->Value->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"руб", L"$", L"евро" });
			this->Value->Location = System::Drawing::Point(240, 33);
			this->Value->Name = L"Value";
			this->Value->Size = System::Drawing::Size(120, 21);
			this->Value->TabIndex = 5;
			this->Value->Text = L"руб";
			// 
			// Capital
			// 
			this->Capital->FormattingEnabled = true;
			this->Capital->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"В конце срока(без капитализации)", L"Ежемесячно",
					L"1 раз в 2 месяца", L"1 раз в 3 месяца", L"1 раз в пол года"
			});
			this->Capital->Location = System::Drawing::Point(240, 115);
			this->Capital->Name = L"Capital";
			this->Capital->Size = System::Drawing::Size(121, 21);
			this->Capital->TabIndex = 7;
			this->Capital->Text = L"В конце срока(без капитализации0";
			// 
			// SumDepos
			// 
			this->SumDepos->Location = System::Drawing::Point(240, 6);
			this->SumDepos->Name = L"SumDepos";
			this->SumDepos->Size = System::Drawing::Size(120, 20);
			this->SumDepos->TabIndex = 2;
			this->SumDepos->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->SumDepos->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::SumDepos_KeyPress);
			// 
			// Percent
			// 
			this->Percent->Location = System::Drawing::Point(240, 89);
			this->Percent->Name = L"Percent";
			this->Percent->Size = System::Drawing::Size(120, 20);
			this->Percent->TabIndex = 2;
			this->Percent->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->Percent->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::SumDepos_KeyPress);
			// 
			// Result
			// 
			this->Result->Location = System::Drawing::Point(172, 171);
			this->Result->Name = L"Result";
			this->Result->Size = System::Drawing::Size(120, 20);
			this->Result->TabIndex = 2;
			this->Result->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(377, 226);
			this->Controls->Add(this->Capital);
			this->Controls->Add(this->Value);
			this->Controls->Add(this->Label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Percent);
			this->Controls->Add(this->SumDepos);
			this->Controls->Add(this->Result);
			this->Controls->Add(this->Value2);
			this->Controls->Add(this->Label5);
			this->Controls->Add(this->Label4);
			this->Controls->Add(this->Data);
			this->Controls->Add(this->Label3);
			this->Controls->Add(this->Label1);
			this->Name = L"MyForm";
			this->Text = L"Калькулятор вклада";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Data))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void numericUpDown4_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void numericUpDown3_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	double sum = System::Convert::ToDouble(SumDepos->Text);
	int data = System::Convert::ToInt32(Data->Text);
	double perc = System::Convert::ToDouble(Data->Text) , result;
	Value2->Text = Value -> Text;
	Result ->Text = System::Convert::ToString(sum);//заменить на result
}
		 //проверка на ввод
private: System::Void SumDepos_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (!(Char::IsDigit(e->KeyChar)) && !((e->KeyChar == ',') &&
		((SumDepos->Text->IndexOf(",") == -1) &&
		((SumDepos->Text->Length != 0)))))
	{
		if (e->KeyChar != (char)Keys::Back)
		{
			e->Handled = true;
		}
	}
}
};
}
