#include "ButtonFactory.h"
#include <string>
#include <vector>




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
	if (!Iszero) {
		Caculator_Processator::Getinstance().FirstNumb = std::stof((std::string(Caculator_Processator::Getinstance().numDisp->GetValue())));
	}
	if (Iszero) {
		Caculator_Processator::Getinstance().numDisp->AppendText("N/A");
		Caculator_Processator::Getinstance().numDisp->Clear();
		Caculator_Processator::Getinstance().numDisp->AppendText("\n\n\n");
		Caculator_Processator::Getinstance().numDisp->AppendText(div->GetLabelText());
	}

	Caculator_Processator::Getinstance().OperatorOnScreen = div->GetLabelText();
	Caculator_Processator::Getinstance().numDisp->Clear();
	Caculator_Processator::Getinstance().numDisp->AppendText("\n\n\n");




	Iszero = false;
	event.Skip();


}
void MainWindows::Clickon_subtract(wxCommandEvent& event) {
	if (!Iszero) {

		Caculator_Processator::Getinstance().FirstNumb = std::stof((std::string(Caculator_Processator::Getinstance().numDisp->GetValue())));

		Caculator_Processator::Getinstance().OperatorOnScreen = subtract->GetLabelText();
		Caculator_Processator::Getinstance().numDisp->Clear();
		Caculator_Processator::Getinstance().numDisp->AppendText("\n\n\n");
	}

	if (Iszero) {

		Caculator_Processator::Getinstance().numDisp->Clear();
		Caculator_Processator::Getinstance().numDisp->AppendText("\n\n\n");
		Caculator_Processator::Getinstance().numDisp->AppendText(subtract->GetLabelText());
	}

	Iszero = false;
	event.Skip();
}
void MainWindows::Clickon_Add(wxCommandEvent& event) {
	if (!Iszero) {

		Caculator_Processator::Getinstance().FirstNumb = std::stof((std::string(Caculator_Processator::Getinstance().numDisp->GetValue())));

		Caculator_Processator::Getinstance().OperatorOnScreen = addition->GetLabelText();
		Caculator_Processator::Getinstance().numDisp->Clear();
		Caculator_Processator::Getinstance().numDisp->AppendText("\n\n\n");

	}




	

	if (Iszero) {

		Caculator_Processator::Getinstance().numDisp->Clear();
		Caculator_Processator::Getinstance().numDisp->AppendText("\n\n\n");
		Caculator_Processator::Getinstance().numDisp->AppendText(addition->GetLabelText());
	}

	Iszero = false;
	event.Skip();
}
void MainWindows::Clickon_Mult(wxCommandEvent& event) {
	
	if (!Iszero) {

		Caculator_Processator::Getinstance().FirstNumb = std::stof((std::string(Caculator_Processator::Getinstance().numDisp->GetValue())));

		Caculator_Processator::Getinstance().OperatorOnScreen = mult->GetLabelText();
		Caculator_Processator::Getinstance().numDisp->Clear();
		Caculator_Processator::Getinstance().numDisp->AppendText("\n\n\n");

	}

	if (Iszero) {

		Caculator_Processator::Getinstance().numDisp->Clear();
		Caculator_Processator::Getinstance().numDisp->AppendText("\n\n\n");
		Caculator_Processator::Getinstance().numDisp->AppendText(mult->GetLabelText());
	}

	Iszero = false;
	event.Skip();
}

//numbers clicked events
void MainWindows::Clickon_Zero(wxCommandEvent& event) {


	if (Iszero) {
		Caculator_Processator::Getinstance().numDisp->Clear();
		Caculator_Processator::Getinstance().numDisp->AppendText("\n\n\n");
		Caculator_Processator::Getinstance().numDisp->AppendText(zero->GetLabelText());

	}
	else if (!Iszero) {
		Caculator_Processator::Getinstance().numDisp->AppendText(zero->GetLabelText());

	}





	event.Skip();
}
void MainWindows::Clickon_One(wxCommandEvent& event)

