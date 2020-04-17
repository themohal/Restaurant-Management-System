#pragma once

namespace mypro {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for checkbox
	/// </summary>
	public ref class checkbox : public System::Windows::Forms::Form
	{
	public:
		checkbox(void)
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
		~checkbox()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^  checkBox1;
	protected: 
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::CheckBox^  checkBox5;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::ComboBox^  comboBox5;

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
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(92, 34);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(51, 17);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"pepsi";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(92, 57);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(46, 17);
			this->checkBox2->TabIndex = 1;
			this->checkBox2->Text = L"dew";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(92, 80);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(47, 17);
			this->checkBox3->TabIndex = 2;
			this->checkBox3->Text = L"7 up";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(92, 103);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(50, 17);
			this->checkBox4->TabIndex = 3;
			this->checkBox4->Text = L"coke";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(92, 126);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(88, 17);
			this->checkBox5->TabIndex = 4;
			this->checkBox5->Text = L"mineral water";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(135, 195);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &checkbox::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"1", L"2", L"3", L"4", L"5"});
			this->comboBox1->Location = System::Drawing::Point(216, 32);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(46, 21);
			this->comboBox1->TabIndex = 6;
			this->comboBox1->Text = L"1";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"1", L"2", L"3", L"4", L"5"});
			this->comboBox2->Location = System::Drawing::Point(216, 57);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(46, 21);
			this->comboBox2->TabIndex = 7;
			this->comboBox2->Text = L"1";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"2", L"3", L"4", L"5"});
			this->comboBox3->Location = System::Drawing::Point(216, 80);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(46, 21);
			this->comboBox3->TabIndex = 8;
			this->comboBox3->Text = L"1";
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"2", L"3", L"4", L"5"});
			this->comboBox4->Location = System::Drawing::Point(216, 103);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(46, 21);
			this->comboBox4->TabIndex = 9;
			this->comboBox4->Text = L"1";
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"2", L"3", L"4", L"5", L""});
			this->comboBox5->Location = System::Drawing::Point(216, 131);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(46, 21);
			this->comboBox5->TabIndex = 10;
			this->comboBox5->Text = L"1";
			// 
			// checkbox
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(709, 340);
			this->Controls->Add(this->comboBox5);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Name = L"checkbox";
			this->Text = L"checkbox";
			this->Load += gcnew System::EventHandler(this, &checkbox::checkbox_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void checkbox_Load(System::Object^  sender, System::EventArgs^  e) {
			 }

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			MySqlConnection^ conn=gcnew MySqlConnection("server=localhost;port=3306;username=root;password=themohal123;database=myproject");  
		   MySqlDataReader^ myReader;
			int chk1price,chk1unitprice,chk1totalprice,chk1quantity; 
			int chk2price,chk2unitprice,chk2totalprice,chk2quantity;
			int chk3price, chk3unitprice, chk3totalprice, chk3quantity;
			int chk4price, chk4unitprice, chk4totalprice, chk4quantity;
			int chk5price, chk5unitprice, chk5totalprice, chk5quantity;
			int grandtotal;
			String^ tx1;String^ tx2;String^ tx3;String^ tx4;String^ tx5;
			int id1,id2,id3,id4,id5;
			
			String^ product;
			 String^ itemcode;
			 try
			 {

//Block to save chk1 quantity and chk1 item (if checked)

				if (checkBox1->Checked==true)
                                  {
		MySqlCommand^ cmdDataBase=gcnew MySqlCommand("SELECT price,id FROM myproject.prices where food_product='"+this->checkBox1->Text+"';",conn);		
				        conn->Open();
				        myReader=cmdDataBase->ExecuteReader();
				        while(myReader->Read())
			tx1=this->checkBox1->Text;				
						String^ idn1=myReader->GetInt32("id").ToString();
						id1=Convert::ToInt32(idn1);
		chk1quantity=Convert::ToInt32(comboBox1->Text);
		String^ j=Convert::ToString(chk1quantity);
		String^ i=myReader->GetInt32("price").ToString();
		chk1price=Convert::ToInt32(i);
		int mul1=chk1quantity*chk1price;
		chk1unitprice=mul1;
		String^ mul2=Convert::ToString(mul1);
		MessageBox::Show(mul2);
conn->Close();
myReader->Close();
			}			
			 }
catch(Exception^ ex)
{
	MessageBox::Show(ex->Message);
}
 
		//checkbox 2
try
			 {

//Block to save chk1 quantity and chk1 item (if checked)

				if (checkBox2->Checked==true)
                                  {
				 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("SELECT price,id FROM myproject.prices where food_product='"+this->checkBox2->Text+"';",conn);		
				   conn->Open();
				 myReader=cmdDataBase->ExecuteReader();
			while(myReader->Read())
				tx2=this->checkBox2->Text;
			String^ idn2=myReader->GetInt32("id").ToString();
						id2=Convert::ToInt32(idn2);
		chk2quantity=Convert::ToInt32(comboBox2->Text);
		String^ k=Convert::ToString(chk2quantity);
		String^ l=myReader->GetInt32("price").ToString();
		chk2price=Convert::ToInt32(l);
		int mul3=chk2quantity*chk2price;
		chk2unitprice=mul3;
		String^ mul4=Convert::ToString(mul3);
		MessageBox::Show(mul4);
conn->Close();
			}			
			 }
catch(Exception^ ex)
{
	MessageBox::Show(ex->Message);
}
try
			 {

//Block to save chk1 quantity and chk1 item (if checked)

				if (checkBox3->Checked==true)
				{
                MySqlCommand^ cmdDataBase=gcnew MySqlCommand("SELECT price,id FROM myproject.prices where food_product='"+this->checkBox3->Text+"';",conn);		
				        conn->Open();
				        myReader=cmdDataBase->ExecuteReader();
				        while(myReader->Read())
							tx3=this->checkBox3->Text;
						String^ idn3=myReader->GetInt32("id").ToString();
						id3=Convert::ToInt32(idn3);
		chk3quantity=Convert::ToInt32(comboBox3->Text);
		String^ a=Convert::ToString(chk3quantity);
		String^ b=myReader->GetInt32("price").ToString();
		chk3price=Convert::ToInt32(b);
		int mul5=chk3quantity*chk3price;
		chk3unitprice=mul5;
		String^ mul6=Convert::ToString(mul5);
		MessageBox::Show(mul6);
conn->Close();
myReader->Close();
			}			
			 }
catch(Exception^ ex)
{
	MessageBox::Show(ex->Message);
}
//checkbox4
try
			 {

//Block to save chk1 quantity and chk1 item (if checked)

				if (checkBox4->Checked==true)
				{
                MySqlCommand^ cmdDataBase=gcnew MySqlCommand("SELECT price,id FROM myproject.prices where food_product='"+this->checkBox4->Text+"';",conn);		
				        conn->Open();
				        myReader=cmdDataBase->ExecuteReader();
				        while(myReader->Read())
							tx4=this->checkBox4->Text;
						String^ idn4=myReader->GetInt32("id").ToString();
						id4=Convert::ToInt32(idn4);
		chk4quantity=Convert::ToInt32(comboBox4->Text);
		String^ c=Convert::ToString(chk4quantity);
		String^ d=myReader->GetInt32("price").ToString();
		chk4price=Convert::ToInt32(d);
		int mul7=chk4quantity*chk4price;
		chk4unitprice=mul7;
		String^ mul8=Convert::ToString(mul7);
		MessageBox::Show(mul8);
conn->Close();
myReader->Close();
			}			
			 }
catch(Exception^ ex)
{
	MessageBox::Show(ex->Message);
}
//checkbox5
try
			 {

//Block to save chk1 quantity and chk1 item (if checked)

				if (checkBox5->Checked==true)
				{
                MySqlCommand^ cmdDataBase=gcnew MySqlCommand("SELECT price,id FROM myproject.prices where food_product='"+this->checkBox5->Text+"';",conn);		
				        conn->Open();
				        myReader=cmdDataBase->ExecuteReader();
				        while(myReader->Read())
							tx5=this->checkBox5->Text;
						String^ idn5=myReader->GetInt32("id").ToString();
						id5=Convert::ToInt32(idn5);
		chk5quantity=Convert::ToInt32(comboBox5->Text);
		String^ e=myReader->GetInt32("price").ToString();
		String^ f=Convert::ToString(chk5quantity);
		chk5price=Convert::ToInt32(e);
		int mul9=chk5quantity*chk5price;
		chk5unitprice=mul9;
		String^ mul10=Convert::ToString(mul9);
		MessageBox::Show(mul10);
conn->Close();
myReader->Close();
			}			
			 }
catch(Exception^ ex)
{
	MessageBox::Show(ex->Message);
}
///////////////////////////////////////////////////////////////////////////
grandtotal=chk1unitprice+chk2unitprice+chk3unitprice+chk4unitprice+chk5unitprice;
//////////////////////////////////////////////////////////////////////////

try{
//Block to save chk1 quantity and chk1 item (if checked)
	if (checkBox1->Checked==false&&checkBox2->Checked==false&&checkBox3->Checked==false&&checkBox4->Checked==false&&checkBox5->Checked==false)
	{
		chk1price=chk2price=chk3price=chk4price=chk5price=chk1unitprice=chk2unitprice=chk3unitprice=chk4unitprice=chk5unitprice=0;
	}
		MySqlCommand^ cmdDataBase=gcnew MySqlCommand("insert into myproject.orders(itemno,order_products,quantity,unit_price,total,grand_total) values ('"+id1+" "+id2+" "+id3+" "+id4+" "+id5+"','"+tx1+" "+tx2+" "+tx3+" "+tx4+" "+tx5+"','"+chk1quantity+"   "+chk2quantity+"   "+chk3quantity+"  "+chk4quantity+"   "+chk5quantity+"','"+chk1price+","+chk2price+","+chk3price+","+chk4price+","+chk5price+"','"+chk1unitprice+","+chk2unitprice+","+chk3unitprice+","+chk4unitprice+","+chk5unitprice+"','"+grandtotal+"');",conn);		
				       conn->Open();
				 myReader=cmdDataBase->ExecuteReader();
						
						{
				 
				 MessageBox::Show("Data Saved");
				 
						}
}
			 catch(Exception^ ex)
			 {
				 MessageBox::Show(ex->Message);
		 }
 
		 }
		
};
}
