#pragma once
#include <msclr\marshal_cppstd.h>
#include "DnDUtils.h"


namespace DnDGUI {

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
		msclr::interop::marshal_context context;
	public:
		MyForm(void)
		{
			InitializeComponent();
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
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  generalPage;
	private: System::Windows::Forms::TabPage^  statsPage;
	public: System::Windows::Forms::ComboBox^  classDropDown;
	private:
	public: System::Windows::Forms::ComboBox^  raceDropDown;
	public: System::Windows::Forms::Label^  label3;
	public: System::Windows::Forms::Label^  label2;


	protected:







	public: System::Windows::Forms::TextBox^  nameTextBox;
	public: System::Windows::Forms::Label^  label1;
	public: System::Windows::Forms::Label^  sizeBox;




	public: System::Windows::Forms::TextBox^  ageTextBox;
	public: System::Windows::Forms::Label^  ageBox;
	public: System::Windows::Forms::ComboBox^  alignmentComboBox;

	public: System::Windows::Forms::ComboBox^  weightComboBox;

	public: System::Windows::Forms::ComboBox^  heightComboBox;
	public: System::Windows::Forms::TextBox^  deityTextBox;






	public: System::Windows::Forms::Label^  dietyBox;
	public: System::Windows::Forms::Label^  genderBox;
	public: System::Windows::Forms::Label^  alignmentDropDown;
	public: System::Windows::Forms::Label^  weightDropDown;
	public: System::Windows::Forms::Label^  heightDropDown;



	public: System::Windows::Forms::TextBox^  speedTextBox;


	public: System::Windows::Forms::Label^  speedBox;
	private: System::Windows::Forms::ComboBox^  wisDropDown;
	public:





























	private: System::Windows::Forms::ComboBox^  intelDropDown;

	private: System::Windows::Forms::ComboBox^  dexDropDown;

	private: System::Windows::Forms::ComboBox^  constDropDown;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::ComboBox^  strDropDown;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ComboBox^  charDropDown;


	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;

	private:
	public: System::Windows::Forms::Label^  label12;

	public: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  strBonusBox;
	private: System::Windows::Forms::TextBox^  charBonusBox;
	public:

	public:

	public:







	private: System::Windows::Forms::TextBox^  wisBonusBox;

	private: System::Windows::Forms::TextBox^  intelBonusBox;

	private: System::Windows::Forms::TextBox^  dexBonusBox;

	private: System::Windows::Forms::TextBox^  constBonusBox;








	private: System::Windows::Forms::TabPage^  skillsPage;
	private: System::Windows::Forms::TextBox^  thieveryMiscTextBox;



	private: System::Windows::Forms::TextBox^  streetwiseMiscTextBox;



	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::TextBox^  stealthMiscTextBox;



	private: System::Windows::Forms::TextBox^  religionMiscTextBox;



	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::TextBox^  perceptionMiscTextBox;



	private: System::Windows::Forms::TextBox^  natureMiscTextBox;



	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::TextBox^  intimidateMiscTextBox;






	private: System::Windows::Forms::TextBox^  insightMiscTextBox;

	private: System::Windows::Forms::TextBox^  historyMiscTextBox;

	private: System::Windows::Forms::TextBox^  healMiscTextBox;

	private: System::Windows::Forms::TextBox^  enduranceMiscTextBox;






	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::TextBox^  dungeoneeringMiscTextBox;






	private: System::Windows::Forms::TextBox^  diplomacyMiscTextBox;

	private: System::Windows::Forms::TextBox^  bluffMiscTextBox;

	private: System::Windows::Forms::TextBox^  athleticsMiscTextBox;

	private: System::Windows::Forms::TextBox^  arcanaMiscTextBox;

	private: System::Windows::Forms::TextBox^  acrobaticsMiscTextBox;









	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;


	private: System::Windows::Forms::Label^  label18;


	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::CheckBox^  streetwiseTrainedCheckBox;





private: System::Windows::Forms::CheckBox^  stealthTrainedCheckBox;

private: System::Windows::Forms::CheckBox^  religionTrainedCheckBox;

private: System::Windows::Forms::CheckBox^  perceptionTrainedCheckBox;

private: System::Windows::Forms::CheckBox^  natureTrainedCheckBox;

private: System::Windows::Forms::CheckBox^  intimidateTrainedCheckBox;

private: System::Windows::Forms::CheckBox^  insightTrainedCheckBox;

private: System::Windows::Forms::CheckBox^  historyTrainedCheckBox;

private: System::Windows::Forms::CheckBox^  healTrainedCheckBox;

private: System::Windows::Forms::CheckBox^  enduranceTrainedCheckBox;

private: System::Windows::Forms::CheckBox^  dungeoneeringTrainedCheckBox;

private: System::Windows::Forms::CheckBox^  diplomacyTrainedCheckBox;

private: System::Windows::Forms::CheckBox^  bluffTrainedCheckBox;

private: System::Windows::Forms::CheckBox^  athleticsTrainedCheckBox;

private: System::Windows::Forms::CheckBox^  arcanaTrainedCheckBox;

private: System::Windows::Forms::CheckBox^  acrobaticsTrainedCheckBox;
private: System::Windows::Forms::CheckBox^  thieveryTrainedCheckBox;


	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::TabPage^  featsPage;
	public: System::Windows::Forms::PictureBox^  pictureBox;
public: System::Windows::Forms::RichTextBox^  classDescriptionTextBox;
	private:

	public: System::Windows::Forms::Label^  label38;





	private: System::Windows::Forms::TextBox^  thieveryTextBox;
	private: System::Windows::Forms::TextBox^  streetwiseTextBox;
	private: System::Windows::Forms::TextBox^  stealthTextBox;
	private: System::Windows::Forms::TextBox^  religionTextBox;
	private: System::Windows::Forms::TextBox^  perceptionTextBox;
	private: System::Windows::Forms::TextBox^  natureTextBox;
	private: System::Windows::Forms::TextBox^  intimidateTextBox;
	private: System::Windows::Forms::TextBox^  insightTextBox;
	private: System::Windows::Forms::TextBox^  historyTextBox;
	private: System::Windows::Forms::TextBox^  healTextBox;
	private: System::Windows::Forms::TextBox^  enduranceTextBox;
	private: System::Windows::Forms::TextBox^  dungeoneeringTextBox;
	private: System::Windows::Forms::TextBox^  diplomacyTextBox;
	private: System::Windows::Forms::TextBox^  bluffTextBox;
	private: System::Windows::Forms::TextBox^  athleticsTextBox;
	private: System::Windows::Forms::TextBox^  arcanaTextBox;
	private: System::Windows::Forms::TextBox^  acrobaticsTextBox;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
public: System::Windows::Forms::TextBox^  sizeTextBox;
private:

public: System::Windows::Forms::ComboBox^  genderComboBox;
public: System::Windows::Forms::TextBox^  maxHPTextBox;


	private: System::Windows::Forms::RichTextBox^  skillsInfoBox;
public: System::Windows::Forms::TextBox^  currentHPTextBox;
private:

	public: System::Windows::Forms::ComboBox^  featsDropDown;
	private: System::Windows::Forms::Button^  statsRandomButton;
	public:
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Label^  featsLabel;
	private: System::Windows::Forms::TextBox^  charFinalBox;
	private: System::Windows::Forms::TextBox^  charModBox;



	private: System::Windows::Forms::TextBox^  wisFinalBox;
	private: System::Windows::Forms::TextBox^  wisModBox;



	private: System::Windows::Forms::TextBox^  intelFinalBox;
	private: System::Windows::Forms::TextBox^  intelModBox;




	private: System::Windows::Forms::TextBox^  dexFinalBox;
	private: System::Windows::Forms::TextBox^  dexModBox;



	private: System::Windows::Forms::TextBox^  constFinalBox;
	private: System::Windows::Forms::TextBox^  constModBox;




	private: System::Windows::Forms::TextBox^  strFinalBox;

	private: System::Windows::Forms::TextBox^  strModBox;






	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Button^  calculateButton;
	private: System::Windows::Forms::TabPage^  powersTab;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label4;
public: System::Windows::Forms::RichTextBox^  raceDescriptionBox;
private:

private:
public: System::Windows::Forms::Label^  label39;
public: System::Windows::Forms::TextBox^  languagesTextBox;

public: System::Windows::Forms::Label^  label40;

	private:
	public:
	private:





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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->generalPage = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->raceDescriptionBox = (gcnew System::Windows::Forms::RichTextBox());
			this->classDescriptionTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->alignmentComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->weightComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->genderComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->heightComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->classDropDown = (gcnew System::Windows::Forms::ComboBox());
			this->raceDropDown = (gcnew System::Windows::Forms::ComboBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->deityTextBox = (gcnew System::Windows::Forms::TextBox());
			this->maxHPTextBox = (gcnew System::Windows::Forms::TextBox());
			this->currentHPTextBox = (gcnew System::Windows::Forms::TextBox());
			this->speedTextBox = (gcnew System::Windows::Forms::TextBox());
			this->sizeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ageTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->nameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->dietyBox = (gcnew System::Windows::Forms::Label());
			this->genderBox = (gcnew System::Windows::Forms::Label());
			this->alignmentDropDown = (gcnew System::Windows::Forms::Label());
			this->speedBox = (gcnew System::Windows::Forms::Label());
			this->ageBox = (gcnew System::Windows::Forms::Label());
			this->weightDropDown = (gcnew System::Windows::Forms::Label());
			this->heightDropDown = (gcnew System::Windows::Forms::Label());
			this->sizeBox = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->statsPage = (gcnew System::Windows::Forms::TabPage());
			this->calculateButton = (gcnew System::Windows::Forms::Button());
			this->statsRandomButton = (gcnew System::Windows::Forms::Button());
			this->charFinalBox = (gcnew System::Windows::Forms::TextBox());
			this->charModBox = (gcnew System::Windows::Forms::TextBox());
			this->charBonusBox = (gcnew System::Windows::Forms::TextBox());
			this->wisFinalBox = (gcnew System::Windows::Forms::TextBox());
			this->wisModBox = (gcnew System::Windows::Forms::TextBox());
			this->wisBonusBox = (gcnew System::Windows::Forms::TextBox());
			this->intelFinalBox = (gcnew System::Windows::Forms::TextBox());
			this->intelModBox = (gcnew System::Windows::Forms::TextBox());
			this->intelBonusBox = (gcnew System::Windows::Forms::TextBox());
			this->dexFinalBox = (gcnew System::Windows::Forms::TextBox());
			this->dexModBox = (gcnew System::Windows::Forms::TextBox());
			this->dexBonusBox = (gcnew System::Windows::Forms::TextBox());
			this->constFinalBox = (gcnew System::Windows::Forms::TextBox());
			this->constModBox = (gcnew System::Windows::Forms::TextBox());
			this->constBonusBox = (gcnew System::Windows::Forms::TextBox());
			this->strFinalBox = (gcnew System::Windows::Forms::TextBox());
			this->strModBox = (gcnew System::Windows::Forms::TextBox());
			this->strBonusBox = (gcnew System::Windows::Forms::TextBox());
			this->charDropDown = (gcnew System::Windows::Forms::ComboBox());
			this->wisDropDown = (gcnew System::Windows::Forms::ComboBox());
			this->intelDropDown = (gcnew System::Windows::Forms::ComboBox());
			this->dexDropDown = (gcnew System::Windows::Forms::ComboBox());
			this->constDropDown = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->strDropDown = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->skillsPage = (gcnew System::Windows::Forms::TabPage());
			this->skillsInfoBox = (gcnew System::Windows::Forms::RichTextBox());
			this->thieveryTrainedCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->streetwiseTrainedCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->stealthTrainedCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->religionTrainedCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->perceptionTrainedCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->natureTrainedCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->intimidateTrainedCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->insightTrainedCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->historyTrainedCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->healTrainedCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->enduranceTrainedCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->dungeoneeringTrainedCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->diplomacyTrainedCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->bluffTrainedCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->athleticsTrainedCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->arcanaTrainedCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->acrobaticsTrainedCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->thieveryMiscTextBox = (gcnew System::Windows::Forms::TextBox());
			this->streetwiseMiscTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->stealthMiscTextBox = (gcnew System::Windows::Forms::TextBox());
			this->religionMiscTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->perceptionMiscTextBox = (gcnew System::Windows::Forms::TextBox());
			this->natureMiscTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->intimidateMiscTextBox = (gcnew System::Windows::Forms::TextBox());
			this->insightMiscTextBox = (gcnew System::Windows::Forms::TextBox());
			this->historyMiscTextBox = (gcnew System::Windows::Forms::TextBox());
			this->healMiscTextBox = (gcnew System::Windows::Forms::TextBox());
			this->enduranceMiscTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->dungeoneeringMiscTextBox = (gcnew System::Windows::Forms::TextBox());
			this->diplomacyMiscTextBox = (gcnew System::Windows::Forms::TextBox());
			this->bluffMiscTextBox = (gcnew System::Windows::Forms::TextBox());
			this->athleticsMiscTextBox = (gcnew System::Windows::Forms::TextBox());
			this->arcanaMiscTextBox = (gcnew System::Windows::Forms::TextBox());
			this->thieveryTextBox = (gcnew System::Windows::Forms::TextBox());
			this->streetwiseTextBox = (gcnew System::Windows::Forms::TextBox());
			this->stealthTextBox = (gcnew System::Windows::Forms::TextBox());
			this->religionTextBox = (gcnew System::Windows::Forms::TextBox());
			this->perceptionTextBox = (gcnew System::Windows::Forms::TextBox());
			this->natureTextBox = (gcnew System::Windows::Forms::TextBox());
			this->intimidateTextBox = (gcnew System::Windows::Forms::TextBox());
			this->insightTextBox = (gcnew System::Windows::Forms::TextBox());
			this->historyTextBox = (gcnew System::Windows::Forms::TextBox());
			this->healTextBox = (gcnew System::Windows::Forms::TextBox());
			this->enduranceTextBox = (gcnew System::Windows::Forms::TextBox());
			this->dungeoneeringTextBox = (gcnew System::Windows::Forms::TextBox());
			this->diplomacyTextBox = (gcnew System::Windows::Forms::TextBox());
			this->bluffTextBox = (gcnew System::Windows::Forms::TextBox());
			this->athleticsTextBox = (gcnew System::Windows::Forms::TextBox());
			this->arcanaTextBox = (gcnew System::Windows::Forms::TextBox());
			this->acrobaticsTextBox = (gcnew System::Windows::Forms::TextBox());
			this->acrobaticsMiscTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->featsPage = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->featsLabel = (gcnew System::Windows::Forms::Label());
			this->featsDropDown = (gcnew System::Windows::Forms::ComboBox());
			this->powersTab = (gcnew System::Windows::Forms::TabPage());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->languagesTextBox = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1->SuspendLayout();
			this->generalPage->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
			this->statsPage->SuspendLayout();
			this->skillsPage->SuspendLayout();
			this->featsPage->SuspendLayout();
			this->powersTab->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->generalPage);
			this->tabControl1->Controls->Add(this->statsPage);
			this->tabControl1->Controls->Add(this->skillsPage);
			this->tabControl1->Controls->Add(this->featsPage);
			this->tabControl1->Controls->Add(this->powersTab);
			this->tabControl1->Location = System::Drawing::Point(1, 27);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(662, 561);
			this->tabControl1->TabIndex = 0;
			// 
			// generalPage
			// 
			this->generalPage->Controls->Add(this->pictureBox);
			this->generalPage->Controls->Add(this->raceDescriptionBox);
			this->generalPage->Controls->Add(this->classDescriptionTextBox);
			this->generalPage->Controls->Add(this->alignmentComboBox);
			this->generalPage->Controls->Add(this->weightComboBox);
			this->generalPage->Controls->Add(this->genderComboBox);
			this->generalPage->Controls->Add(this->heightComboBox);
			this->generalPage->Controls->Add(this->classDropDown);
			this->generalPage->Controls->Add(this->raceDropDown);
			this->generalPage->Controls->Add(this->label13);
			this->generalPage->Controls->Add(this->label3);
			this->generalPage->Controls->Add(this->label12);
			this->generalPage->Controls->Add(this->label2);
			this->generalPage->Controls->Add(this->languagesTextBox);
			this->generalPage->Controls->Add(this->deityTextBox);
			this->generalPage->Controls->Add(this->maxHPTextBox);
			this->generalPage->Controls->Add(this->currentHPTextBox);
			this->generalPage->Controls->Add(this->speedTextBox);
			this->generalPage->Controls->Add(this->sizeTextBox);
			this->generalPage->Controls->Add(this->ageTextBox);
			this->generalPage->Controls->Add(this->label39);
			this->generalPage->Controls->Add(this->nameTextBox);
			this->generalPage->Controls->Add(this->label40);
			this->generalPage->Controls->Add(this->label38);
			this->generalPage->Controls->Add(this->dietyBox);
			this->generalPage->Controls->Add(this->genderBox);
			this->generalPage->Controls->Add(this->alignmentDropDown);
			this->generalPage->Controls->Add(this->speedBox);
			this->generalPage->Controls->Add(this->ageBox);
			this->generalPage->Controls->Add(this->weightDropDown);
			this->generalPage->Controls->Add(this->heightDropDown);
			this->generalPage->Controls->Add(this->sizeBox);
			this->generalPage->Controls->Add(this->label1);
			this->generalPage->Location = System::Drawing::Point(4, 22);
			this->generalPage->Name = L"generalPage";
			this->generalPage->Padding = System::Windows::Forms::Padding(3);
			this->generalPage->Size = System::Drawing::Size(654, 535);
			this->generalPage->TabIndex = 0;
			this->generalPage->Text = L"General";
			this->generalPage->UseVisualStyleBackColor = true;
			this->generalPage->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click);
			// 
			// pictureBox
			// 
			this->pictureBox->Location = System::Drawing::Point(318, 7);
			this->pictureBox->Name = L"pictureBox";
			this->pictureBox->Size = System::Drawing::Size(186, 153);
			this->pictureBox->TabIndex = 5;
			this->pictureBox->TabStop = false;
			// 
			// raceDescriptionBox
			// 
			this->raceDescriptionBox->Location = System::Drawing::Point(421, 183);
			this->raceDescriptionBox->Name = L"raceDescriptionBox";
			this->raceDescriptionBox->ReadOnly = true;
			this->raceDescriptionBox->Size = System::Drawing::Size(226, 334);
			this->raceDescriptionBox->TabIndex = 4;
			this->raceDescriptionBox->Text = L"";
			// 
			// classDescriptionTextBox
			// 
			this->classDescriptionTextBox->Location = System::Drawing::Point(179, 183);
			this->classDescriptionTextBox->Name = L"classDescriptionTextBox";
			this->classDescriptionTextBox->ReadOnly = true;
			this->classDescriptionTextBox->Size = System::Drawing::Size(226, 334);
			this->classDescriptionTextBox->TabIndex = 4;
			this->classDescriptionTextBox->Text = L"";
			// 
			// alignmentComboBox
			// 
			this->alignmentComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->alignmentComboBox->FormattingEnabled = true;
			this->alignmentComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Lawful Good", L"Good", L"Unaligned",
					L"Evil", L"Chaotic Evil"
			});
			this->alignmentComboBox->Location = System::Drawing::Point(13, 345);
			this->alignmentComboBox->Name = L"alignmentComboBox";
			this->alignmentComboBox->Size = System::Drawing::Size(121, 21);
			this->alignmentComboBox->TabIndex = 3;
			this->alignmentComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::classDropDown_SelectedIndexChanged);
			// 
			// weightComboBox
			// 
			this->weightComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->weightComboBox->FormattingEnabled = true;
			this->weightComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(51) {
				L"70", L"75", L"80", L"85", L"90", L"95",
					L"100", L"105", L"110", L"115", L"120", L"125", L"130", L"135", L"140", L"145", L"150", L"155", L"160", L"165", L"170", L"175",
					L"180", L"185", L"190", L"195", L"200", L"205", L"210", L"215", L"220", L"225", L"230", L"235", L"240", L"245", L"250", L"255",
					L"260", L"265", L"270", L"275", L"280", L"285", L"290", L"295", L"300", L"305", L"310", L"315", L"320"
			});
			this->weightComboBox->Location = System::Drawing::Point(13, 301);
			this->weightComboBox->Name = L"weightComboBox";
			this->weightComboBox->Size = System::Drawing::Size(121, 21);
			this->weightComboBox->TabIndex = 3;
			this->weightComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::classDropDown_SelectedIndexChanged);
			// 
			// genderComboBox
			// 
			this->genderComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->genderComboBox->FormattingEnabled = true;
			this->genderComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->genderComboBox->Location = System::Drawing::Point(13, 222);
			this->genderComboBox->Name = L"genderComboBox";
			this->genderComboBox->Size = System::Drawing::Size(121, 21);
			this->genderComboBox->TabIndex = 3;
			this->genderComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::classDropDown_SelectedIndexChanged);
			// 
			// heightComboBox
			// 
			this->heightComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->heightComboBox->FormattingEnabled = true;
			this->heightComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(49) {
				L"3\'", L"3\'1", L"3\'2", L"3\'3", L"3\'4",
					L"3\'5", L"3\'6", L"3\'7", L"3\'8", L"3\'9", L"3\'10", L"3\'11", L"4\'", L"4\'1", L"4\'2", L"4\'3", L"4\'4", L"4\'5", L"4\'6",
					L"4\'7", L"4\'8", L"4\'9", L"4\'10", L"4\'11", L"5\'", L"5\'1", L"5\'2", L"5\'3", L"5\'4", L"5\'5", L"5\'6", L"5\'7", L"5\'8",
					L"5\'9", L"5\'10", L"5\'11", L"6\'", L"6\'1", L"6\'2", L"6\'3", L"6\'4", L"6\'5", L"6\'6", L"6\'7", L"6\'8", L"6\'9", L"6\'10",
					L"6\'11", L"7\'"
			});
			this->heightComboBox->Location = System::Drawing::Point(13, 261);
			this->heightComboBox->Name = L"heightComboBox";
			this->heightComboBox->Size = System::Drawing::Size(121, 21);
			this->heightComboBox->TabIndex = 3;
			this->heightComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::classDropDown_SelectedIndexChanged);
			// 
			// classDropDown
			// 
			this->classDropDown->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->classDropDown->FormattingEnabled = true;
			this->classDropDown->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Cleric", L"Fighter", L"Paladin", L"Ranger",
					L"Rogue", L"Warlock", L"Warlord", L"Wizard"
			});
			this->classDropDown->Location = System::Drawing::Point(13, 104);
			this->classDropDown->Name = L"classDropDown";
			this->classDropDown->Size = System::Drawing::Size(121, 21);
			this->classDropDown->TabIndex = 3;
			this->classDropDown->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::classDropDown_SelectedIndexChanged);
			// 
			// raceDropDown
			// 
			this->raceDropDown->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->raceDropDown->FormattingEnabled = true;
			this->raceDropDown->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Dragonborn", L"Dwarf", L"Eladrin", L"Elf",
					L"Half-Elf", L"Halfling", L"Human", L"Tiefling"
			});
			this->raceDropDown->Location = System::Drawing::Point(13, 64);
			this->raceDropDown->Name = L"raceDropDown";
			this->raceDropDown->Size = System::Drawing::Size(121, 21);
			this->raceDropDown->TabIndex = 3;
			this->raceDropDown->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::raceDropDown_SelectedIndexChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(249, 6);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(59, 13);
			this->label13->TabIndex = 2;
			this->label13->Text = L"Current HP";
			this->label13->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(11, 88);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(32, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Class";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(176, 7);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(45, 13);
			this->label12->TabIndex = 2;
			this->label12->Text = L"Max HP";
			this->label12->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(10, 47);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Race";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// deityTextBox
			// 
			this->deityTextBox->Location = System::Drawing::Point(14, 385);
			this->deityTextBox->Name = L"deityTextBox";
			this->deityTextBox->Size = System::Drawing::Size(123, 20);
			this->deityTextBox->TabIndex = 1;
			this->deityTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// maxHPTextBox
			// 
			this->maxHPTextBox->Location = System::Drawing::Point(179, 23);
			this->maxHPTextBox->Name = L"maxHPTextBox";
			this->maxHPTextBox->ReadOnly = true;
			this->maxHPTextBox->Size = System::Drawing::Size(57, 20);
			this->maxHPTextBox->TabIndex = 1;
			this->maxHPTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// currentHPTextBox
			// 
			this->currentHPTextBox->Location = System::Drawing::Point(252, 24);
			this->currentHPTextBox->Name = L"currentHPTextBox";
			this->currentHPTextBox->Size = System::Drawing::Size(57, 20);
			this->currentHPTextBox->TabIndex = 1;
			this->currentHPTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// speedTextBox
			// 
			this->speedTextBox->Location = System::Drawing::Point(179, 63);
			this->speedTextBox->Name = L"speedTextBox";
			this->speedTextBox->Size = System::Drawing::Size(123, 20);
			this->speedTextBox->TabIndex = 1;
			this->speedTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// sizeTextBox
			// 
			this->sizeTextBox->Location = System::Drawing::Point(14, 145);
			this->sizeTextBox->Name = L"sizeTextBox";
			this->sizeTextBox->Size = System::Drawing::Size(123, 20);
			this->sizeTextBox->TabIndex = 1;
			this->sizeTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// ageTextBox
			// 
			this->ageTextBox->Location = System::Drawing::Point(14, 183);
			this->ageTextBox->Name = L"ageTextBox";
			this->ageTextBox->Size = System::Drawing::Size(123, 20);
			this->ageTextBox->TabIndex = 1;
			this->ageTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(416, 163);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(89, 13);
			this->label39->TabIndex = 0;
			this->label39->Text = L"Race Description";
			this->label39->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// nameTextBox
			// 
			this->nameTextBox->Location = System::Drawing::Point(13, 24);
			this->nameTextBox->Name = L"nameTextBox";
			this->nameTextBox->Size = System::Drawing::Size(123, 20);
			this->nameTextBox->TabIndex = 1;
			this->nameTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(174, 163);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(88, 13);
			this->label38->TabIndex = 0;
			this->label38->Text = L"Class Description";
			this->label38->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// dietyBox
			// 
			this->dietyBox->AutoSize = true;
			this->dietyBox->Location = System::Drawing::Point(11, 369);
			this->dietyBox->Name = L"dietyBox";
			this->dietyBox->Size = System::Drawing::Size(31, 13);
			this->dietyBox->TabIndex = 0;
			this->dietyBox->Text = L"Deity";
			this->dietyBox->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// genderBox
			// 
			this->genderBox->AutoSize = true;
			this->genderBox->Location = System::Drawing::Point(11, 206);
			this->genderBox->Name = L"genderBox";
			this->genderBox->Size = System::Drawing::Size(42, 13);
			this->genderBox->TabIndex = 0;
			this->genderBox->Text = L"Gender";
			this->genderBox->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// alignmentDropDown
			// 
			this->alignmentDropDown->AutoSize = true;
			this->alignmentDropDown->Location = System::Drawing::Point(11, 329);
			this->alignmentDropDown->Name = L"alignmentDropDown";
			this->alignmentDropDown->Size = System::Drawing::Size(53, 13);
			this->alignmentDropDown->TabIndex = 0;
			this->alignmentDropDown->Text = L"Alignment";
			this->alignmentDropDown->Click += gcnew System::EventHandler(this, &MyForm::sizeBox_Click);
			// 
			// speedBox
			// 
			this->speedBox->AutoSize = true;
			this->speedBox->Location = System::Drawing::Point(176, 47);
			this->speedBox->Name = L"speedBox";
			this->speedBox->Size = System::Drawing::Size(38, 13);
			this->speedBox->TabIndex = 0;
			this->speedBox->Text = L"Speed";
			this->speedBox->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// ageBox
			// 
			this->ageBox->AutoSize = true;
			this->ageBox->Location = System::Drawing::Point(11, 167);
			this->ageBox->Name = L"ageBox";
			this->ageBox->Size = System::Drawing::Size(26, 13);
			this->ageBox->TabIndex = 0;
			this->ageBox->Text = L"Age";
			this->ageBox->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// weightDropDown
			// 
			this->weightDropDown->AutoSize = true;
			this->weightDropDown->Location = System::Drawing::Point(11, 285);
			this->weightDropDown->Name = L"weightDropDown";
			this->weightDropDown->Size = System::Drawing::Size(41, 13);
			this->weightDropDown->TabIndex = 0;
			this->weightDropDown->Text = L"Weight";
			this->weightDropDown->Click += gcnew System::EventHandler(this, &MyForm::sizeBox_Click);
			// 
			// heightDropDown
			// 
			this->heightDropDown->AutoSize = true;
			this->heightDropDown->Location = System::Drawing::Point(11, 245);
			this->heightDropDown->Name = L"heightDropDown";
			this->heightDropDown->Size = System::Drawing::Size(38, 13);
			this->heightDropDown->TabIndex = 0;
			this->heightDropDown->Text = L"Height";
			this->heightDropDown->Click += gcnew System::EventHandler(this, &MyForm::sizeBox_Click);
			// 
			// sizeBox
			// 
			this->sizeBox->AutoSize = true;
			this->sizeBox->Location = System::Drawing::Point(11, 128);
			this->sizeBox->Name = L"sizeBox";
			this->sizeBox->Size = System::Drawing::Size(27, 13);
			this->sizeBox->TabIndex = 0;
			this->sizeBox->Text = L"Size";
			this->sizeBox->Click += gcnew System::EventHandler(this, &MyForm::sizeBox_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(8, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Name";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// statsPage
			// 
			this->statsPage->AllowDrop = true;
			this->statsPage->Controls->Add(this->calculateButton);
			this->statsPage->Controls->Add(this->statsRandomButton);
			this->statsPage->Controls->Add(this->charFinalBox);
			this->statsPage->Controls->Add(this->charModBox);
			this->statsPage->Controls->Add(this->charBonusBox);
			this->statsPage->Controls->Add(this->wisFinalBox);
			this->statsPage->Controls->Add(this->wisModBox);
			this->statsPage->Controls->Add(this->wisBonusBox);
			this->statsPage->Controls->Add(this->intelFinalBox);
			this->statsPage->Controls->Add(this->intelModBox);
			this->statsPage->Controls->Add(this->intelBonusBox);
			this->statsPage->Controls->Add(this->dexFinalBox);
			this->statsPage->Controls->Add(this->dexModBox);
			this->statsPage->Controls->Add(this->dexBonusBox);
			this->statsPage->Controls->Add(this->constFinalBox);
			this->statsPage->Controls->Add(this->constModBox);
			this->statsPage->Controls->Add(this->constBonusBox);
			this->statsPage->Controls->Add(this->strFinalBox);
			this->statsPage->Controls->Add(this->strModBox);
			this->statsPage->Controls->Add(this->strBonusBox);
			this->statsPage->Controls->Add(this->charDropDown);
			this->statsPage->Controls->Add(this->wisDropDown);
			this->statsPage->Controls->Add(this->intelDropDown);
			this->statsPage->Controls->Add(this->dexDropDown);
			this->statsPage->Controls->Add(this->constDropDown);
			this->statsPage->Controls->Add(this->label10);
			this->statsPage->Controls->Add(this->label9);
			this->statsPage->Controls->Add(this->label8);
			this->statsPage->Controls->Add(this->strDropDown);
			this->statsPage->Controls->Add(this->label7);
			this->statsPage->Controls->Add(this->label14);
			this->statsPage->Controls->Add(this->label19);
			this->statsPage->Controls->Add(this->label6);
			this->statsPage->Controls->Add(this->label11);
			this->statsPage->Controls->Add(this->label5);
			this->statsPage->Location = System::Drawing::Point(4, 22);
			this->statsPage->Name = L"statsPage";
			this->statsPage->Padding = System::Windows::Forms::Padding(3);
			this->statsPage->Size = System::Drawing::Size(654, 535);
			this->statsPage->TabIndex = 1;
			this->statsPage->Text = L"Stats";
			this->statsPage->UseVisualStyleBackColor = true;
			this->statsPage->Click += gcnew System::EventHandler(this, &MyForm::statsPage_Click);
			// 
			// calculateButton
			// 
			this->calculateButton->Location = System::Drawing::Point(157, 35);
			this->calculateButton->Name = L"calculateButton";
			this->calculateButton->Size = System::Drawing::Size(75, 23);
			this->calculateButton->TabIndex = 7;
			this->calculateButton->Text = L"Calculate";
			this->calculateButton->UseVisualStyleBackColor = true;
			this->calculateButton->Click += gcnew System::EventHandler(this, &MyForm::calculateButton_Click);
			// 
			// statsRandomButton
			// 
			this->statsRandomButton->Location = System::Drawing::Point(24, 320);
			this->statsRandomButton->Name = L"statsRandomButton";
			this->statsRandomButton->Size = System::Drawing::Size(75, 23);
			this->statsRandomButton->TabIndex = 6;
			this->statsRandomButton->Text = L"Randomize";
			this->statsRandomButton->UseVisualStyleBackColor = true;
			// 
			// charFinalBox
			// 
			this->charFinalBox->AllowDrop = true;
			this->charFinalBox->Location = System::Drawing::Point(142, 283);
			this->charFinalBox->Name = L"charFinalBox";
			this->charFinalBox->Size = System::Drawing::Size(41, 20);
			this->charFinalBox->TabIndex = 5;
			// 
			// charModBox
			// 
			this->charModBox->AllowDrop = true;
			this->charModBox->Location = System::Drawing::Point(206, 283);
			this->charModBox->Name = L"charModBox";
			this->charModBox->Size = System::Drawing::Size(41, 20);
			this->charModBox->TabIndex = 5;
			// 
			// charBonusBox
			// 
			this->charBonusBox->AllowDrop = true;
			this->charBonusBox->Location = System::Drawing::Point(76, 283);
			this->charBonusBox->Name = L"charBonusBox";
			this->charBonusBox->Size = System::Drawing::Size(41, 20);
			this->charBonusBox->TabIndex = 5;
			// 
			// wisFinalBox
			// 
			this->wisFinalBox->AllowDrop = true;
			this->wisFinalBox->Location = System::Drawing::Point(142, 242);
			this->wisFinalBox->Name = L"wisFinalBox";
			this->wisFinalBox->Size = System::Drawing::Size(41, 20);
			this->wisFinalBox->TabIndex = 5;
			// 
			// wisModBox
			// 
			this->wisModBox->AllowDrop = true;
			this->wisModBox->Location = System::Drawing::Point(206, 242);
			this->wisModBox->Name = L"wisModBox";
			this->wisModBox->Size = System::Drawing::Size(41, 20);
			this->wisModBox->TabIndex = 5;
			// 
			// wisBonusBox
			// 
			this->wisBonusBox->AllowDrop = true;
			this->wisBonusBox->Location = System::Drawing::Point(76, 242);
			this->wisBonusBox->Name = L"wisBonusBox";
			this->wisBonusBox->Size = System::Drawing::Size(41, 20);
			this->wisBonusBox->TabIndex = 5;
			// 
			// intelFinalBox
			// 
			this->intelFinalBox->AllowDrop = true;
			this->intelFinalBox->Location = System::Drawing::Point(142, 200);
			this->intelFinalBox->Name = L"intelFinalBox";
			this->intelFinalBox->Size = System::Drawing::Size(41, 20);
			this->intelFinalBox->TabIndex = 5;
			// 
			// intelModBox
			// 
			this->intelModBox->AllowDrop = true;
			this->intelModBox->Location = System::Drawing::Point(206, 200);
			this->intelModBox->Name = L"intelModBox";
			this->intelModBox->Size = System::Drawing::Size(41, 20);
			this->intelModBox->TabIndex = 5;
			// 
			// intelBonusBox
			// 
			this->intelBonusBox->AllowDrop = true;
			this->intelBonusBox->Location = System::Drawing::Point(76, 200);
			this->intelBonusBox->Name = L"intelBonusBox";
			this->intelBonusBox->Size = System::Drawing::Size(41, 20);
			this->intelBonusBox->TabIndex = 5;
			// 
			// dexFinalBox
			// 
			this->dexFinalBox->AllowDrop = true;
			this->dexFinalBox->Location = System::Drawing::Point(142, 157);
			this->dexFinalBox->Name = L"dexFinalBox";
			this->dexFinalBox->Size = System::Drawing::Size(41, 20);
			this->dexFinalBox->TabIndex = 5;
			// 
			// dexModBox
			// 
			this->dexModBox->AllowDrop = true;
			this->dexModBox->Location = System::Drawing::Point(206, 157);
			this->dexModBox->Name = L"dexModBox";
			this->dexModBox->Size = System::Drawing::Size(41, 20);
			this->dexModBox->TabIndex = 5;
			// 
			// dexBonusBox
			// 
			this->dexBonusBox->AllowDrop = true;
			this->dexBonusBox->Location = System::Drawing::Point(76, 157);
			this->dexBonusBox->Name = L"dexBonusBox";
			this->dexBonusBox->Size = System::Drawing::Size(41, 20);
			this->dexBonusBox->TabIndex = 5;
			// 
			// constFinalBox
			// 
			this->constFinalBox->AllowDrop = true;
			this->constFinalBox->Location = System::Drawing::Point(142, 118);
			this->constFinalBox->Name = L"constFinalBox";
			this->constFinalBox->Size = System::Drawing::Size(41, 20);
			this->constFinalBox->TabIndex = 5;
			// 
			// constModBox
			// 
			this->constModBox->AllowDrop = true;
			this->constModBox->Location = System::Drawing::Point(206, 118);
			this->constModBox->Name = L"constModBox";
			this->constModBox->Size = System::Drawing::Size(41, 20);
			this->constModBox->TabIndex = 5;
			// 
			// constBonusBox
			// 
			this->constBonusBox->AllowDrop = true;
			this->constBonusBox->Location = System::Drawing::Point(76, 118);
			this->constBonusBox->Name = L"constBonusBox";
			this->constBonusBox->Size = System::Drawing::Size(41, 20);
			this->constBonusBox->TabIndex = 5;
			// 
			// strFinalBox
			// 
			this->strFinalBox->AllowDrop = true;
			this->strFinalBox->Location = System::Drawing::Point(142, 77);
			this->strFinalBox->Name = L"strFinalBox";
			this->strFinalBox->Size = System::Drawing::Size(41, 20);
			this->strFinalBox->TabIndex = 5;
			// 
			// strModBox
			// 
			this->strModBox->AllowDrop = true;
			this->strModBox->Location = System::Drawing::Point(206, 77);
			this->strModBox->Name = L"strModBox";
			this->strModBox->Size = System::Drawing::Size(41, 20);
			this->strModBox->TabIndex = 5;
			this->strModBox->TextChanged += gcnew System::EventHandler(this, &MyForm::strModBox_TextChanged);
			// 
			// strBonusBox
			// 
			this->strBonusBox->AllowDrop = true;
			this->strBonusBox->Location = System::Drawing::Point(76, 77);
			this->strBonusBox->Name = L"strBonusBox";
			this->strBonusBox->Size = System::Drawing::Size(41, 20);
			this->strBonusBox->TabIndex = 5;
			this->strBonusBox->TextChanged += gcnew System::EventHandler(this, &MyForm::strBonusBox_TextChanged);
			// 
			// charDropDown
			// 
			this->charDropDown->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->charDropDown->FormattingEnabled = true;
			this->charDropDown->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"8", L"9", L"10", L"11", L"12", L"13", L"14",
					L"15", L"16", L"17", L"18"
			});
			this->charDropDown->Location = System::Drawing::Point(7, 283);
			this->charDropDown->Name = L"charDropDown";
			this->charDropDown->Size = System::Drawing::Size(44, 21);
			this->charDropDown->TabIndex = 4;
			this->charDropDown->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::wisdomDropDown_SelectedIndexChanged);
			// 
			// wisDropDown
			// 
			this->wisDropDown->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->wisDropDown->FormattingEnabled = true;
			this->wisDropDown->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"8", L"9", L"10", L"11", L"12", L"13", L"14",
					L"15", L"16", L"17", L"18"
			});
			this->wisDropDown->Location = System::Drawing::Point(8, 242);
			this->wisDropDown->Name = L"wisDropDown";
			this->wisDropDown->Size = System::Drawing::Size(44, 21);
			this->wisDropDown->TabIndex = 4;
			this->wisDropDown->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::wisdomDropDown_SelectedIndexChanged);
			// 
			// intelDropDown
			// 
			this->intelDropDown->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->intelDropDown->FormattingEnabled = true;
			this->intelDropDown->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"8", L"9", L"10", L"11", L"12", L"13", L"14",
					L"15", L"16", L"17", L"18"
			});
			this->intelDropDown->Location = System::Drawing::Point(7, 200);
			this->intelDropDown->Name = L"intelDropDown";
			this->intelDropDown->Size = System::Drawing::Size(44, 21);
			this->intelDropDown->TabIndex = 4;
			// 
			// dexDropDown
			// 
			this->dexDropDown->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->dexDropDown->FormattingEnabled = true;
			this->dexDropDown->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"8", L"9", L"10", L"11", L"12", L"13", L"14",
					L"15", L"16", L"17", L"18"
			});
			this->dexDropDown->Location = System::Drawing::Point(7, 157);
			this->dexDropDown->Name = L"dexDropDown";
			this->dexDropDown->Size = System::Drawing::Size(44, 21);
			this->dexDropDown->TabIndex = 4;
			// 
			// constDropDown
			// 
			this->constDropDown->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->constDropDown->FormattingEnabled = true;
			this->constDropDown->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"8", L"9", L"10", L"11", L"12", L"13", L"14",
					L"15", L"16", L"17", L"18"
			});
			this->constDropDown->Location = System::Drawing::Point(8, 117);
			this->constDropDown->Name = L"constDropDown";
			this->constDropDown->Size = System::Drawing::Size(44, 21);
			this->constDropDown->TabIndex = 4;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(4, 267);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(50, 13);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Charisma";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(5, 226);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(45, 13);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Wisdom";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(4, 184);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(61, 13);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Intelligence";
			// 
			// strDropDown
			// 
			this->strDropDown->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->strDropDown->FormattingEnabled = true;
			this->strDropDown->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"8", L"9", L"10", L"11", L"12", L"13", L"14",
					L"15", L"16", L"17", L"18"
			});
			this->strDropDown->Location = System::Drawing::Point(8, 77);
			this->strDropDown->Name = L"strDropDown";
			this->strDropDown->Size = System::Drawing::Size(44, 21);
			this->strDropDown->TabIndex = 4;
			this->strDropDown->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::strengthDropDown_SelectedIndexChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(4, 141);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(48, 13);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Dexterity";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(154, 61);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(13, 13);
			this->label14->TabIndex = 0;
			this->label14->Text = L"=";
			this->label14->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(203, 61);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(44, 13);
			this->label19->TabIndex = 0;
			this->label19->Text = L"Modifier";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(5, 101);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(62, 13);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Constitution";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(73, 61);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(46, 13);
			this->label11->TabIndex = 0;
			this->label11->Text = L"+ Bonus";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(5, 61);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(47, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Strength";
			// 
			// skillsPage
			// 
			this->skillsPage->Controls->Add(this->skillsInfoBox);
			this->skillsPage->Controls->Add(this->thieveryTrainedCheckBox);
			this->skillsPage->Controls->Add(this->streetwiseTrainedCheckBox);
			this->skillsPage->Controls->Add(this->stealthTrainedCheckBox);
			this->skillsPage->Controls->Add(this->religionTrainedCheckBox);
			this->skillsPage->Controls->Add(this->perceptionTrainedCheckBox);
			this->skillsPage->Controls->Add(this->natureTrainedCheckBox);
			this->skillsPage->Controls->Add(this->intimidateTrainedCheckBox);
			this->skillsPage->Controls->Add(this->insightTrainedCheckBox);
			this->skillsPage->Controls->Add(this->historyTrainedCheckBox);
			this->skillsPage->Controls->Add(this->healTrainedCheckBox);
			this->skillsPage->Controls->Add(this->enduranceTrainedCheckBox);
			this->skillsPage->Controls->Add(this->dungeoneeringTrainedCheckBox);
			this->skillsPage->Controls->Add(this->diplomacyTrainedCheckBox);
			this->skillsPage->Controls->Add(this->bluffTrainedCheckBox);
			this->skillsPage->Controls->Add(this->athleticsTrainedCheckBox);
			this->skillsPage->Controls->Add(this->arcanaTrainedCheckBox);
			this->skillsPage->Controls->Add(this->acrobaticsTrainedCheckBox);
			this->skillsPage->Controls->Add(this->label34);
			this->skillsPage->Controls->Add(this->label37);
			this->skillsPage->Controls->Add(this->label36);
			this->skillsPage->Controls->Add(this->label21);
			this->skillsPage->Controls->Add(this->thieveryMiscTextBox);
			this->skillsPage->Controls->Add(this->streetwiseMiscTextBox);
			this->skillsPage->Controls->Add(this->label32);
			this->skillsPage->Controls->Add(this->label33);
			this->skillsPage->Controls->Add(this->stealthMiscTextBox);
			this->skillsPage->Controls->Add(this->religionMiscTextBox);
			this->skillsPage->Controls->Add(this->label30);
			this->skillsPage->Controls->Add(this->label31);
			this->skillsPage->Controls->Add(this->perceptionMiscTextBox);
			this->skillsPage->Controls->Add(this->natureMiscTextBox);
			this->skillsPage->Controls->Add(this->label28);
			this->skillsPage->Controls->Add(this->label29);
			this->skillsPage->Controls->Add(this->intimidateMiscTextBox);
			this->skillsPage->Controls->Add(this->insightMiscTextBox);
			this->skillsPage->Controls->Add(this->historyMiscTextBox);
			this->skillsPage->Controls->Add(this->healMiscTextBox);
			this->skillsPage->Controls->Add(this->enduranceMiscTextBox);
			this->skillsPage->Controls->Add(this->label23);
			this->skillsPage->Controls->Add(this->label24);
			this->skillsPage->Controls->Add(this->label25);
			this->skillsPage->Controls->Add(this->label26);
			this->skillsPage->Controls->Add(this->label27);
			this->skillsPage->Controls->Add(this->dungeoneeringMiscTextBox);
			this->skillsPage->Controls->Add(this->diplomacyMiscTextBox);
			this->skillsPage->Controls->Add(this->bluffMiscTextBox);
			this->skillsPage->Controls->Add(this->athleticsMiscTextBox);
			this->skillsPage->Controls->Add(this->arcanaMiscTextBox);
			this->skillsPage->Controls->Add(this->thieveryTextBox);
			this->skillsPage->Controls->Add(this->streetwiseTextBox);
			this->skillsPage->Controls->Add(this->stealthTextBox);
			this->skillsPage->Controls->Add(this->religionTextBox);
			this->skillsPage->Controls->Add(this->perceptionTextBox);
			this->skillsPage->Controls->Add(this->natureTextBox);
			this->skillsPage->Controls->Add(this->intimidateTextBox);
			this->skillsPage->Controls->Add(this->insightTextBox);
			this->skillsPage->Controls->Add(this->historyTextBox);
			this->skillsPage->Controls->Add(this->healTextBox);
			this->skillsPage->Controls->Add(this->enduranceTextBox);
			this->skillsPage->Controls->Add(this->dungeoneeringTextBox);
			this->skillsPage->Controls->Add(this->diplomacyTextBox);
			this->skillsPage->Controls->Add(this->bluffTextBox);
			this->skillsPage->Controls->Add(this->athleticsTextBox);
			this->skillsPage->Controls->Add(this->arcanaTextBox);
			this->skillsPage->Controls->Add(this->acrobaticsTextBox);
			this->skillsPage->Controls->Add(this->acrobaticsMiscTextBox);
			this->skillsPage->Controls->Add(this->label15);
			this->skillsPage->Controls->Add(this->label16);
			this->skillsPage->Controls->Add(this->label17);
			this->skillsPage->Controls->Add(this->label18);
			this->skillsPage->Controls->Add(this->label20);
			this->skillsPage->Controls->Add(this->label22);
			this->skillsPage->Location = System::Drawing::Point(4, 22);
			this->skillsPage->Name = L"skillsPage";
			this->skillsPage->Size = System::Drawing::Size(654, 535);
			this->skillsPage->TabIndex = 2;
			this->skillsPage->Text = L"Skills";
			this->skillsPage->UseVisualStyleBackColor = true;
			this->skillsPage->Click += gcnew System::EventHandler(this, &MyForm::skillsPage_Click);
			// 
			// skillsInfoBox
			// 
			this->skillsInfoBox->Location = System::Drawing::Point(238, 4);
			this->skillsInfoBox->Name = L"skillsInfoBox";
			this->skillsInfoBox->Size = System::Drawing::Size(232, 70);
			this->skillsInfoBox->TabIndex = 80;
			this->skillsInfoBox->Text = L"";
			// 
			// thieveryTrainedCheckBox
			// 
			this->thieveryTrainedCheckBox->AutoSize = true;
			this->thieveryTrainedCheckBox->Location = System::Drawing::Point(409, 407);
			this->thieveryTrainedCheckBox->Name = L"thieveryTrainedCheckBox";
			this->thieveryTrainedCheckBox->Size = System::Drawing::Size(15, 14);
			this->thieveryTrainedCheckBox->TabIndex = 79;
			this->thieveryTrainedCheckBox->UseVisualStyleBackColor = true;
			this->thieveryTrainedCheckBox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox16_CheckedChanged);
			// 
			// streetwiseTrainedCheckBox
			// 
			this->streetwiseTrainedCheckBox->AutoSize = true;
			this->streetwiseTrainedCheckBox->Location = System::Drawing::Point(410, 366);
			this->streetwiseTrainedCheckBox->Name = L"streetwiseTrainedCheckBox";
			this->streetwiseTrainedCheckBox->Size = System::Drawing::Size(15, 14);
			this->streetwiseTrainedCheckBox->TabIndex = 79;
			this->streetwiseTrainedCheckBox->UseVisualStyleBackColor = true;
			this->streetwiseTrainedCheckBox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox16_CheckedChanged);
			// 
			// stealthTrainedCheckBox
			// 
			this->stealthTrainedCheckBox->AutoSize = true;
			this->stealthTrainedCheckBox->Location = System::Drawing::Point(410, 323);
			this->stealthTrainedCheckBox->Name = L"stealthTrainedCheckBox";
			this->stealthTrainedCheckBox->Size = System::Drawing::Size(15, 14);
			this->stealthTrainedCheckBox->TabIndex = 79;
			this->stealthTrainedCheckBox->UseVisualStyleBackColor = true;
			// 
			// religionTrainedCheckBox
			// 
			this->religionTrainedCheckBox->AutoSize = true;
			this->religionTrainedCheckBox->Location = System::Drawing::Point(410, 282);
			this->religionTrainedCheckBox->Name = L"religionTrainedCheckBox";
			this->religionTrainedCheckBox->Size = System::Drawing::Size(15, 14);
			this->religionTrainedCheckBox->TabIndex = 79;
			this->religionTrainedCheckBox->UseVisualStyleBackColor = true;
			// 
			// perceptionTrainedCheckBox
			// 
			this->perceptionTrainedCheckBox->AutoSize = true;
			this->perceptionTrainedCheckBox->Location = System::Drawing::Point(410, 241);
			this->perceptionTrainedCheckBox->Name = L"perceptionTrainedCheckBox";
			this->perceptionTrainedCheckBox->Size = System::Drawing::Size(15, 14);
			this->perceptionTrainedCheckBox->TabIndex = 79;
			this->perceptionTrainedCheckBox->UseVisualStyleBackColor = true;
			// 
			// natureTrainedCheckBox
			// 
			this->natureTrainedCheckBox->AutoSize = true;
			this->natureTrainedCheckBox->Location = System::Drawing::Point(410, 201);
			this->natureTrainedCheckBox->Name = L"natureTrainedCheckBox";
			this->natureTrainedCheckBox->Size = System::Drawing::Size(15, 14);
			this->natureTrainedCheckBox->TabIndex = 79;
			this->natureTrainedCheckBox->UseVisualStyleBackColor = true;
			// 
			// intimidateTrainedCheckBox
			// 
			this->intimidateTrainedCheckBox->AutoSize = true;
			this->intimidateTrainedCheckBox->Location = System::Drawing::Point(410, 161);
			this->intimidateTrainedCheckBox->Name = L"intimidateTrainedCheckBox";
			this->intimidateTrainedCheckBox->Size = System::Drawing::Size(15, 14);
			this->intimidateTrainedCheckBox->TabIndex = 79;
			this->intimidateTrainedCheckBox->UseVisualStyleBackColor = true;
			// 
			// insightTrainedCheckBox
			// 
			this->insightTrainedCheckBox->AutoSize = true;
			this->insightTrainedCheckBox->Location = System::Drawing::Point(410, 120);
			this->insightTrainedCheckBox->Name = L"insightTrainedCheckBox";
			this->insightTrainedCheckBox->Size = System::Drawing::Size(15, 14);
			this->insightTrainedCheckBox->TabIndex = 79;
			this->insightTrainedCheckBox->UseVisualStyleBackColor = true;
			// 
			// historyTrainedCheckBox
			// 
			this->historyTrainedCheckBox->AutoSize = true;
			this->historyTrainedCheckBox->Location = System::Drawing::Point(146, 450);
			this->historyTrainedCheckBox->Name = L"historyTrainedCheckBox";
			this->historyTrainedCheckBox->Size = System::Drawing::Size(15, 14);
			this->historyTrainedCheckBox->TabIndex = 79;
			this->historyTrainedCheckBox->UseVisualStyleBackColor = true;
			// 
			// healTrainedCheckBox
			// 
			this->healTrainedCheckBox->AutoSize = true;
			this->healTrainedCheckBox->Location = System::Drawing::Point(146, 407);
			this->healTrainedCheckBox->Name = L"healTrainedCheckBox";
			this->healTrainedCheckBox->Size = System::Drawing::Size(15, 14);
			this->healTrainedCheckBox->TabIndex = 79;
			this->healTrainedCheckBox->UseVisualStyleBackColor = true;
			// 
			// enduranceTrainedCheckBox
			// 
			this->enduranceTrainedCheckBox->AutoSize = true;
			this->enduranceTrainedCheckBox->Location = System::Drawing::Point(146, 368);
			this->enduranceTrainedCheckBox->Name = L"enduranceTrainedCheckBox";
			this->enduranceTrainedCheckBox->Size = System::Drawing::Size(15, 14);
			this->enduranceTrainedCheckBox->TabIndex = 79;
			this->enduranceTrainedCheckBox->UseVisualStyleBackColor = true;
			// 
			// dungeoneeringTrainedCheckBox
			// 
			this->dungeoneeringTrainedCheckBox->AutoSize = true;
			this->dungeoneeringTrainedCheckBox->Location = System::Drawing::Point(146, 326);
			this->dungeoneeringTrainedCheckBox->Name = L"dungeoneeringTrainedCheckBox";
			this->dungeoneeringTrainedCheckBox->Size = System::Drawing::Size(15, 14);
			this->dungeoneeringTrainedCheckBox->TabIndex = 79;
			this->dungeoneeringTrainedCheckBox->UseVisualStyleBackColor = true;
			// 
			// diplomacyTrainedCheckBox
			// 
			this->diplomacyTrainedCheckBox->AutoSize = true;
			this->diplomacyTrainedCheckBox->Location = System::Drawing::Point(146, 285);
			this->diplomacyTrainedCheckBox->Name = L"diplomacyTrainedCheckBox";
			this->diplomacyTrainedCheckBox->Size = System::Drawing::Size(15, 14);
			this->diplomacyTrainedCheckBox->TabIndex = 79;
			this->diplomacyTrainedCheckBox->UseVisualStyleBackColor = true;
			// 
			// bluffTrainedCheckBox
			// 
			this->bluffTrainedCheckBox->AutoSize = true;
			this->bluffTrainedCheckBox->Location = System::Drawing::Point(146, 242);
			this->bluffTrainedCheckBox->Name = L"bluffTrainedCheckBox";
			this->bluffTrainedCheckBox->Size = System::Drawing::Size(15, 14);
			this->bluffTrainedCheckBox->TabIndex = 79;
			this->bluffTrainedCheckBox->UseVisualStyleBackColor = true;
			// 
			// athleticsTrainedCheckBox
			// 
			this->athleticsTrainedCheckBox->AutoSize = true;
			this->athleticsTrainedCheckBox->Location = System::Drawing::Point(146, 201);
			this->athleticsTrainedCheckBox->Name = L"athleticsTrainedCheckBox";
			this->athleticsTrainedCheckBox->Size = System::Drawing::Size(15, 14);
			this->athleticsTrainedCheckBox->TabIndex = 79;
			this->athleticsTrainedCheckBox->UseVisualStyleBackColor = true;
			// 
			// arcanaTrainedCheckBox
			// 
			this->arcanaTrainedCheckBox->AutoSize = true;
			this->arcanaTrainedCheckBox->Location = System::Drawing::Point(146, 161);
			this->arcanaTrainedCheckBox->Name = L"arcanaTrainedCheckBox";
			this->arcanaTrainedCheckBox->Size = System::Drawing::Size(15, 14);
			this->arcanaTrainedCheckBox->TabIndex = 79;
			this->arcanaTrainedCheckBox->UseVisualStyleBackColor = true;
			// 
			// acrobaticsTrainedCheckBox
			// 
			this->acrobaticsTrainedCheckBox->AutoSize = true;
			this->acrobaticsTrainedCheckBox->Location = System::Drawing::Point(146, 120);
			this->acrobaticsTrainedCheckBox->Name = L"acrobaticsTrainedCheckBox";
			this->acrobaticsTrainedCheckBox->Size = System::Drawing::Size(15, 14);
			this->acrobaticsTrainedCheckBox->TabIndex = 79;
			this->acrobaticsTrainedCheckBox->UseVisualStyleBackColor = true;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(349, 101);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(29, 13);
			this->label34->TabIndex = 78;
			this->label34->Text = L"Misc";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(405, 101);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(43, 13);
			this->label37->TabIndex = 77;
			this->label37->Text = L"Trained";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(141, 100);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(43, 13);
			this->label36->TabIndex = 77;
			this->label36->Text = L"Trained";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(86, 101);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(29, 13);
			this->label21->TabIndex = 77;
			this->label21->Text = L"Misc";
			// 
			// thieveryMiscTextBox
			// 
			this->thieveryMiscTextBox->Location = System::Drawing::Point(351, 404);
			this->thieveryMiscTextBox->Name = L"thieveryMiscTextBox";
			this->thieveryMiscTextBox->Size = System::Drawing::Size(41, 20);
			this->thieveryMiscTextBox->TabIndex = 73;
			// 
			// streetwiseMiscTextBox
			// 
			this->streetwiseMiscTextBox->Location = System::Drawing::Point(351, 363);
			this->streetwiseMiscTextBox->Name = L"streetwiseMiscTextBox";
			this->streetwiseMiscTextBox->Size = System::Drawing::Size(41, 20);
			this->streetwiseMiscTextBox->TabIndex = 72;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(270, 387);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(48, 13);
			this->label32->TabIndex = 69;
			this->label32->Text = L"Thievery";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(271, 346);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(56, 13);
			this->label33->TabIndex = 68;
			this->label33->Text = L"Streetwise";
			// 
			// stealthMiscTextBox
			// 
			this->stealthMiscTextBox->Location = System::Drawing::Point(352, 319);
			this->stealthMiscTextBox->Name = L"stealthMiscTextBox";
			this->stealthMiscTextBox->Size = System::Drawing::Size(41, 20);
			this->stealthMiscTextBox->TabIndex = 65;
			// 
			// religionMiscTextBox
			// 
			this->religionMiscTextBox->Location = System::Drawing::Point(352, 278);
			this->religionMiscTextBox->Name = L"religionMiscTextBox";
			this->religionMiscTextBox->Size = System::Drawing::Size(41, 20);
			this->religionMiscTextBox->TabIndex = 64;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(271, 303);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(40, 13);
			this->label30->TabIndex = 61;
			this->label30->Text = L"Stealth";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(272, 262);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(45, 13);
			this->label31->TabIndex = 60;
			this->label31->Text = L"Religion";
			// 
			// perceptionMiscTextBox
			// 
			this->perceptionMiscTextBox->Location = System::Drawing::Point(352, 239);
			this->perceptionMiscTextBox->Name = L"perceptionMiscTextBox";
			this->perceptionMiscTextBox->Size = System::Drawing::Size(41, 20);
			this->perceptionMiscTextBox->TabIndex = 57;
			// 
			// natureMiscTextBox
			// 
			this->natureMiscTextBox->Location = System::Drawing::Point(352, 198);
			this->natureMiscTextBox->Name = L"natureMiscTextBox";
			this->natureMiscTextBox->Size = System::Drawing::Size(41, 20);
			this->natureMiscTextBox->TabIndex = 56;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(271, 222);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(58, 13);
			this->label28->TabIndex = 53;
			this->label28->Text = L"Perception";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(272, 181);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(39, 13);
			this->label29->TabIndex = 52;
			this->label29->Text = L"Nature";
			// 
			// intimidateMiscTextBox
			// 
			this->intimidateMiscTextBox->Location = System::Drawing::Point(352, 158);
			this->intimidateMiscTextBox->Name = L"intimidateMiscTextBox";
			this->intimidateMiscTextBox->Size = System::Drawing::Size(41, 20);
			this->intimidateMiscTextBox->TabIndex = 46;
			// 
			// insightMiscTextBox
			// 
			this->insightMiscTextBox->Location = System::Drawing::Point(352, 117);
			this->insightMiscTextBox->Name = L"insightMiscTextBox";
			this->insightMiscTextBox->Size = System::Drawing::Size(41, 20);
			this->insightMiscTextBox->TabIndex = 45;
			// 
			// historyMiscTextBox
			// 
			this->historyMiscTextBox->Location = System::Drawing::Point(89, 446);
			this->historyMiscTextBox->Name = L"historyMiscTextBox";
			this->historyMiscTextBox->Size = System::Drawing::Size(41, 20);
			this->historyMiscTextBox->TabIndex = 44;
			// 
			// healMiscTextBox
			// 
			this->healMiscTextBox->Location = System::Drawing::Point(89, 403);
			this->healMiscTextBox->Name = L"healMiscTextBox";
			this->healMiscTextBox->Size = System::Drawing::Size(41, 20);
			this->healMiscTextBox->TabIndex = 43;
			// 
			// enduranceMiscTextBox
			// 
			this->enduranceMiscTextBox->Location = System::Drawing::Point(89, 363);
			this->enduranceMiscTextBox->Name = L"enduranceMiscTextBox";
			this->enduranceMiscTextBox->Size = System::Drawing::Size(41, 20);
			this->enduranceMiscTextBox->TabIndex = 42;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(271, 141);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(52, 13);
			this->label23->TabIndex = 36;
			this->label23->Text = L"Intimidate";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(272, 100);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(38, 13);
			this->label24->TabIndex = 35;
			this->label24->Text = L"Insight";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(6, 430);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(39, 13);
			this->label25->TabIndex = 34;
			this->label25->Text = L"History";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(6, 387);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(29, 13);
			this->label26->TabIndex = 33;
			this->label26->Text = L"Heal";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(7, 347);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(59, 13);
			this->label27->TabIndex = 32;
			this->label27->Text = L"Endurance";
			// 
			// dungeoneeringMiscTextBox
			// 
			this->dungeoneeringMiscTextBox->Location = System::Drawing::Point(89, 323);
			this->dungeoneeringMiscTextBox->Name = L"dungeoneeringMiscTextBox";
			this->dungeoneeringMiscTextBox->Size = System::Drawing::Size(41, 20);
			this->dungeoneeringMiscTextBox->TabIndex = 25;
			// 
			// diplomacyMiscTextBox
			// 
			this->diplomacyMiscTextBox->Location = System::Drawing::Point(89, 282);
			this->diplomacyMiscTextBox->Name = L"diplomacyMiscTextBox";
			this->diplomacyMiscTextBox->Size = System::Drawing::Size(41, 20);
			this->diplomacyMiscTextBox->TabIndex = 24;
			// 
			// bluffMiscTextBox
			// 
			this->bluffMiscTextBox->Location = System::Drawing::Point(89, 240);
			this->bluffMiscTextBox->Name = L"bluffMiscTextBox";
			this->bluffMiscTextBox->Size = System::Drawing::Size(41, 20);
			this->bluffMiscTextBox->TabIndex = 23;
			// 
			// athleticsMiscTextBox
			// 
			this->athleticsMiscTextBox->Location = System::Drawing::Point(89, 197);
			this->athleticsMiscTextBox->Name = L"athleticsMiscTextBox";
			this->athleticsMiscTextBox->Size = System::Drawing::Size(41, 20);
			this->athleticsMiscTextBox->TabIndex = 22;
			// 
			// arcanaMiscTextBox
			// 
			this->arcanaMiscTextBox->Location = System::Drawing::Point(89, 157);
			this->arcanaMiscTextBox->Name = L"arcanaMiscTextBox";
			this->arcanaMiscTextBox->Size = System::Drawing::Size(41, 20);
			this->arcanaMiscTextBox->TabIndex = 21;
			// 
			// thieveryTextBox
			// 
			this->thieveryTextBox->Location = System::Drawing::Point(274, 404);
			this->thieveryTextBox->Name = L"thieveryTextBox";
			this->thieveryTextBox->ReadOnly = true;
			this->thieveryTextBox->Size = System::Drawing::Size(41, 20);
			this->thieveryTextBox->TabIndex = 20;
			// 
			// streetwiseTextBox
			// 
			this->streetwiseTextBox->Location = System::Drawing::Point(273, 363);
			this->streetwiseTextBox->Name = L"streetwiseTextBox";
			this->streetwiseTextBox->ReadOnly = true;
			this->streetwiseTextBox->Size = System::Drawing::Size(41, 20);
			this->streetwiseTextBox->TabIndex = 20;
			// 
			// stealthTextBox
			// 
			this->stealthTextBox->Location = System::Drawing::Point(273, 319);
			this->stealthTextBox->Name = L"stealthTextBox";
			this->stealthTextBox->ReadOnly = true;
			this->stealthTextBox->Size = System::Drawing::Size(41, 20);
			this->stealthTextBox->TabIndex = 20;
			// 
			// religionTextBox
			// 
			this->religionTextBox->Location = System::Drawing::Point(273, 278);
			this->religionTextBox->Name = L"religionTextBox";
			this->religionTextBox->ReadOnly = true;
			this->religionTextBox->Size = System::Drawing::Size(41, 20);
			this->religionTextBox->TabIndex = 20;
			// 
			// perceptionTextBox
			// 
			this->perceptionTextBox->Location = System::Drawing::Point(274, 239);
			this->perceptionTextBox->Name = L"perceptionTextBox";
			this->perceptionTextBox->ReadOnly = true;
			this->perceptionTextBox->Size = System::Drawing::Size(41, 20);
			this->perceptionTextBox->TabIndex = 20;
			// 
			// natureTextBox
			// 
			this->natureTextBox->Location = System::Drawing::Point(274, 197);
			this->natureTextBox->Name = L"natureTextBox";
			this->natureTextBox->ReadOnly = true;
			this->natureTextBox->Size = System::Drawing::Size(41, 20);
			this->natureTextBox->TabIndex = 20;
			// 
			// intimidateTextBox
			// 
			this->intimidateTextBox->Location = System::Drawing::Point(273, 157);
			this->intimidateTextBox->Name = L"intimidateTextBox";
			this->intimidateTextBox->ReadOnly = true;
			this->intimidateTextBox->Size = System::Drawing::Size(41, 20);
			this->intimidateTextBox->TabIndex = 20;
			// 
			// insightTextBox
			// 
			this->insightTextBox->Location = System::Drawing::Point(273, 116);
			this->insightTextBox->Name = L"insightTextBox";
			this->insightTextBox->ReadOnly = true;
			this->insightTextBox->Size = System::Drawing::Size(41, 20);
			this->insightTextBox->TabIndex = 20;
			// 
			// historyTextBox
			// 
			this->historyTextBox->Location = System::Drawing::Point(9, 446);
			this->historyTextBox->Name = L"historyTextBox";
			this->historyTextBox->ReadOnly = true;
			this->historyTextBox->Size = System::Drawing::Size(41, 20);
			this->historyTextBox->TabIndex = 20;
			// 
			// healTextBox
			// 
			this->healTextBox->Location = System::Drawing::Point(10, 403);
			this->healTextBox->Name = L"healTextBox";
			this->healTextBox->ReadOnly = true;
			this->healTextBox->Size = System::Drawing::Size(41, 20);
			this->healTextBox->TabIndex = 20;
			// 
			// enduranceTextBox
			// 
			this->enduranceTextBox->Location = System::Drawing::Point(10, 364);
			this->enduranceTextBox->Name = L"enduranceTextBox";
			this->enduranceTextBox->ReadOnly = true;
			this->enduranceTextBox->Size = System::Drawing::Size(41, 20);
			this->enduranceTextBox->TabIndex = 20;
			// 
			// dungeoneeringTextBox
			// 
			this->dungeoneeringTextBox->Location = System::Drawing::Point(9, 324);
			this->dungeoneeringTextBox->Name = L"dungeoneeringTextBox";
			this->dungeoneeringTextBox->ReadOnly = true;
			this->dungeoneeringTextBox->Size = System::Drawing::Size(41, 20);
			this->dungeoneeringTextBox->TabIndex = 20;
			// 
			// diplomacyTextBox
			// 
			this->diplomacyTextBox->Location = System::Drawing::Point(9, 282);
			this->diplomacyTextBox->Name = L"diplomacyTextBox";
			this->diplomacyTextBox->ReadOnly = true;
			this->diplomacyTextBox->Size = System::Drawing::Size(41, 20);
			this->diplomacyTextBox->TabIndex = 20;
			// 
			// bluffTextBox
			// 
			this->bluffTextBox->Location = System::Drawing::Point(9, 240);
			this->bluffTextBox->Name = L"bluffTextBox";
			this->bluffTextBox->ReadOnly = true;
			this->bluffTextBox->Size = System::Drawing::Size(41, 20);
			this->bluffTextBox->TabIndex = 20;
			// 
			// athleticsTextBox
			// 
			this->athleticsTextBox->Location = System::Drawing::Point(10, 198);
			this->athleticsTextBox->Name = L"athleticsTextBox";
			this->athleticsTextBox->ReadOnly = true;
			this->athleticsTextBox->Size = System::Drawing::Size(41, 20);
			this->athleticsTextBox->TabIndex = 20;
			// 
			// arcanaTextBox
			// 
			this->arcanaTextBox->Location = System::Drawing::Point(10, 157);
			this->arcanaTextBox->Name = L"arcanaTextBox";
			this->arcanaTextBox->ReadOnly = true;
			this->arcanaTextBox->Size = System::Drawing::Size(41, 20);
			this->arcanaTextBox->TabIndex = 20;
			// 
			// acrobaticsTextBox
			// 
			this->acrobaticsTextBox->Location = System::Drawing::Point(10, 117);
			this->acrobaticsTextBox->Name = L"acrobaticsTextBox";
			this->acrobaticsTextBox->ReadOnly = true;
			this->acrobaticsTextBox->Size = System::Drawing::Size(41, 20);
			this->acrobaticsTextBox->TabIndex = 20;
			// 
			// acrobaticsMiscTextBox
			// 
			this->acrobaticsMiscTextBox->Location = System::Drawing::Point(89, 117);
			this->acrobaticsMiscTextBox->Name = L"acrobaticsMiscTextBox";
			this->acrobaticsMiscTextBox->Size = System::Drawing::Size(41, 20);
			this->acrobaticsMiscTextBox->TabIndex = 20;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(6, 307);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(80, 13);
			this->label15->TabIndex = 12;
			this->label15->Text = L"Dungeoneering";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(7, 266);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(56, 13);
			this->label16->TabIndex = 11;
			this->label16->Text = L"Diplomacy";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(6, 224);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(28, 13);
			this->label17->TabIndex = 10;
			this->label17->Text = L"Bluff";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(6, 181);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(47, 13);
			this->label18->TabIndex = 9;
			this->label18->Text = L"Athletics";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(7, 141);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(41, 13);
			this->label20->TabIndex = 7;
			this->label20->Text = L"Arcana";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(7, 101);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(57, 13);
			this->label22->TabIndex = 6;
			this->label22->Text = L"Acrobatics";
			// 
			// featsPage
			// 
			this->featsPage->Controls->Add(this->richTextBox1);
			this->featsPage->Controls->Add(this->featsLabel);
			this->featsPage->Controls->Add(this->featsDropDown);
			this->featsPage->Location = System::Drawing::Point(4, 22);
			this->featsPage->Name = L"featsPage";
			this->featsPage->Padding = System::Windows::Forms::Padding(3);
			this->featsPage->Size = System::Drawing::Size(654, 535);
			this->featsPage->TabIndex = 3;
			this->featsPage->Text = L"Feats";
			this->featsPage->UseVisualStyleBackColor = true;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(8, 50);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(233, 96);
			this->richTextBox1->TabIndex = 6;
			this->richTextBox1->Text = L"";
			// 
			// featsLabel
			// 
			this->featsLabel->AutoSize = true;
			this->featsLabel->Location = System::Drawing::Point(8, 4);
			this->featsLabel->Name = L"featsLabel";
			this->featsLabel->Size = System::Drawing::Size(33, 13);
			this->featsLabel->TabIndex = 5;
			this->featsLabel->Text = L"Feats";
			// 
			// featsDropDown
			// 
			this->featsDropDown->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->featsDropDown->FormattingEnabled = true;
			this->featsDropDown->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Dragonborn", L"Dwarf", L"Eladrin", L"Elf",
					L"Half-Elf", L"Halfing", L"Human", L"Tiefling"
			});
			this->featsDropDown->Location = System::Drawing::Point(7, 22);
			this->featsDropDown->Name = L"featsDropDown";
			this->featsDropDown->Size = System::Drawing::Size(121, 21);
			this->featsDropDown->TabIndex = 4;
			// 
			// powersTab
			// 
			this->powersTab->Controls->Add(this->label35);
			this->powersTab->Controls->Add(this->label4);
			this->powersTab->Location = System::Drawing::Point(4, 22);
			this->powersTab->Name = L"powersTab";
			this->powersTab->Padding = System::Windows::Forms::Padding(3);
			this->powersTab->Size = System::Drawing::Size(654, 535);
			this->powersTab->TabIndex = 4;
			this->powersTab->Text = L"Powers";
			this->powersTab->UseVisualStyleBackColor = true;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(93, 388);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(202, 13);
			this->label35->TabIndex = 1;
			this->label35->Text = L"(sorry Steve. powers are too complicated)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(126, 210);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(189, 108);
			this->label4->TabIndex = 0;
			this->label4->Text = L"NO";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripMenuItem1 });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(666, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->openToolStripMenuItem,
					this->saveToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(37, 20);
			this->toolStripMenuItem1->Text = L"File";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->openToolStripMenuItem->Text = L"Open";
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->saveToolStripMenuItem->Text = L"Save";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(11, 413);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(60, 13);
			this->label40->TabIndex = 0;
			this->label40->Text = L"Languages";
			this->label40->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// languagesTextBox
			// 
			this->languagesTextBox->Location = System::Drawing::Point(14, 429);
			this->languagesTextBox->Name = L"languagesTextBox";
			this->languagesTextBox->Size = System::Drawing::Size(123, 20);
			this->languagesTextBox->TabIndex = 1;
			this->languagesTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(666, 586);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->generalPage->ResumeLayout(false);
			this->generalPage->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->EndInit();
			this->statsPage->ResumeLayout(false);
			this->statsPage->PerformLayout();
			this->skillsPage->ResumeLayout(false);
			this->skillsPage->PerformLayout();
			this->featsPage->ResumeLayout(false);
			this->featsPage->PerformLayout();
			this->powersTab->ResumeLayout(false);
			this->powersTab->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void classDropDown_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		//line below might be a bit confusing... it grabs the managed string from classDropDown, turns it into a std string, throws it at the classs function
		//and then turns the returned std string into a managed string and puts it in the classDescriptionBox
		classDescriptionTextBox->Text = context.marshal_as<System::String ^>(classs(context.marshal_as<std::string>(classDropDown->Text)));
	}
	private: System::Void raceDropDown_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		raceDescriptionBox->Text = context.marshal_as<System::String ^>(racess(context.marshal_as<std::string>(raceDropDown->Text)));
	}
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void sizeBox_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void wisdomDropDown_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label19_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void checkBox16_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
	private: System::Void strengthDropDown_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void statsPage_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void skillsPage_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void strBonusBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void strModBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
			 
	private: System::Void calculateButton_Click(System::Object^  sender, System::EventArgs^  e) {
		int leftbox; int rightbox;
		if (strDropDown->Text != "" && strBonusBox->Text != "") {
			rightbox = std::stoi(context.marshal_as<std::string>(strBonusBox->Text));
			leftbox = std::stoi(context.marshal_as<std::string>(strDropDown->Text));
			strFinalBox->Text = context.marshal_as<System::String ^>(std::to_string(leftbox+rightbox));
			strModBox->Text = context.marshal_as<System::String ^>(std::to_string(calcMod(leftbox + rightbox)));
		}
		if (constDropDown->Text != "" && constBonusBox->Text != "") {
			rightbox = std::stoi(context.marshal_as<std::string>(constBonusBox->Text));
			leftbox = std::stoi(context.marshal_as<std::string>(constDropDown->Text));
			constFinalBox->Text = context.marshal_as<System::String ^>(std::to_string(leftbox + rightbox));
			constModBox->Text = context.marshal_as<System::String ^>(std::to_string(calcMod(leftbox + rightbox)));
		}
		if (dexDropDown->Text != "" && dexBonusBox->Text != "") {
			rightbox = std::stoi(context.marshal_as<std::string>(dexBonusBox->Text));
			leftbox = std::stoi(context.marshal_as<std::string>(dexDropDown->Text));
			dexFinalBox->Text = context.marshal_as<System::String ^>(std::to_string(leftbox + rightbox));
			dexModBox->Text = context.marshal_as<System::String ^>(std::to_string(calcMod(leftbox + rightbox)));
		}
		if (intelDropDown->Text != "" && intelBonusBox->Text != "") {
			rightbox = std::stoi(context.marshal_as<std::string>(intelBonusBox->Text));
			leftbox = std::stoi(context.marshal_as<std::string>(intelDropDown->Text));
			intelFinalBox->Text = context.marshal_as<System::String ^>(std::to_string(leftbox + rightbox));
			intelModBox->Text = context.marshal_as<System::String ^>(std::to_string(calcMod(leftbox + rightbox)));
		}
		if (wisDropDown->Text != "" && wisBonusBox->Text != "") {
			rightbox = std::stoi(context.marshal_as<std::string>(wisBonusBox->Text));
			leftbox = std::stoi(context.marshal_as<std::string>(wisDropDown->Text));
			wisFinalBox->Text = context.marshal_as<System::String ^>(std::to_string(leftbox + rightbox));
			wisModBox->Text = context.marshal_as<System::String ^>(std::to_string(calcMod(leftbox + rightbox)));
		}
		if (charDropDown->Text != "" && charBonusBox->Text != "") {
			rightbox = std::stoi(context.marshal_as<std::string>(charBonusBox->Text));
			leftbox = std::stoi(context.marshal_as<std::string>(charDropDown->Text));
			charFinalBox->Text = context.marshal_as<System::String ^>(std::to_string(leftbox + rightbox));
			charModBox->Text = context.marshal_as<System::String ^>(std::to_string(calcMod(leftbox + rightbox)));
		}
		//TODO: When stats are calculated, populate the skills and HP sections.
	}
	};
}
