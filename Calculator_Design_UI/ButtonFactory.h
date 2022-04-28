#pragma once
#include "wx/wx.h"
#include "MainWindows.h"
#include "Caculator_Processator.h"
#include <string>

class ButtonFactory
{
public:
		ButtonFactory();
		~ButtonFactory();
		
		wxButton* CreateAddButton(wxWindow* parent, int id, wxString label, int button_square_size, int posX, int posY, wxString Background_color, wxString Foreground_color, wxFont font);
		wxButton* CreateAddButton(wxWindow* parent, int id, wxString label, int ScalX, int ScalY, int posX, int posY, wxString Background_color, wxString Foreground_color, wxFont font);
		
private:
	wxButton* new_button = nullptr;

};

