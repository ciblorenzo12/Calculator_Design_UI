#include "ButtonFactory.h"
#include "MainWindows.h"




ButtonFactory::ButtonFactory(){

}

ButtonFactory::~ButtonFactory() {

}
wxButton *ButtonFactory::CreateAddButton(wxWindow* parent, int id, wxString label, int button_square_size, int posX, int posY, wxString Background_color, wxString Foreground_color, wxFont font) {

	new_button = new wxButton(parent, id, label, wxPoint(posX, posY), wxSize(button_square_size, button_square_size));
	new_button->SetBackgroundColour(Background_color);
	new_button->SetForegroundColour(Foreground_color);
	new_button->SetFont(font);
	
	

	
	return new_button;
}
wxButton* ButtonFactory::CreateAddButton(wxWindow* parent, int id, wxString label, int ScalX,int ScalY, int posX, int posY, wxString Background_color, wxString Foreground_color, wxFont font) {

	new_button = new wxButton(parent, id, label, wxPoint(posX, posY), wxSize(ScalX, ScalY));
	new_button->SetBackgroundColour(Background_color);
	new_button->SetForegroundColour(Foreground_color);
	new_button->SetFont(font);




	return new_button;
}

//Operations clicked events
void MainWindows::Clickon_Div(wxCommandEvent& event ) {

	numDisp->AppendText(div->GetLabelText());


	if (Iszero) {

		numDisp->Clear();
		numDisp->AppendText("\n\n\n");
		numDisp->AppendText(div->GetLabelText());
	}

	Iszero = false;
	event.Skip();


}
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

//numbers clicked events
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
void MainWindows::Clickon_One(wxCommandEvent& event)

{
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

//Special Operations
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

	if (!Iszero && !is_negative) {

		numDisp->Clear();


		numDisp->SetValue("-(First is Negative)" + inf);

		is_negative = true;
	}
	event.Skip();
}

//Hex
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
	numDisp->AppendText(C->GetLabelText());


	if (Iszero) {

		numDisp->Clear();
		numDisp->AppendText("\n\n\n");
		numDisp->AppendText(C->GetLabelText());
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

//Mode

void MainWindows::Clickon_bin(wxCommandEvent& event) {

	//to be worked 

}
void MainWindows::Clickon_hex(wxCommandEvent& event) {
	//not ready yet working on logic 


}
void MainWindows::Clickon_dec(wxCommandEvent& event) {

	//needs some code

}
