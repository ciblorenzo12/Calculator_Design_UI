#include "MainWindows.h"
#include <string>




wxBEGIN_EVENT_TABLE(MainWindows, wxFrame)
EVT_BUTTON(1000, Clickon_Zero)
EVT_BUTTON(1001, Clickon_One)
EVT_BUTTON(1002, Clickon_Two)
EVT_BUTTON(1003, Clickon_Three)
EVT_BUTTON(1004, Clickon_Four)
EVT_BUTTON(1005, Clickon_Five)
EVT_BUTTON(1006, Clickon_Six)
EVT_BUTTON(1007, Clickon_Seven)
EVT_BUTTON(1008, Clickon_Eight)
EVT_BUTTON(1009, Clickon_Nine)

//Hex
EVT_BUTTON(10, Clickon_A)
EVT_BUTTON(11, Clickon_B)
EVT_BUTTON(12, Clickon_C)
EVT_BUTTON(13, Clickon_D)
EVT_BUTTON(14, Clickon_E)
EVT_BUTTON(15, Clickon_F)

//Operations
EVT_BUTTON(1, Clickon_div)
EVT_BUTTON(2, Clickon_subtract)
EVT_BUTTON(3, Clickon_Add)
EVT_BUTTON(4, Clickon_Mult)

//Special OP
EVT_BUTTON(111, Clickon_Mod)
EVT_BUTTON(6, Clickon_Clear)
EVT_BUTTON(7, Clickon_Equal)
EVT_BUTTON(8, Clickon_Point)
EVT_BUTTON(9, Clickon_Negate)

//modes 
EVT_BUTTON(100, Clickon_bin)
EVT_BUTTON(101, Clickon_hex)
EVT_BUTTON(102, Clickon_dec)


