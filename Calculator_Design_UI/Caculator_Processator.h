#pragma once
#include "MainWindows.h"
#include "wx/wx.h"
#include "IBaseCommand.h"
#include <string>
#include <vector>




class Caculator_Processator
{


public:
	static Caculator_Processator& Getinstance() {

		static Caculator_Processator instance;
		return instance;


	}
	
	
	class AddCommands : public IBaseCommand
	{

	public:
		AddCommands() {};
		AddCommands(double secondnumb_) {

			Caculator_Processator::Getinstance().SecondNumb = secondnumb_;

		}
		void Execute() {
			Caculator_Processator::Getinstance().result = Caculator_Processator::Getinstance().FirstNumb + Caculator_Processator::Getinstance().SecondNumb;
		}
	};
	class SubtractCommands : public IBaseCommand
	{
	public:
		SubtractCommands() {};
		SubtractCommands(double secondnumb_) {

			Caculator_Processator::Getinstance().SecondNumb = secondnumb_;

		}
		void Execute() {
			Caculator_Processator::Getinstance().result = Caculator_Processator::Getinstance().FirstNumb - Caculator_Processator::Getinstance().SecondNumb;
		}

	};
	class MultCommands : public IBaseCommand
	{
	public:
		MultCommands() {};
		MultCommands(double secondnumb_) {

			Caculator_Processator::Getinstance().SecondNumb = secondnumb_;

		}
		void Execute() {
			Caculator_Processator::Getinstance().result = Caculator_Processator::Getinstance().FirstNumb * Caculator_Processator::Getinstance().SecondNumb;
		}


	};
	class DivCommands : public IBaseCommand
	{
	public :
		DivCommands() {};

		DivCommands(double secondnumb_) {

			Caculator_Processator::Getinstance().SecondNumb = secondnumb_;

		}
		void Execute() {
			Caculator_Processator::Getinstance().result = Caculator_Processator::Getinstance().FirstNumb / Caculator_Processator::Getinstance().SecondNumb;
		}
		void Mod() {

			Caculator_Processator::Getinstance().result = int(Caculator_Processator::Getinstance().FirstNumb) % int(Caculator_Processator::Getinstance().SecondNumb);
		}

	};



public:
	//Display
	
	double FirstNumb =0;
	double SecondNumb=0 ;
	double result = 0;
	std::string OperatorOnScreen="";
	wxTextCtrl* numDisp;
	Caculator_Processator(Caculator_Processator const&) = delete;
	void  operator=(Caculator_Processator const&) = delete;
	std::vector<Caculator_Processator>cms_dmanage;


private:
	Caculator_Processator();
public:
	


	double minus(double value);
	double div(double value);
	double add(double value);
	double mult(double value);
	

};

