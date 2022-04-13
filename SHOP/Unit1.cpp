//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFstart *Fstart;
//---------------------------------------------------------------------------
__fastcall TFstart::TFstart(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFstart::Button1Click(TObject *Sender)
{
	Fbase->Show();
}
//---------------------------------------------------------------------------

void __fastcall TFstart::Button2Click(TObject *Sender)
{
	Fsale->Show();
}
//---------------------------------------------------------------------------

void __fastcall TFstart::Button3Click(TObject *Sender)
{
	Application->Terminate();
}
//---------------------------------------------------------------------------