wxEND_EVENT_TABLE()
MainWindows::MainWindows(): wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(50, 50), wxSize(windows_with, windows_hight)) {
	//Display
	numDisp = new wxTextCtrl(this, wxID_ANY,"\n\n\n 0", wxPoint(50, 1), wxSize(windows_with, 200), wxTE_MULTILINE|wxTE_RICH2|wxTE_READONLY|wxTE_CENTER| wxTE_NO_VSCROLL);


	///buttons
	div = new wxButton(this, 1, " / ", wxPoint(0, 200), wxSize(button_sqare_size,button_sqare_size));
	one = new wxButton(this, 1001, " 1 ", wxPoint(100, 200), wxSize(button_sqare_size, button_sqare_size));
	two = new wxButton(this, 1002, " 2 ", wxPoint(200, 200), wxSize(button_sqare_size, button_sqare_size));
	three = new wxButton(this, 1003, " 3 ", wxPoint(300, 200), wxSize(button_sqare_size, button_sqare_size));
	subtract = new wxButton(this, 2, " - ", wxPoint(0, 300), wxSize(button_sqare_size, button_sqare_size));
	four = new wxButton(this, 1004, " 4 ", wxPoint(100, 300), wxSize(button_sqare_size, button_sqare_size));
	five = new wxButton(this, 1005, " 5 ", wxPoint(200, 300), wxSize(button_sqare_size, button_sqare_size));
	six = new wxButton(this, 1006, " 6 ", wxPoint(300, 300), wxSize(button_sqare_size, button_sqare_size));
	addition = new wxButton(this, 3, " + ", wxPoint(0, 400), wxSize(button_sqare_size, button_sqare_size));
	seven = new wxButton(this, 1007, " 7 ", wxPoint(100, 400), wxSize(button_sqare_size, button_sqare_size));
	eight = new wxButton(this, 1008, " 8 ", wxPoint(200, 400), wxSize(button_sqare_size, button_sqare_size));
	nine = new wxButton(this, 1009, " 9 ", wxPoint(300, 400), wxSize(button_sqare_size, button_sqare_size));
	mult = new wxButton(this, 4, " * ", wxPoint(0, 500), wxSize(button_sqare_size, button_sqare_size));
	mod = new wxButton(this, 111, " Mod ", wxPoint(100, 500), wxSize(button_sqare_size, button_sqare_size));
	zero = new wxButton(this, 1000, " 0 ", wxPoint(200, 500), wxSize(button_sqare_size, button_sqare_size));
	equal = new wxButton(this, 7, " = ", wxPoint(300, 500), wxSize(button_sqare_size, button_sqare_size));
     Dec = new wxButton(this, 102, " DEC ", wxPoint(0, 600), wxSize(button_sqare_size, button_sqare_size));
	Bin = new wxButton(this, 100, " BIN ", wxPoint(100, 600), wxSize(button_sqare_size, button_sqare_size));
	 Hex = new wxButton(this, 101, " HEX ", wxPoint(200, 600), wxSize(button_sqare_size, button_sqare_size));
	 Point = new wxButton(this, 8, " . ", wxPoint(300, 600), wxSize(button_sqare_size, button_sqare_size));
	clear = new wxButton(this, 6, " CE ", wxPoint(0, 700), wxSize(windows_with, 50));
	Negate = new wxButton(this,9, " Negate(-)", wxPoint(0, 750), wxSize(windows_with, 50));


#if IsOnHex  
	 windows_hight = 890;
	 windows_with = 415;
	A = new wxButton(this, 10, " A ", wxPoint(0, 800), wxSize(button_sqare_size - 50, button_sqare_size - 50));
	B =  new wxButton(this, 11, " B ", wxPoint(50, 800), wxSize(button_sqare_size - 50, button_sqare_size - 50));
	C = new wxButton(this, 12, " C ", wxPoint(100, 800), wxSize(button_sqare_size - 50, button_sqare_size - 50));
	D = new wxButton(this, 13, " D ", wxPoint(150, 800), wxSize(button_sqare_size - 50, button_sqare_size - 50));
	E = new wxButton(this,14, " E ", wxPoint(200, 800), wxSize(button_sqare_size - 50, button_sqare_size - 50));
	F = new wxButton(this, 15, " F ", wxPoint(250, 800), wxSize(button_sqare_size - 50, button_sqare_size - 50));


//colors
	
	A->SetBackgroundColour("yellow");
	
	B->SetBackgroundColour("yellow");
	
	C->SetBackgroundColour("yellow");
	
	D->SetBackgroundColour("yellow");

	E->SetBackgroundColour("yellow");
	
	F ->SetBackgroundColour("yellow");


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

	Negate->SetBackgroundColour("grey");
	clear -> SetBackgroundColour("grey");

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


	//fonts
	wxFont font_NumbD(18, wxFONTFAMILY_SWISS,wxFONTSTYLE_SLANT, wxFONTWEIGHT_EXTRABOLD, false);
	font_NumbD.SetPixelSize(wxSize(25,25));


	wxFont font(24, wxFONTFAMILY_TELETYPE, wxFONTSTYLE_MAX, wxFONTWEIGHT_EXTRABOLD,false);
	wxFont fontOp(26, wxFONTFAMILY_SCRIPT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_EXTRAHEAVY, false);
	wxFont fontTypeOfNumbers(20, wxFONTFAMILY_DECORATIVE, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	numDisp->SetFont(fontTypeOfNumbers);
	numDisp->Clear();
	numDisp->AppendText("\n\n\n");

	//numbs
	zero->SetFont(font);
	one->SetFont(font);
	two->SetFont(font);
	three->SetFont(font);
	four->SetFont(font);
	five->SetFont(font);
    six->SetFont(font);
	seven->SetFont(font);
	eight->SetFont(font);
	nine->SetFont(font);
	clear->SetFont(font);
	
	//operations
	div->SetFont(fontOp);
	mult->SetFont(fontOp);
	addition->SetFont(fontOp);
	subtract->SetFont(fontOp);
	equal->SetFont(fontOp);
	Point->SetFont(fontOp);
	Negate->SetFont(fontOp);
	//Type of numbs
	mod->SetFont(fontTypeOfNumbers);
	Dec->SetFont(fontTypeOfNumbers);
	Bin->SetFont(fontTypeOfNumbers);
	Hex->SetFont(fontTypeOfNumbers);
}


#pragma region Buttons



void MainWindows::Clickon_Zero(wxCommandEvent& event) {
	

	if (Iszero) {
		numDisp->Clear();
		numDisp->AppendText("\n\n\n");
		numDisp->AppendText(zero->GetLabelText());
		
	}
	else if (!Iszero) {
		numDisp->AppendText(zero->GetLabelText());

	}

	



	event.Skip(); 
}


void MainWindows::Clickon_One(wxCommandEvent& event) {  
	numDisp->AppendText(one->GetLabelText());


if (Iszero) {

	numDisp->Clear();
	numDisp->AppendText("\n\n\n");
	numDisp->AppendText(one->GetLabelText());
}

Iszero = false;
event.Skip(); 
}

void MainWindows::Clickon_Two(wxCommandEvent& event) {
	numDisp->AppendText(two->GetLabelText());


	if (Iszero) {

		numDisp->Clear();
		numDisp->AppendText("\n\n\n");
		numDisp->AppendText(two->GetLabelText());
	}

	Iszero = false;
	event.Skip();
}


void MainWindows::Clickon_Three(wxCommandEvent& event) {
	numDisp->AppendText(three->GetLabelText());


	if (Iszero) {

		numDisp->Clear();
		numDisp->AppendText("\n\n\n");
		numDisp->AppendText(three->GetLabelText());
	}

	Iszero = false;
	event.Skip();
}

void MainWindows::Clickon_Four(wxCommandEvent& event) {
	numDisp->AppendText(four->GetLabelText());


	if (Iszero) {

		numDisp->Clear();
		numDisp->AppendText("\n\n\n");
		numDisp->AppendText(four->GetLabelText());
	}

	Iszero = false;
	event.Skip();
}

void MainWindows::Clickon_Five(wxCommandEvent& event) {
	numDisp->AppendText(five->GetLabelText());


	if (Iszero) {

		numDisp->Clear();
		numDisp->AppendText("\n\n\n");
		numDisp->AppendText(five->GetLabelText());
	}

	Iszero = false;
	event.Skip();
}

void MainWindows::Clickon_Six(wxCommandEvent& event) {
	numDisp->AppendText(six->GetLabelText());


	if (Iszero) {

		numDisp->Clear();
		numDisp->AppendText("\n\n\n");
		numDisp->AppendText(six->GetLabelText());
	}

	Iszero = false;
	event.Skip();
}

void MainWindows::Clickon_Seven(wxCommandEvent& event) {
	numDisp->AppendText(seven->GetLabelText());


	if (Iszero) {

		numDisp->Clear();
		numDisp->AppendText("\n\n\n");
		numDisp->AppendText(seven->GetLabelText());
	}

	Iszero = false;
	event.Skip();
}

void MainWindows::Clickon_Eight(wxCommandEvent& event) {
	numDisp->AppendText(eight->GetLabelText());


	if (Iszero) {

		numDisp->Clear();
		numDisp->AppendText("\n\n\n");
		numDisp->AppendText(eight->GetLabelText());
	}

	Iszero = false;
	event.Skip();
}

void MainWindows::Clickon_Nine(wxCommandEvent& event) {
	numDisp->AppendText(nine->GetLabelText());


	if (Iszero) {

		numDisp->Clear();
		numDisp->AppendText("\n\n\n");
		numDisp->AppendText(nine->GetLabelText());
	}

	Iszero = false;
	event.Skip();
}
////hex
void MainWindows::Clickon_A(wxCommandEvent& event) {
	numDisp->AppendText(A->GetLabelText());


	if (Iszero) {

		numDisp->Clear();
		numDisp->AppendText("\n\n\n");
		numDisp->AppendText(A->GetLabelText());
	}

	Iszero = false;
	event.Skip();
}
void MainWindows::Clickon_B(wxCommandEvent& event) {
	numDisp->AppendText(B->GetLabelText());


	if (Iszero) {

		numDisp->Clear();
		numDisp->AppendText("\n\n\n");
		numDisp->AppendText(B->GetLabelText());
	}

	Iszero = false;
	event.Skip();
}
void MainWindows::Clickon_C(wxCommandEvent& event) {
	numDisp->AppendText(D->GetLabelText());


	if (Iszero) {

		numDisp->Clear();
		numDisp->AppendText("\n\n\n");
		numDisp->AppendText(D->GetLabelText());
	}

	Iszero = false;
	event.Skip();
}
void MainWindows::Clickon_D(wxCommandEvent& event) {
	numDisp->AppendText(D->GetLabelText());


	if (Iszero) {

		numDisp->Clear();
		numDisp->AppendText("\n\n\n");
		numDisp->AppendText(D->GetLabelText());
	}

	Iszero = false;
	event.Skip();
}
void MainWindows::Clickon_E(wxCommandEvent& event) {
	numDisp->AppendText(E->GetLabelText());


	if (Iszero) {

		numDisp->Clear();
		numDisp->AppendText("\n\n\n");
		numDisp->AppendText(E->GetLabelText());
	}

	Iszero = false;
	event.Skip();
}
void MainWindows::Clickon_F(wxCommandEvent& event) {
	numDisp->AppendText(F->GetLabelText());


	if (Iszero) {

		numDisp->Clear();
		numDisp->AppendText("\n\n\n");
		numDisp->AppendText(F->GetLabelText());
	}

	Iszero = false;
	event.Skip();
}
//operations
void MainWindows::Clickon_subtract(wxCommandEvent& event) {
	numDisp->AppendText(subtract->GetLabelText());


	if (Iszero) {

		numDisp->Clear();
		numDisp->AppendText("\n\n\n");
		numDisp->AppendText(subtract->GetLabelText());
	}

	Iszero = false;
	event.Skip();
}
void MainWindows::Clickon_Add(wxCommandEvent& event) {
	numDisp->AppendText(addition->GetLabelText());


	if (Iszero) {

		numDisp->Clear();
		numDisp->AppendText("\n\n\n");
		numDisp->AppendText(addition->GetLabelText());
	}

	Iszero = false;
	event.Skip();
}
void MainWindows::Clickon_div(wxCommandEvent& event) {
	numDisp->AppendText(div->GetLabelText());


	if (Iszero) {

		numDisp->Clear();
		numDisp->AppendText("\n\n\n");
		numDisp->AppendText(div->GetLabelText());
	}

	Iszero = false;
	event.Skip();
}
void MainWindows::Clickon_Mult(wxCommandEvent& event) {
	numDisp->AppendText(mult->GetLabelText());


	if (Iszero) {

		numDisp->Clear();
		numDisp->AppendText("\n\n\n");
		numDisp->AppendText(mult->GetLabelText());
	}

	Iszero = false;
	event.Skip();
}
////special  op
void MainWindows::Clickon_Mod(wxCommandEvent& event) {
	numDisp->AppendText(mod->GetLabelText());


	if (Iszero) {

		numDisp->Clear();
		numDisp->AppendText("\n\n\n");
		numDisp->AppendText(mod->GetLabelText());
	}

	Iszero = false;
	event.Skip();
}
void MainWindows::Clickon_Clear(wxCommandEvent& event) {
	numDisp->Clear();
	numDisp->AppendText("\n\n\n");
	Iszero = true; 
		event.Skip();

}
void MainWindows::Clickon_Equal(wxCommandEvent& event) {

}
void MainWindows::Clickon_Point(wxCommandEvent& event) {
	numDisp->AppendText(Point->GetLabelText());



	Iszero = false;
	event.Skip();
}
void MainWindows::Clickon_Negate(wxCommandEvent& event) {
	wxString inf = numDisp->GetValue();
	
	if (!Iszero&&!is_negative) {

		numDisp->Clear();
		
		
		numDisp->SetValue("-(First is Negative)"+ inf);
		
		is_negative = true;
	}
	event.Skip();
}
////modes
void MainWindows::Clickon_bin(wxCommandEvent& event) {
	
	//to be worked 

}
void MainWindows::Clickon_hex(wxCommandEvent& event) {
	//not ready yet working on logic 

	
}
void MainWindows::Clickon_dec(wxCommandEvent& event) {

	//needs some code
	
}
#pragma endregion