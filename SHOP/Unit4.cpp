//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "cspin"
#pragma link "frxClass"
#pragma link "frxDBSet"
#pragma link "frxExportPDF"
#pragma resource "*.dfm"
TFsale *Fsale;
//---------------------------------------------------------------------------
__fastcall TFsale::TFsale(TComponent* Owner)
	: TForm(Owner)
{}
//---------------------------------------------------------------------------
void __fastcall TFsale::Button1Click(TObject *Sender)
{
	Fsale->Hide();
	DM->Tit->Filtered=false;
}
//---------------------------------------------------------------------------
void __fastcall TFsale::FormShow(TObject *Sender)
{
	ComboBox1->Items->Clear();
	DM->Tca->First();
	while(!DM->Tca->Eof){
		ComboBox1->Items->Add(DM->Tcaname_cat->AsString);
		DM->Tca->Next();
	}
}
//---------------------------------------------------------------------------


void __fastcall TFsale::ComboBox1Change(TObject *Sender)
{
	DM->Tit->Active=false;
	DM->Tit->Active=true;
	DM->Tit->Filtered=true;
}
//---------------------------------------------------------------------------

void __fastcall TFsale::FormClose(TObject *Sender, TCloseAction &Action)
{
	Action=caNone;
}
//---------------------------------------------------------------------------

void __fastcall TFsale::Button2Click(TObject *Sender)
{
	DM->Tit->Filtered=false;
}
//---------------------------------------------------------------------------

void __fastcall TFsale::Button4Click(TObject *Sender)
{
	Fbase->PC1->ActivePageIndex=0;
	DM->Tit->Filtered=false;
	Fbase->Show();
	Fbase->TabSheet2->Enabled=false;
	Fbase->TabSheet3->Enabled=false;
	Fbase->CheckBox4->Checked=true;
}
//---------------------------------------------------------------------------



void __fastcall TFsale::Button3Click(TObject *Sender)
{
	if(DM->Titavailable->AsInteger==0) ShowMessage("������ ��� � �������");
	else {
		CSpinEdit1->Value=1;
		LE4->Text=DM->Titname->AsString;
		DBGit->Enabled=false;
		int a=(DM->Titprice->AsInteger)*(CSpinEdit1->Value);
		Label2->Caption="����: "+IntToStr(a)+" ���.";
	}
}
//---------------------------------------------------------------------------
void __fastcall TFsale::Button5Click(TObject *Sender)
{
	LE3->Text=DM->TclFIO->AsString;
	DBGcl->Enabled=false;
}
//---------------------------------------------------------------------------

void __fastcall TFsale::CSpinEdit1Change(TObject *Sender)
{
	int kolvo=DM->Titavailable->Value;
	if(CSpinEdit1->Value>kolvo)CSpinEdit1->Value=kolvo;
	else if(CSpinEdit1->Value<1)CSpinEdit1->Value=1;
	int a=(DM->Titprice->AsInteger)*(CSpinEdit1->Value);
	Label2->Caption="����: "+IntToStr(a)+" ���.";
}
//---------------------------------------------------------------------------

void __fastcall TFsale::Button7Click(TObject *Sender)
{
    DM->Tit->Filtered=false;
	DBGcl->Enabled=true;
	LE3->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TFsale::Button8Click(TObject *Sender)
{
	DBGit->Enabled=true;
	DBGcl->Enabled=true;
	DM->Tsa->Active=false;
	DM->Tsa->Active=true;
	DM->Tsa->Last();
	{
		int id=1;
		if(!DM->Tsa->Bof) {
			id=DM->Tsaid_sale->AsInteger;
			id++;
		}
		DM->Tsa->Insert();
		DM->Tsa->Edit();
		DM->Tsaid_sale->AsInteger=id;
		Query1->ParamByName("Psale")->AsInteger=id;
	}
	DM->Tsaid_client->AsInteger=DM->Tclid_client->AsInteger;
	DM->Tsaid_item->AsInteger=DM->Titid_item->AsInteger;
	DM->Tsakol_vo->AsInteger=CSpinEdit1->Value;
	DM->Tsadate_sale->AsDateTime=Date();
    DM->Tsa->Post();

	DM->Tit->Edit();
	DM->Titavailable->AsInteger-=CSpinEdit1->Value;
    DM->Tit->Post();
	LE3->Clear();
	LE4->Clear();
	CSpinEdit1->Value=1;

	//�����
	frxReport1->Print();
	if(Application->MessageBoxW(String("������ ����...        �������������� ��� � ���� PDF?").w_str(),String("�����").w_str(),MB_YESNO+MB_ICONQUESTION)==IDYES){
		frxReport1->Export(frxPDFExport1);
	}
}
//---------------------------------------------------------------------------

void __fastcall TFsale::Button6Click(TObject *Sender)
{
	DBGit->Enabled=true;
	LE4->Clear();
	CSpinEdit1->Value=1;
	Label2->Caption="����: ���.";
}
//---------------------------------------------------------------------------


void __fastcall TFsale::LabeledEdit1Change(TObject *Sender)
{
	DM->Tcl->Active=false;
	DM->Tcl->Active=true;
	if(LabeledEdit1->Text=="")DM->Tcl->Filtered==false;
	else DM->Tcl->Filtered=true;
}
//---------------------------------------------------------------------------



