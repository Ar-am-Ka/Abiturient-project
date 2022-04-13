//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit7.h"
#include "Unit10.h"
#include "Unit6.h"
#include "Unit8.h"
#include "Unit9.h"
#include "Unit11.h"
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

void __fastcall TFstart::N1Click(TObject *Sender)
{
	Fabout->ShowModal();
}
//---------------------------------------------------------------------------


void __fastcall TFstart::Button1Click(TObject *Sender)
{
	Finputedit->Show();
}










//---------------------------------------------------------------------------



void __fastcall TFstart::N7Click(TObject *Sender)
{
	Fsets->ShowModal();
}
//---------------------------------------------------------------------------



void __fastcall TFstart::N10Click(TObject *Sender)
{
	Finputedit->Show();
	Finputedit->PG1->ActivePageIndex=1;
}
//---------------------------------------------------------------------------

void __fastcall TFstart::N11Click(TObject *Sender)
{
	Finputedit->Show();
	Finputedit->PG1->ActivePageIndex=2;
}
//---------------------------------------------------------------------------

void __fastcall TFstart::Button2Click(TObject *Sender)
{
	Application->Terminate();
}
//---------------------------------------------------------------------------

void __fastcall TFstart::N12Click(TObject *Sender)
{
	Application->Terminate();
}
//---------------------------------------------------------------------------




void __fastcall TFstart::N15Click(TObject *Sender)
{
	Frep1->frxR1->PrepareReport(true);
	Frep1->frxR1->Print();
}
//---------------------------------------------------------------------------

void __fastcall TFstart::N16Click(TObject *Sender)
{
	Frep1->frxR1->PrepareReport(true);
	Frep1->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFstart::PDF1Click(TObject *Sender)
{
	Frep1->frxR1->Export(Frep1->frxPDFExp1);
}
//---------------------------------------------------------------------------

void __fastcall TFstart::N19Click(TObject *Sender)
{
	Frep2->frxReport1->PrepareReport(true);
	Frep2->frxReport1->Print();
}
//---------------------------------------------------------------------------

void __fastcall TFstart::N20Click(TObject *Sender)
{
	Frep2->frxReport1->PrepareReport(true);
	Frep2->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFstart::PDF2Click(TObject *Sender)
{
	Frep2->frxReport1->Export(Frep2->frxPDFExport1);
}
//---------------------------------------------------------------------------

void __fastcall TFstart::N21Click(TObject *Sender)
{
	Frep3->frxReport1->PrepareReport(true);
	Frep3->frxReport1->Print();
}
//---------------------------------------------------------------------------

void __fastcall TFstart::N22Click(TObject *Sender)
{
 	Frep3->frxReport1->PrepareReport(true);
	Frep3->ShowModal();
	Frep3->WindowState=wsMaximized;
}
//---------------------------------------------------------------------------

void __fastcall TFstart::PDF3Click(TObject *Sender)
{
	Frep3->frxReport1->Export(Frep3->frxPDFExport1);
}
//---------------------------------------------------------------------------

void __fastcall TFstart::CtrlF11Click(TObject *Sender)
{
	Fhelp->ShowModal();

}
//---------------------------------------------------------------------------

