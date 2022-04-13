#include "MainWindows.h"



MainWindows::MainWindows(): wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(50, 50), wxSize(windows_with, windows_hight)) {

	numDisp = new wxListBox(this, wxID_ANY, wxPoint(1, 1), wxSize(350, 150));
	one = new wxButton(this, wxID_ANY, " 1 ", wxPoint(300, 200), wxSize(100, 100));
	Sizer = new wxBoxSizer(wxVERTICAL);

	Sizer->Add(numDisp,0,wxEXPAND);
	numDisp->SetBackgroundColour(wxColor("grey"));
	this->SetMaxSize(wxSize(windows_with, windows_hight));
	this->SetMinSize(wxSize(windows_with, windows_hight));
	SetSizer(Sizer);
}

