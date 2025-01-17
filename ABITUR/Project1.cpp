//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
#include <Vcl.Styles.hpp>
#include <Vcl.Themes.hpp>
USEFORM("Unit6.cpp", Finput);
USEFORM("Unit5.cpp", DM); /* TDataModule: File Type */
USEFORM("Unit7.cpp", Fsets);
USEFORM("Unit9.cpp", Frep2);
USEFORM("Unit8.cpp", Frep1);
USEFORM("Unit4.cpp", Finputedit);
USEFORM("Unit1.cpp", Fstart);
USEFORM("Unit2.cpp", Fabout);
USEFORM("Unit10.cpp", Frep3);
USEFORM("Unit11.cpp", Fhelp);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->Title = "����������";
		Application->CreateForm(__classid(TFstart), &Fstart);
		Application->CreateForm(__classid(TFabout), &Fabout);
		Application->CreateForm(__classid(TFinputedit), &Finputedit);
		Application->CreateForm(__classid(TDM), &DM);
		Application->CreateForm(__classid(TFinput), &Finput);
		Application->CreateForm(__classid(TFsets), &Fsets);
		Application->CreateForm(__classid(TFrep1), &Frep1);
		Application->CreateForm(__classid(TFrep2), &Frep2);
		Application->CreateForm(__classid(TFrep3), &Frep3);
		Application->CreateForm(__classid(TFhelp), &Fhelp);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
