//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "cspin"
#pragma link "frxClass"
#pragma link "frxDBSet"
#pragma link "frxExportPDF"
#pragma resource "*.dfm"
TFbase *Fbase;
//---------------------------------------------------------------------------
__fastcall TFbase::TFbase(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFbase::Button1Click(TObject *Sender)
{
	Fbase->Hide();
	DM->Tsa->Filtered=false;
}
//---------------------------------------------------------------------------
void __fastcall TFbase::CheckBox1Click(TObject *Sender)
{
	if(CheckBox1->Checked){
		DBGit->ReadOnly=false;
		DBGca->ReadOnly=false;
		DBNit->Enabled=true;
		DBNca->Enabled=true;
	} else {
		DBGit->ReadOnly=true;
		DBGca->ReadOnly=true;
		DBNit->Enabled=false;
		DBNca->Enabled=false;
    }
}
//---------------------------------------------------------------------------








void __fastcall TFbase::FormShow(TObject *Sender)
{
	Button1->Enabled=true;
	CB1->Items->Clear();
	DM->Tca->First();
	while(!DM->Tca->Eof){
		CB1->Items->Add(DM->Tcaname_cat->AsString);
		DM->Tca->Next();
	}
}
//---------------------------------------------------------------------------


void __fastcall TFbase::Button3Click(TObject *Sender)
{
	DM->Tit->Active=false;
	DM->Tit->Active=true;
	DM->Tit->Last();
	{
		int id=1;
		if(DM->Tit->Bof) {
			DM->Tit->Insert();
			DM->Tit->Edit();
			DM->Titid_item->AsInteger=id;
		} else {
			id=DM->Titid_item->AsInteger;
			id++;
			DM->Tit->Insert();
			DM->Tit->Edit();
			DM->Titid_item->AsInteger=id;
		}
	}
	DM->Titid_cat->AsInteger=(CB1->ItemIndex)+1;
	DM->Titname->AsString=LE1->Text;
	DM->Titprice->AsInteger=StrToInt(LE2->Text);
	DM->Titavailable->AsInteger=CSE1->Value;
	DM->Tit->Post();

	CB1->ItemIndex=-1;
	LE1->Clear();
	LE2->Clear();
	CSE1->Value=0;
}
//---------------------------------------------------------------------------

void __fastcall TFbase::Button2Click(TObject *Sender)
{
	CB1->ItemIndex=(DM->Titid_cat->AsInteger)-1;
	LE1->Text=DM->Titname->AsString;
	LE2->Text=DM->Titprice->AsString;
	CSE1->Value=DM->Titavailable->AsInteger;

	Button2->Enabled=false;
	Button3->Enabled=false;
	Button4->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TFbase::Button4Click(TObject *Sender)
{
	DM->Tit->Active=false;
	DM->Tit->Active=true;

	DM->Tit->Edit();
	DM->Titid_cat->AsInteger=(CB1->ItemIndex)+1;
	DM->Titname->AsString=LE1->Text;
	DM->Titprice->AsInteger=StrToInt(LE2->Text);
	DM->Titavailable->AsInteger=CSE1->Value;
	DM->Tit->Post();

	CB1->ItemIndex=-1;
	LE1->Clear();
	LE2->Clear();
	CSE1->Value=0;


	Button2->Enabled=true;
	Button3->Enabled=true;
	Button4->Enabled=false;
}
//---------------------------------------------------------------------------


void __fastcall TFbase::CheckBox2Click(TObject *Sender)
{
	if(CheckBox2->Checked){
		DBGcl->ReadOnly=false;
		DBNcl->Enabled=true;
	} else {
		DBGcl->ReadOnly=true;
		DBNcl->Enabled=false;
	}
}
//---------------------------------------------------------------------------

void __fastcall TFbase::Button7Click(TObject *Sender)
{
	DM->Tcl->Active=false;
	DM->Tcl->Active=true;
	DM->Tcl->Last();
	{
		int id=1;
		if(DM->Tcl->Bof) {
			DM->Tcl->Insert();
			DM->Tcl->Edit();
			DM->Tclid_client->AsInteger=id;
		} else {
			id=DM->Tclid_client->AsInteger;
			id++;
			DM->Tcl->Insert();
			DM->Tcl->Edit();
			DM->Tclid_client->AsInteger=id;
		}
	}
	DM->TclFIO->AsString=Edit1->Text;
	DM->Tclphone->AsString=MaskEdit1->Text;
	DM->Tcl->Post();

	Edit1->Clear();
	MaskEdit1->Clear();
	if(CheckBox4->Checked){
		CheckBox4->Checked=false;
		TabSheet2->Enabled=true;
		TabSheet3->Enabled=true;
		Fbase->Hide();
	}
}
//---------------------------------------------------------------------------


void __fastcall TFbase::Button9Click(TObject *Sender)
{
	if(Application->MessageBoxW(String("������� ���������� �������?").w_str(),String("�����").w_str(),MB_YESNO+MB_ICONQUESTION)==IDYES){
		DM->Tit->Delete();
	}
	DM->Tit->Last();
}
//---------------------------------------------------------------------------

void __fastcall TFbase::Button8Click(TObject *Sender)
{
	if(Application->MessageBoxW(String("������� ���������� ���������?").w_str(),String("�����").w_str(),MB_YESNO+MB_ICONQUESTION)==IDYES){
		DM->Tca->Delete();
	}
	DM->Tca->Last();
}
//---------------------------------------------------------------------------


void __fastcall TFbase::Button10Click(TObject *Sender)
{
	if(Application->MessageBoxW(String("������� ����������� �������?").w_str(),String("�����").w_str(),MB_YESNO+MB_ICONQUESTION)==IDYES){
		DM->Tcl->Delete();
	}
	DM->Tcl->Last();
}
//---------------------------------------------------------------------------

void __fastcall TFbase::Button5Click(TObject *Sender)
{
	DM->Tcl->Active=false;
	DM->Tcl->Active=true;

	Edit1->Text=DM->TclFIO->AsString;
	MaskEdit1->Text=DM->Tclphone->AsString;

	Button5->Enabled=false;
	Button6->Enabled=true;
	Button7->Enabled=false;

}
//---------------------------------------------------------------------------

void __fastcall TFbase::Button6Click(TObject *Sender)
{
	DM->Tcl->Active=false;
	DM->Tcl->Active=true;

	DM->Tcl->Edit();
	DM->TclFIO->AsString=Edit1->Text;
	DM->Tclphone->AsString=MaskEdit1->Text;
	DM->Tcl->Post();

	Button5->Enabled=true;
	Button6->Enabled=false;
	Button7->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TFbase::CheckBox3Click(TObject *Sender)
{
	if(CheckBox3->Checked){
		DBGsa->ReadOnly=false;
		DBNsa->Enabled=true;
	} else {
		DBGsa->ReadOnly=true;
		DBNsa->Enabled=false;
	}
}
//---------------------------------------------------------------------------

void __fastcall TFbase::Button11Click(TObject *Sender)
{
	DM->Tsa->Active=false;
	DM->Tsa->Active=true;
	DM->Tsa->Filtered=true;
	Button12->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TFbase::Button12Click(TObject *Sender)
{
	DM->Tsa->Filtered=false;
	Button12->Enabled=false;
}
//---------------------------------------------------------------------------

void __fastcall TFbase::FormClose(TObject *Sender, TCloseAction &Action)
{
	Action=caNone;
}
//---------------------------------------------------------------------------

void __fastcall TFbase::Button13Click(TObject *Sender)
{
	frxReport1->Print();
}
//---------------------------------------------------------------------------

void __fastcall TFbase::Button14Click(TObject *Sender)
{
	frxReport1->Export(frxPDFExport1);
}
//---------------------------------------------------------------------------

