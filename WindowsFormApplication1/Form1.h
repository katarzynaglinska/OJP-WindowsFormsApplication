#pragma once

namespace WindowsFormApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::DomainUpDown^  domainUpDown1;


	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::GroupBox^  groupBox1;

	private: System::Windows::Forms::PictureBox^  pictureBox1;



	private:

		array<String ^> ^  Nazwa_hotelu;
		array<String ^> ^  Liczba_gwiazdek;
		array<double ^> ^ Ocena_gosci;
		array<String ^> ^  Zdjecie_hotelu;
		array<ListBox ^> ^ Opis_hotelu;
		array<String ^> ^  Zdjecie_combobox1;
		array<String ^> ^  Zdjecie_combobox2;
		

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox6;


	private: System::Windows::Forms::Label^  label7;

	private: System::Windows::Forms::TabControl^  tabPage;



	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::ToolTip^  toolTip2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ToolTip^  toolTip3;
	private: System::ComponentModel::IContainer^  components;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->domainUpDown1 = (gcnew System::Windows::Forms::DomainUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tabPage = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip2 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip3 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->tabPage->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(10, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Hotel";
			// 
			// domainUpDown1
			// 
			this->domainUpDown1->Location = System::Drawing::Point(65, 15);
			this->domainUpDown1->Name = L"domainUpDown1";
			this->domainUpDown1->Size = System::Drawing::Size(182, 20);
			this->domainUpDown1->TabIndex = 1;
			this->domainUpDown1->Text = L"domainUpDown1";
			this->domainUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->toolTip2->SetToolTip(this->domainUpDown1, L"Wybierz hotel");
			this->domainUpDown1->UpDownAlign = System::Windows::Forms::LeftRightAlignment::Left;
			this->domainUpDown1->Wrap = true;
			this->domainUpDown1->SelectedItemChanged += gcnew System::EventHandler(this, &Form1::domainUpDown1_SelectedItemChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(22, 48);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Liczba gwiazdek";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(157, 48);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Ocena goœci";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(163, 73);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(54, 20);
			this->textBox3->TabIndex = 7;
			this->toolTip3->SetToolTip(this->textBox3, L"W skali 1-5");
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->listBox1);
			this->groupBox1->Location = System::Drawing::Point(6, 111);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(241, 266);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Udogodnienia w obiekcie";
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 25;
			this->listBox1->Location = System::Drawing::Point(17, 28);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(201, 229);
			this->listBox1->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(284, 10);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(352, 144);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button1->Location = System::Drawing::Point(86, 142);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(82, 49);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Policz koszty";
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->groupBox3);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Location = System::Drawing::Point(284, 177);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(352, 200);
			this->groupBox2->TabIndex = 12;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Oblicz koszt noclegu";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(95, 101);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(53, 20);
			this->textBox1->TabIndex = 14;
			this->textBox1->Text = L"0";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(193, 157);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(80, 20);
			this->textBox6->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(8, 104);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(46, 13);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Iloœæ dni";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->radioButton2);
			this->groupBox3->Controls->Add(this->radioButton1);
			this->groupBox3->Location = System::Drawing::Point(204, 33);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(118, 80);
			this->groupBox3->TabIndex = 4;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Posi³ek";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(10, 52);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(89, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->Text = L"Bez posi³ków";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(12, 26);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(80, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Z posi³kami";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(95, 69);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(53, 20);
			this->textBox5->TabIndex = 3;
			this->textBox5->Text = L"0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 69);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 13);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Iloœæ dzieci";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(95, 32);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(53, 20);
			this->textBox4->TabIndex = 1;
			this->textBox4->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 35);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(79, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Iloœæ doros³ych";
			// 
			// tabPage
			// 
			this->tabPage->Controls->Add(this->tabPage1);
			this->tabPage->Controls->Add(this->tabPage2);
			this->tabPage->Location = System::Drawing::Point(12, 2);
			this->tabPage->Name = L"tabPage";
			this->tabPage->SelectedIndex = 0;
			this->tabPage->Size = System::Drawing::Size(658, 411);
			this->tabPage->TabIndex = 14;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tabPage1->Controls->Add(this->pictureBox4);
			this->tabPage1->Controls->Add(this->pictureBox1);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->groupBox2);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->domainUpDown1);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(650, 385);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Hotele w Ljubljanie";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(23, 73);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(84, 19);
			this->pictureBox4->TabIndex = 13;
			this->pictureBox4->TabStop = false;
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tabPage2->Controls->Add(this->pictureBox3);
			this->tabPage2->Controls->Add(this->pictureBox2);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->comboBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(650, 385);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Ciekawe miejsca";
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox3->Location = System::Drawing::Point(360, 153);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(203, 196);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox2->Location = System::Drawing::Point(85, 153);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(203, 196);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Adobe Hebrew", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(168, 36);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(307, 30);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Ciekawe miejsca w Ljubljanie";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Stare Miasto – Rynek Miejski", L"Most Smoków",
					L"Budynek Tivoli", L"Zamek w Ljubljanie"
			});
			this->comboBox1->Location = System::Drawing::Point(197, 89);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(241, 21);
			this->comboBox1->TabIndex = 0;
			this->toolTip1->SetToolTip(this->comboBox1, L"Wybierz miejsce");
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(682, 425);
			this->Controls->Add(this->tabPage);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load_1);
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->tabPage->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}

		


	private: System::Void Form1_Load_1(System::Object^  sender, System::EventArgs^  e) {
		Nazwa_hotelu = gcnew array<String ^>(4);
		Liczba_gwiazdek = gcnew array<String ^>(4);
		Ocena_gosci = gcnew array<double ^>(4);
		Zdjecie_hotelu = gcnew array<String ^>(4);
		Opis_hotelu = gcnew array<ListBox ^>(4);

		Zdjecie_combobox1 = gcnew array<String ^>(4);
		Zdjecie_combobox2= gcnew array<String ^>(4);
		
		Nazwa_hotelu[0] = "Best Western Premier Hotel ";
		Liczba_gwiazdek[0] = "trzy_gwiazdka.jpg";
		Ocena_gosci[0] = 4.5;
		Zdjecie_hotelu[0] = "best.jpg";
		Opis_hotelu[0] = gcnew ListBox();
		Opis_hotelu[0]->Items->Add("Centrum fitness");
		Opis_hotelu[0]->Items->Add("Restauracja");
		Opis_hotelu[0]->Items->Add("Parking");
		Opis_hotelu[0]->Items->Add("Bezp³atne WiFi");
		Opis_hotelu[0]->Items->Add("Spa"); 
		Opis_hotelu[0]->Items->Add("Us³ugi konsjer¿a");
		Opis_hotelu[0]->Items->Add("Us³ugi dla VIP-ów");

		Nazwa_hotelu[1] = "Radisson Blu Plaza Hotel";
		Liczba_gwiazdek[1] = "dwie_gwiazdka.jpg";
		Ocena_gosci[1] = 3.8;
		Zdjecie_hotelu[1] = "radison.jpg";
		Opis_hotelu[1] = gcnew ListBox();
		Opis_hotelu[1]->Items->Add("Sauna");
		Opis_hotelu[1]->Items->Add("Bar");
		Opis_hotelu[1]->Items->Add("Œniadanie w pokoju");
		Opis_hotelu[1]->Items->Add("Przechowalnia baga¿u");
		Opis_hotelu[1]->Items->Add("Zaplecze bankietowe");

		Nazwa_hotelu[2] = "Hostel Tresor";
		Liczba_gwiazdek[2] = "jedna_gwiazdka.jpg";
		Ocena_gosci[2] = 2.2;
		Zdjecie_hotelu[2] = "tresor.jpg";
		Opis_hotelu[2] = gcnew ListBox();
		Opis_hotelu[2]->Items->Add("Parking");
		Opis_hotelu[2]->Items->Add("Bar");
		Opis_hotelu[2]->Items->Add("Winda");
		Opis_hotelu[2]->Items->Add("Faks / ksero");

		Nazwa_hotelu[3] = "Grand Hotel Union";
		Liczba_gwiazdek[3] = "trzy_gwiazdka.jpg";
		Ocena_gosci[3] = 4.2;
		Zdjecie_hotelu[3] = "grand.jpg";
		Opis_hotelu[3] = gcnew ListBox();
		Opis_hotelu[3]->Items->Add("Restauracja");
		Opis_hotelu[3]->Items->Add("Biblioteka");
		Opis_hotelu[3]->Items->Add("Sauna");
		Opis_hotelu[3]->Items->Add("Centrum fitness");
		Opis_hotelu[3]->Items->Add("Masa¿");
		Opis_hotelu[3]->Items->Add("Centrum biznesowe");
		Opis_hotelu[3]->Items->Add("Klimatyzacja");
		Opis_hotelu[3]->Items->Add("Wymiana walut");

		Zdjecie_combobox1[0] = "miasto1.jpg";
		Zdjecie_combobox2[0] = "miasto2.jpg";
		Zdjecie_combobox1[1] = "smok1.jpg";
		Zdjecie_combobox2[1] = "smok2.jpg";
		Zdjecie_combobox1[2] = "tivoli1.jpg";
		Zdjecie_combobox2[2] = "tivoli2.jpg";
		Zdjecie_combobox1[3] = "zamek1.jpg";
		Zdjecie_combobox2[3] = "zamek2.jpg";

		domainUpDown1->Items->AddRange(Nazwa_hotelu);

		domainUpDown1->SelectedIndex = 0;
		domainUpDown1_SelectedItemChanged(sender, e);
		

		comboBox1->SelectedIndex = 0;



	}




	private: System::Void domainUpDown1_SelectedItemChanged(System::Object^  sender, System::EventArgs^  e) {
		
		listBox1->Items->Clear();
		pictureBox4->Image = Image::FromFile(Liczba_gwiazdek[domainUpDown1->SelectedIndex]);
		textBox3->Text = Ocena_gosci[domainUpDown1->SelectedIndex]->ToString();
		pictureBox1->Image =Image::FromFile(Zdjecie_hotelu[domainUpDown1->SelectedIndex]);
		listBox1->Items->AddRange(Opis_hotelu[domainUpDown1->SelectedIndex]->Items);
		
	}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	int dorosli = 0,
		dzieci = 0,
		posilek = 0,
		wynik = 0,
		ilosc_dni = 0;

	try {
		dorosli = int::Parse(textBox4->Text);
		dzieci = int::Parse(textBox5->Text);
		ilosc_dni = int::Parse(textBox1->Text);
	}
		catch (Exception ^a) {
			MessageBox::Show("Wpisa³eœ niepoprawn¹ wartoœæ ");
		}
	
	
	
	if (radioButton1->Checked)
		posilek = 60;
	else
		posilek = 0;

	if(domainUpDown1->SelectedIndex == 0){

	wynik = (100 * dorosli + 50 * dzieci + posilek*(dorosli+dzieci))*ilosc_dni ;
	}
	else if(domainUpDown1->SelectedIndex == 1) {
		wynik = (80 * dorosli + 40*dzieci + posilek*(dorosli + dzieci))*ilosc_dni;
	}
	else if (domainUpDown1->SelectedIndex == 2) {
		wynik = (60 * dorosli + 30 * dzieci + posilek*(dorosli + dzieci))*ilosc_dni;
	}
	else if (domainUpDown1->SelectedIndex == 3) {
		wynik = (90 * dorosli + 45 * dzieci + posilek*(dorosli + dzieci))*ilosc_dni;
	}
	
	
	textBox6->Text = wynik.ToString("C");

}

private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	

	pictureBox2->Image = Image::FromFile(Zdjecie_combobox1[comboBox1->SelectedIndex]);
	pictureBox3->Image = Image::FromFile(Zdjecie_combobox2[comboBox1->SelectedIndex]);
}
};
}

