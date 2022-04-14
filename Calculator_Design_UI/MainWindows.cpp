#include "MainWindows.h"



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



	//Display Settings
	Sizer = new wxBoxSizer(wxVERTICAL);
	Sizer->Add(numDisp, 0, wxEXPAND);
	numDisp->SetBackgroundColour(wxColor("white"));


	
	//frame sizer
	this->SetMaxSize(wxSize(windows_with, windows_hight));
	this->SetMinSize(wxSize(windows_with, windows_hight));
	SetSizer(Sizer);
}