{
	Caculator_Processator::Getinstance().numDisp->AppendText(one->GetLabelText());


	if (Iszero) {

		Caculator_Processator::Getinstance().numDisp->Clear();
		Caculator_Processator::Getinstance().numDisp->AppendText("\n\n\n");
		Caculator_Processator::Getinstance().numDisp->AppendText(one->GetLabelText());
	}

	Iszero = false;
	event.Skip();
}
void MainWindows::Clickon_Two(wxCommandEvent& event) {
	Caculator_Processator::Getinstance().numDisp->AppendText(two->GetLabelText());


	if (Iszero) {

		Caculator_Processator::Getinstance().numDisp->Clear();
		Caculator_Processator::Getinstance().numDisp->AppendText("\n\n\n");
		Caculator_Processator::Getinstance().numDisp->AppendText(two->GetLabelText());
	}

	Iszero = false;
	event.Skip();
}
void MainWindows::Clickon_Three(wxCommandEvent& event) {
	Caculator_Processator::Getinstance().numDisp->AppendText(three->GetLabelText());


	if (Iszero) {

		Caculator_Processator::Getinstance().numDisp->Clear();
		Caculator_Processator::Getinstance().numDisp->AppendText("\n\n\n");
		Caculator_Processator::Getinstance().numDisp->AppendText(three->GetLabelText());
	}

	Iszero = false;
	event.Skip();
}
void MainWindows::Clickon_Four(wxCommandEvent& event) {
	Caculator_Processator::Getinstance().numDisp->AppendText(four->GetLabelText());


	if (Iszero) {

		Caculator_Processator::Getinstance().numDisp->Clear();
		Caculator_Processator::Getinstance().numDisp->AppendText("\n\n\n");
		Caculator_Processator::Getinstance().numDisp->AppendText(four->GetLabelText());
	}

	Iszero = false;
	event.Skip();
}
void MainWindows::Clickon_Five(wxCommandEvent& event) {
	Caculator_Processator::Getinstance().numDisp->AppendText(five->GetLabelText());


	if (Iszero) {

		Caculator_Processator::Getinstance().numDisp->Clear();
		Caculator_Processator::Getinstance().numDisp->AppendText("\n\n\n");
		Caculator_Processator::Getinstance().numDisp->AppendText(five->GetLabelText());
	}

	Iszero = false;
	event.Skip();
}
void MainWindows::Clickon_Six(wxCommandEvent& event) {
	Caculator_Processator::Getinstance().numDisp->AppendText(six->GetLabelText());


	if (Iszero) {

		Caculator_Processator::Getinstance().numDisp->Clear();
		Caculator_Processator::Getinstance().numDisp->AppendText("\n\n\n");
		Caculator_Processator::Getinstance().numDisp->AppendText(six->GetLabelText());
	}

	Iszero = false;
	event.Skip();
}
void MainWindows::Clickon_Seven(wxCommandEvent& event) {
	Caculator_Processator::Getinstance().numDisp->AppendText(seven->GetLabelText());


	if (Iszero) {

		Caculator_Processator::Getinstance().numDisp->Clear();
		Caculator_Processator::Getinstance().numDisp->AppendText("\n\n\n");
		Caculator_Processator::Getinstance().numDisp->AppendText(seven->GetLabelText());
	}

	Iszero = false;
	event.Skip();
}
void MainWindows::Clickon_Eight(wxCommandEvent& event) {
	Caculator_Processator::Getinstance().numDisp->AppendText(eight->GetLabelText());


	if (Iszero) {

		Caculator_Processator::Getinstance().numDisp->Clear();
		Caculator_Processator::Getinstance().numDisp->AppendText("\n\n\n");
		Caculator_Processator::Getinstance().numDisp->AppendText(eight->GetLabelText());
	}

	Iszero = false;
	event.Skip();
}
void MainWindows::Clickon_Nine(wxCommandEvent& event) {
	Caculator_Processator::Getinstance().numDisp->AppendText(nine->GetLabelText());


	if (Iszero) {

		Caculator_Processator::Getinstance().numDisp->Clear();
		Caculator_Processator::Getinstance().numDisp->AppendText("\n\n\n");
		Caculator_Processator::Getinstance().numDisp->AppendText(nine->GetLabelText());
	}

	Iszero = false;
	event.Skip();
}

