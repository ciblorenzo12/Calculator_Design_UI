#pragma once
#include "wx/wx.h"
#include "Caculator_Processator.h"
#include <string>
#include "ButtonFactory.h"
class MainWindows:public wxFrame
{
public :
	MainWindows();
	int button_sqare_size = 100;
	int windows_hight = 890;
	int windows_with = 415;
	bool first_click = true;
	//calc 
	bool is_negative = false;
	

	
	
	//fonts

	wxFont* font = nullptr;
	//butons
	wxButton* zero = nullptr;
	wxButton* one= nullptr;
	wxButton* two = nullptr;
	wxButton* three = nullptr;
	wxButton* four = nullptr;
	wxButton* five= nullptr;
	wxButton* six= nullptr;
	wxButton* seven = nullptr;
	wxButton* eight= nullptr;
	wxButton* nine= nullptr;
	wxButton* mod = nullptr;
	wxButton* div = nullptr;
	wxButton* subtract = nullptr;
	wxButton* addition = nullptr;
	wxButton* mult = nullptr;
	wxButton* equal = nullptr;
	wxButton* Negate = nullptr;

	wxButton* Dec = nullptr;
	wxButton* Bin = nullptr;
	wxButton* Hex = nullptr;
	

	wxButton* Point = nullptr;
	wxButton* clear = nullptr;
	wxButton* backspace = nullptr;

	//sizer
wxSizer* Sizer = nullptr;

//click function events
void Clickon_Zero(wxCommandEvent& event);
void Clickon_One(wxCommandEvent& event);
void Clickon_Two(wxCommandEvent& event);
void Clickon_Three(wxCommandEvent& event);
void Clickon_Four(wxCommandEvent& event);
void Clickon_Five(wxCommandEvent& event);
void Clickon_Six(wxCommandEvent& event);
void Clickon_Seven(wxCommandEvent& event);
void Clickon_Eight(wxCommandEvent& event);
void Clickon_Nine(wxCommandEvent& event);

//operations
void Clickon_subtract(wxCommandEvent& event);
void Clickon_Add(wxCommandEvent& event);
void Clickon_Div(wxCommandEvent& event);
void Clickon_Mult(wxCommandEvent& event);
//special  op
void Clickon_Mod(wxCommandEvent& event);
void Clickon_Clear(wxCommandEvent& event);
void Clickon_Equal(wxCommandEvent& event);
void Clickon_Point(wxCommandEvent& event);
void Clickon_Negate(wxCommandEvent& event);
//modes
void Clickon_bin(wxCommandEvent& event);
void Clickon_hex(wxCommandEvent& event);
void Clickon_dec(wxCommandEvent& event);
//bool for checking if is 0
std::string  ConvertToHex(double dec);
double ConverttoDec(std::string hex);
int ConvertToBi(double dec);

private :
	wxWindow* parent = nullptr;
	bool Iszero = true;
	
};

