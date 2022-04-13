#pragma once
#include "wx/wx.h"


class MainWindows;
class CalcApp:public wxApp 
{
private :
	MainWindows* frames = nullptr;
public:
	CalcApp();
	~CalcApp();

	virtual bool OnInit();

	
};

