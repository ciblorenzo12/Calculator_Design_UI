#pragma once
#include "wx/wx.h"


class MainWindows:public wxFrame
{
public :
	MainWindows();
	int windows_hight = 700;
	int windows_with = 400;
	wxListBox* numDisp = nullptr;
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
	

	//sizer
wxSizer* Sizer = nullptr;
};