//Special Operations
void MainWindows::Clickon_Mod(wxCommandEvent& event) {
	if (!Iszero) {
		Caculator_Processator::Getinstance().FirstNumb = std::stof((std::string(Caculator_Processator::Getinstance().numDisp->GetValue())));
		Caculator_Processator::Getinstance().OperatorOnScreen = "Mod";
		Caculator_Processator::Getinstance().numDisp->Clear();
		Caculator_Processator::Getinstance().numDisp->AppendText("\n\n\n");


		if (Iszero) {

			Caculator_Processator::Getinstance().numDisp->Clear();
			Caculator_Processator::Getinstance().numDisp->AppendText("\n\n\n");
			Caculator_Processator::Getinstance().numDisp->AppendText(mod->GetLabelText());
		}

		Iszero = false;
		event.Skip();
	}
}
void MainWindows::Clickon_Clear(wxCommandEvent& event) {
	Caculator_Processator::Getinstance().numDisp->Clear();
	Caculator_Processator::Getinstance().numDisp->AppendText("\n\n\n");
	Iszero = true;
	event.Skip();

}
void MainWindows::Clickon_Equal(wxCommandEvent& event) {

	Caculator_Processator::Getinstance().SecondNumb = std::stof((std::string(Caculator_Processator::Getinstance().numDisp->GetValue())));

	Caculator_Processator::Getinstance().numDisp->Clear();
	Caculator_Processator::Getinstance().numDisp->AppendText("\n\n\n ");
	Caculator_Processator::Getinstance().numDisp->AppendText(std::to_string((int)Caculator_Processator::Getinstance().FirstNumb));
	Caculator_Processator::Getinstance().numDisp->AppendText(Caculator_Processator::Getinstance().OperatorOnScreen);
	Caculator_Processator::Getinstance().numDisp->AppendText(std::to_string((int)Caculator_Processator::Getinstance().SecondNumb));
	Caculator_Processator::Getinstance().numDisp->AppendText(" = ");
	
	if (Caculator_Processator::Getinstance().OperatorOnScreen == '+') {
		Caculator_Processator::AddCommands(Caculator_Processator::Getinstance().SecondNumb);
		Caculator_Processator::AddCommands com;
		com.Execute();
		Caculator_Processator::Getinstance().FirstNumb = Caculator_Processator::Getinstance().result;
	}
	else if (Caculator_Processator::Getinstance().OperatorOnScreen == '*') {
		Caculator_Processator::MultCommands(Caculator_Processator::Getinstance().SecondNumb);
		Caculator_Processator::MultCommands com;
	
		com.Execute();
		Caculator_Processator::Getinstance().numDisp->AppendText(std::to_string((int)Caculator_Processator::Getinstance().result));
		Caculator_Processator::Getinstance().FirstNumb = Caculator_Processator::Getinstance().result;
	}
	else if (Caculator_Processator::Getinstance().OperatorOnScreen == '-') {
		Caculator_Processator::SubtractCommands(Caculator_Processator::Getinstance().SecondNumb);
		Caculator_Processator::SubtractCommands com;
		com.Execute();
		Caculator_Processator::Getinstance().numDisp->AppendText(std::to_string((int)Caculator_Processator::Getinstance().result));
		Caculator_Processator::Getinstance().FirstNumb = Caculator_Processator::Getinstance().result;
	}
	else if (Caculator_Processator::Getinstance().OperatorOnScreen == '/') {
		Caculator_Processator::DivCommands(Caculator_Processator::Getinstance().SecondNumb);
		Caculator_Processator::DivCommands com;
		com.Execute();
		
		Caculator_Processator::Getinstance().numDisp->AppendText(std::to_string(Caculator_Processator::Getinstance().result));
		Caculator_Processator::Getinstance().numDisp->AppendText(',');
		Caculator_Processator::Getinstance().FirstNumb = Caculator_Processator::Getinstance().result;
		

	}
	else if (Caculator_Processator::Getinstance().OperatorOnScreen == "Mod") {
		Caculator_Processator::DivCommands((int)Caculator_Processator::Getinstance().SecondNumb);
		Caculator_Processator::DivCommands com;
		com.Mod();

		Caculator_Processator::Getinstance().numDisp->AppendText(std::to_string(Caculator_Processator::Getinstance().result));
		
		Caculator_Processator::Getinstance().FirstNumb = Caculator_Processator::Getinstance().result;
		Iszero = true;
		event.Skip();
	}
}
	void MainWindows::Clickon_Point(wxCommandEvent & event) {
		Caculator_Processator::Getinstance().numDisp->AppendText(Point->GetLabelText());



		Iszero = false;
		event.Skip();
	}
	void MainWindows::Clickon_Negate(wxCommandEvent & event) {
		

		if (!Iszero && !is_negative) {
			Caculator_Processator::Getinstance().FirstNumb = std::stof((std::string(Caculator_Processator::Getinstance().numDisp->GetValue())));
			Caculator_Processator::Getinstance().numDisp->Clear();
			Caculator_Processator::Getinstance().numDisp->AppendText("\n\n\n ");

			Caculator_Processator::Getinstance().FirstNumb = -(Caculator_Processator::Getinstance().FirstNumb);
			Caculator_Processator::Getinstance().numDisp->AppendText(std::to_string((int)Caculator_Processator::Getinstance().FirstNumb));
			is_negative = true;
		}
		event.Skip();
	}



//Mode

void MainWindows::Clickon_bin(wxCommandEvent& event) {

	//to be worked 

}
void MainWindows::Clickon_hex(wxCommandEvent& event) {
	

}
void MainWindows::Clickon_dec(wxCommandEvent& event) {

	//needs some code

}
