//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("Unit2.cpp", DM); /* TDataModule: File Type */
USEFORM("Unit3.cpp", Fbase);
USEFORM("Unit1.cpp", Fstart);
USEFORM("Unit4.cpp", Fsale);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TFstart), &Fstart);
		Application->CreateForm(__classid(TDM), &DM);
		Application->CreateForm(__classid(TFbase), &Fbase);
		Application->CreateForm(__classid(TFsale), &Fsale);
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
