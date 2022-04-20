#include "MainWindows.h"
#include <string>
#include "ButtonFactory.h"



//wxBEGIN_EVENT_TABLE(MainWindows, wxFrame)
//
//
//
//
//
//wxEND_EVENT_TABLE()
MainWindows::MainWindows(): wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(50, 50), wxSize(windows_with, windows_hight)) {
	//Display
	
	numDisp = new wxTextCtrl(this, wxID_ANY,"\n\n\n 0", wxPoint(50, 1), wxSize(windows_with, 200), wxTE_MULTILINE|wxTE_RICH2|wxTE_READONLY|wxTE_CENTER| wxTE_NO_VSCROLL);
	wxFont font(24, wxFONTFAMILY_TELETYPE, wxFONTSTYLE_MAX, wxFONTWEIGHT_EXTRABOLD, false);
	wxFont fontOp(26, wxFONTFAMILY_SCRIPT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_EXTRAHEAVY, false);
	wxFont fontTypeOfNumbers(20, wxFONTFAMILY_DECORATIVE, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);

	///buttons
	//Operations
	div= ButtonFactory().CreateAddButton(this, 1, " / ",button_sqare_size,0,200,"Red","white",fontOp);
	div->Bind(wxEVT_BUTTON, &MainWindows::Clickon_Div,this);

	subtract = ButtonFactory().CreateAddButton(this, 2, " - ", button_sqare_size,0,300, "Red", "white",fontOp);
	subtract->Bind(wxEVT_BUTTON, &MainWindows::Clickon_subtract, this);

	addition = ButtonFactory().CreateAddButton(this, 3, " + ", button_sqare_size, 0, 400, "Red", "white", fontOp);
	addition->Bind(wxEVT_BUTTON, &MainWindows::Clickon_Add, this);

	mult = ButtonFactory().CreateAddButton(this, 4, " * ", button_sqare_size, 0, 500, "Red", "white", fontOp);
	mult->Bind(wxEVT_BUTTON, &MainWindows::Clickon_Mult, this);


	//Numbers
	zero = ButtonFactory().CreateAddButton(this, 1000, " 0 ", button_sqare_size, 200, 500, "Blue", "white", font);
	zero->Bind(wxEVT_BUTTON, &MainWindows::Clickon_Zero, this);

	one = ButtonFactory().CreateAddButton(this, 1001, " 1 ", button_sqare_size, 100, 200, "Blue", "white", font);
	one->Bind(wxEVT_BUTTON, &MainWindows::Clickon_One, this);


	two = ButtonFactory().CreateAddButton(this, 1002, " 2 ", button_sqare_size, 200, 200, "Blue", "white", font);
	two->Bind(wxEVT_BUTTON, &MainWindows::Clickon_Two, this);
	
	three = ButtonFactory().CreateAddButton(this, 1003, " 3 ", button_sqare_size, 300, 200, "Blue", "white", font);
	three->Bind(wxEVT_BUTTON, &MainWindows::Clickon_Three, this);


	four = ButtonFactory().CreateAddButton(this, 1004, " 4 ", button_sqare_size, 100, 300, "Blue", "white", font);
	four->Bind(wxEVT_BUTTON, &MainWindows::Clickon_Four, this);

	five = ButtonFactory().CreateAddButton(this, 1005, " 5 ", button_sqare_size, 200, 300, "Blue", "white", font);
	five->Bind(wxEVT_BUTTON, &MainWindows::Clickon_Five, this);

	six = ButtonFactory().CreateAddButton(this, 1006, " 6 ", button_sqare_size, 300, 300, "Blue", "white", font);
	six->Bind(wxEVT_BUTTON, &MainWindows::Clickon_Six, this);

	seven = ButtonFactory().CreateAddButton(this, 1007, " 7 ", button_sqare_size, 100, 400, "Blue", "white", font);
	seven->Bind(wxEVT_BUTTON, &MainWindows::Clickon_Seven, this);

	eight = ButtonFactory().CreateAddButton(this, 1008, " 8 ", button_sqare_size, 200, 400, "Blue", "white", font);
	eight->Bind(wxEVT_BUTTON, &MainWindows::Clickon_Eight, this);

	nine = ButtonFactory().CreateAddButton(this, 1009, " 9 ", button_sqare_size, 300, 400, "Blue", "white", font);
	nine->Bind(wxEVT_BUTTON, &MainWindows::Clickon_Nine, this);

	//Special OP
	
	mod = ButtonFactory().CreateAddButton(this, 5, " Mod ", button_sqare_size, 100, 500, "magenta", "white", font);
	mod->Bind(wxEVT_BUTTON, &MainWindows::Clickon_Mod, this);

	equal = ButtonFactory().CreateAddButton(this, 6, " = ", button_sqare_size, 300, 500, "magenta", "white", font);
	equal->Bind(wxEVT_BUTTON, &MainWindows::Clickon_Equal, this);

	Point = ButtonFactory().CreateAddButton(this, 7, " . ", button_sqare_size, 300, 600, "magenta", "white", font);
	Point->Bind(wxEVT_BUTTON, &MainWindows::Clickon_Point, this);

	clear = ButtonFactory().CreateAddButton(this, 8, " CE ", windows_with,50, 0, 700, "cyan", "white", font);
	clear->Bind(wxEVT_BUTTON, &MainWindows::Clickon_Clear, this);

	Negate = ButtonFactory().CreateAddButton(this, 9, " Negate(-) ", windows_with, 50, 0, 750, "cyan", "white", font);
	Negate->Bind(wxEVT_BUTTON, &MainWindows::Clickon_Negate, this);


	//modes
	Dec = ButtonFactory().CreateAddButton(this, 100, " DEC ", button_sqare_size, 0, 600, "Yellow", "Black", fontTypeOfNumbers);

   	 Bin = ButtonFactory().CreateAddButton(this, 101, " BIN ", button_sqare_size, 100, 600, "Yellow", "Black", fontTypeOfNumbers);
	 Bin->Bind(wxEVT_BUTTON, &MainWindows::Clickon_bin, this);

	 Hex= ButtonFactory().CreateAddButton(this, 102, " HEX ", button_sqare_size, 200, 600, "Yellow", "Black", fontTypeOfNumbers);
	 Hex->Bind(wxEVT_BUTTON, &MainWindows::Clickon_hex, this);
	
	


	//hex
	A = ButtonFactory().CreateAddButton(this, 10, " A ", button_sqare_size-50, 0, 800, "Grey ", "Black", fontTypeOfNumbers); A->Bind(wxEVT_BUTTON, &MainWindows::Clickon_A, this);
	B = ButtonFactory().CreateAddButton(this, 11, " B ", button_sqare_size - 50, 50, 800, "Grey ", "Black", fontTypeOfNumbers); B->Bind(wxEVT_BUTTON, &MainWindows::Clickon_B, this);
	C = ButtonFactory().CreateAddButton(this, 12, " C ", button_sqare_size - 50, 100, 800, "Grey ", "Black", fontTypeOfNumbers); C->Bind(wxEVT_BUTTON, &MainWindows::Clickon_C, this);
	D = ButtonFactory().CreateAddButton(this, 13, " D ", button_sqare_size - 50, 150, 800, "Grey ", "Black", fontTypeOfNumbers); D->Bind(wxEVT_BUTTON, &MainWindows::Clickon_D, this);
	E = ButtonFactory().CreateAddButton(this, 14, " E ", button_sqare_size - 50, 200, 800, "Grey ", "Black", fontTypeOfNumbers); E->Bind(wxEVT_BUTTON, &MainWindows::Clickon_E, this);
	F = ButtonFactory().CreateAddButton(this, 15, " F ", button_sqare_size - 50, 250, 800, "Grey ", "Black", fontTypeOfNumbers); F->Bind(wxEVT_BUTTON, &MainWindows::Clickon_F, this);


	



	//Display Settings
	Sizer = new wxBoxSizer(wxVERTICAL);
	Sizer->Add(numDisp, 0, wxEXPAND);
	numDisp->SetBackgroundColour(wxColor("white"));

   

	
	//frame sizer
	this->SetMaxSize(wxSize(windows_with, windows_hight));
	this->SetMinSize(wxSize(windows_with, windows_hight));
	SetSizer(Sizer);


	//fonts
	wxFont font_NumbD(18, wxFONTFAMILY_SWISS,wxFONTSTYLE_SLANT, wxFONTWEIGHT_EXTRABOLD, false);
	font_NumbD.SetPixelSize(wxSize(25,25));


	
	numDisp->SetFont(fontTypeOfNumbers);
	numDisp->Clear();
	numDisp->AppendText("\n\n\n");


}











