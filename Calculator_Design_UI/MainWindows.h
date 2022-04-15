#pragma once
#include "wx/wx.h"


class MainWindows:public wxFrame
{
public :
	MainWindows();
	int button_sqare_size = 100;
	int windows_hight = 845;
	int windows_with = 415;

	//Display
	wxListBox* numDisp = nullptr;
	 
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
	wxButton* A = nullptr;
	wxButton* B = nullptr;
	wxButton* C = nullptr;
	wxButton* D = nullptr;
	wxButton* E = nullptr;
	wxButton* F = nullptr;

	wxButton* Point = nullptr;
	wxButton* clear = nullptr;

	
	//sizer
wxSizer* Sizer = nullptr;

//Evente Table
wxDECLARE_EVENT_TABLE();




};

