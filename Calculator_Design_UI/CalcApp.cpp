#include "CalcApp.h"

wxIMPLEMENT_APP(CalcApp);


CalcApp::CalcApp() {




}

CalcApp::~CalcApp() {



}

bool CalcApp::OnInit() {
	frames = new MainWindows();
	frames->Show();
	return true;

}
