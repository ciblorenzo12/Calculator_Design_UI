#pragma once
#include "MainWindows.h"
#include "wx/wx.h"

class Caculator_Processator
{
public:
	static Caculator_Processator& Getinstance() {

		static Caculator_Processator instance;
		return instance;


	}



private:
	Caculator_Processator() {};



public:
	//Display
	wxTextCtrl* numDisp;
	Caculator_Processator(Caculator_Processator const&) = delete;
	void  operator=(Caculator_Processator const&) = delete;

public:
	int mod(double inf1, double inf2);
	int minus(double inf1, double inf2);
	int div(double inf1, double inf2);
	int add(double inf1, double inf2);
	int result(double inf1, double inf2);

};
