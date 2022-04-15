#include "MainWindows.h"

#define IsOnHex 1
#define IsOnBin 0
#define IsOnDec 0





MainWindows::MainWindows(): wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(50, 50), wxSize(windows_with, windows_hight)) {
	//Display
	numDisp = new wxListBox(this, wxID_ANY, wxPoint(1, 1), wxSize(windows_with, 200));


	///buttons
	div = new wxButton(this, wxID_ANY, " / ", wxPoint(0, 200), wxSize(button_sqare_size,button_sqare_size));
	one = new wxButton(this, wxID_ANY, " 1 ", wxPoint(100, 200), wxSize(button_sqare_size, button_sqare_size));
	two = new wxButton(this, wxID_ANY, " 2 ", wxPoint(200, 200), wxSize(button_sqare_size, button_sqare_size));
	three = new wxButton(this, wxID_ANY, " 3 ", wxPoint(300, 200), wxSize(button_sqare_size, button_sqare_size));
	subtract = new wxButton(this, wxID_ANY, " - ", wxPoint(0, 300), wxSize(button_sqare_size, button_sqare_size));
	four = new wxButton(this, wxID_ANY, " 4 ", wxPoint(100, 300), wxSize(button_sqare_size, button_sqare_size));
	five = new wxButton(this, wxID_ANY, " 5 ", wxPoint(200, 300), wxSize(button_sqare_size, button_sqare_size));
	six = new wxButton(this, wxID_ANY, " 6 ", wxPoint(300, 300), wxSize(button_sqare_size, button_sqare_size));
	addition = new wxButton(this, wxID_ANY, " + ", wxPoint(0, 400), wxSize(button_sqare_size, button_sqare_size));
	seven = new wxButton(this, wxID_ANY, " 7 ", wxPoint(100, 400), wxSize(button_sqare_size, button_sqare_size));
	eight = new wxButton(this, wxID_ANY, " 8 ", wxPoint(200, 400), wxSize(button_sqare_size, button_sqare_size));
	nine = new wxButton(this, wxID_ANY, " 9 ", wxPoint(300, 400), wxSize(button_sqare_size, button_sqare_size));
	mult = new wxButton(this, wxID_ANY, " * ", wxPoint(0, 500), wxSize(button_sqare_size, button_sqare_size));
	mod = new wxButton(this, wxID_ANY, " Mod ", wxPoint(100, 500), wxSize(button_sqare_size, button_sqare_size));
	zero = new wxButton(this, wxID_ANY, " 0 ", wxPoint(200, 500), wxSize(button_sqare_size, button_sqare_size));
	equal = new wxButton(this, wxID_ANY, " = ", wxPoint(300, 500), wxSize(button_sqare_size, button_sqare_size));
     Dec = new wxButton(this, wxID_ANY, " DEC ", wxPoint(0, 600), wxSize(button_sqare_size, button_sqare_size));
	Bin = new wxButton(this, wxID_ANY, " BIN ", wxPoint(100, 600), wxSize(button_sqare_size, button_sqare_size));
	 Hex = new wxButton(this, wxID_ANY, " HEX ", wxPoint(200, 600), wxSize(button_sqare_size, button_sqare_size));
	 Point = new wxButton(this, wxID_ANY, " . ", wxPoint(300, 600), wxSize(button_sqare_size, button_sqare_size));
	clear = new wxButton(this, wxID_ANY, " CE ", wxPoint(0, 700), wxSize(windows_with, 50));
	Negate= new wxButton(this, wxID_ANY, " (Negative) ", wxPoint(0, 750), wxSize(windows_with, 50));
	

#if IsOnHex 
	int windows_hight = 890;
	int windows_with = 415;
	A = new wxButton(this, wxID_ANY, " A ", wxPoint(0, 800), wxSize(button_sqare_size - 50, button_sqare_size - 50));
	B =  new wxButton(this, wxID_ANY, " B ", wxPoint(50, 800), wxSize(button_sqare_size - 50, button_sqare_size - 50));
	C = new wxButton(this, wxID_ANY, " C ", wxPoint(100, 800), wxSize(button_sqare_size - 50, button_sqare_size - 50));
	D = new wxButton(this, wxID_ANY, " D ", wxPoint(150, 800), wxSize(button_sqare_size - 50, button_sqare_size - 50));
	E = new wxButton(this, wxID_ANY, " E ", wxPoint(200, 800), wxSize(button_sqare_size - 50, button_sqare_size - 50));
	F = new wxButton(this, wxID_ANY, " F ", wxPoint(250, 800), wxSize(button_sqare_size - 50, button_sqare_size - 50));


//colors
	
	A->SetBackgroundColour("yellow");
	
	B->SetBackgroundColour("yellow");
	
	C->SetBackgroundColour("yellow");
	
	D->SetBackgroundColour("yellow");

	E->SetBackgroundColour("yellow");
	
	F ->SetBackgroundColour("yellow");
#else

#endif // 0



	//Modify Buttons


 Hex->SetBackgroundColour("yellow");


	equal->SetForegroundColour("White");
	equal->SetBackgroundColour("Blue");
	
	div->SetForegroundColour("White");
	div->SetBackgroundColour("Red");

	mult->SetForegroundColour("White");
	mult->SetBackgroundColour("Red");

	mod->SetForegroundColour("White");
	mod->SetBackgroundColour("Red");
	
	addition->SetForegroundColour("White");
	addition->SetBackgroundColour("Red");

	subtract->SetForegroundColour("White");
	subtract->SetBackgroundColour("Red");

	Bin->SetBackgroundColour("blue");
	zero->SetBackgroundColour("blue");
	one->SetBackgroundColour("blue");
	Point->SetBackgroundColour("Blue");
	two->SetBackgroundColour("blue");
	three->SetBackgroundColour("blue");
	four->SetBackgroundColour("blue");
	five->SetBackgroundColour("Blue");
	six->SetBackgroundColour("blue");
	seven->SetBackgroundColour("blue");
	eight->SetBackgroundColour("blue");
	nine->SetBackgroundColour("Blue");
	Dec->SetBackgroundColour("Blue");

	Negate->SetBackgroundColour("Red");
	Negate->SetForegroundColour("White");


	Bin->SetForegroundColour("White");
	zero->SetForegroundColour("White");
	one->SetForegroundColour("White");
	Point->SetForegroundColour("White");
	two->SetForegroundColour("White");
	three->SetForegroundColour("White");
	four->SetForegroundColour("White");
	five->SetForegroundColour("White");
	six->SetForegroundColour("White");
	seven->SetForegroundColour("White");
	eight->SetForegroundColour("White");
	nine->SetForegroundColour("White");
	Dec->SetForegroundColour("White");
	//Display Settings
	Sizer = new wxBoxSizer(wxVERTICAL);
	Sizer->Add(numDisp, 0, wxEXPAND);
	numDisp->SetBackgroundColour(wxColor("white"));

   
	
	//frame sizer
	this->SetMaxSize(wxSize(windows_with, windows_hight));
	this->SetMinSize(wxSize(windows_with, windows_hight));
	SetSizer(Sizer);
}

