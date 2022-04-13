//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit6.h"
#include "Unit4.h"
#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFinput *Finput;
//---------------------------------------------------------------------------
__fastcall TFinput::TFinput(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TFinput::FormActivate(TObject *Sender)
{
	DM->Qadm1->Active=false;
	DM->Qadm2->Active=false;
	DM->Qadm3->Active=false;
	DM->Qadm4->Active=false;
	DM->Qadm1->Active=true;
	DM->Qadm2->Active=true;
	DM->Qadm3->Active=true;
	DM->Qadm4->Active=true;
}
//---------------------------------------------------------------------------


void __fastcall TFinput::DBGrid1CellClick(TColumn *Column)
{
	E11->Text=DM->Qadm1exam_1->AsInteger;
	E12->Text=DM->Qadm1exam_2->AsInteger;
}
//---------------------------------------------------------------------------

void __fastcall TFinput::DBGrid2CellClick(TColumn *Column)
{
	E21->Text=DM->Qadm2exam_1->AsInteger;
	E22->Text=DM->Qadm2exam_2->AsInteger;
}
//---------------------------------------------------------------------------

void __fastcall TFinput::DBGrid3CellClick(TColumn *Column)
{
	E31->Text=DM->Qadm1exam_1->AsInteger;
	E32->Text=DM->Qadm1exam_2->AsInteger;
}
//---------------------------------------------------------------------------

void __fastcall TFinput::DBGrid4CellClick(TColumn *Column)
{
	E41->Text=DM->Qadm4exam_1->AsInteger;
	E42->Text=DM->Qadm4exam_2->AsInteger;

}
//---------------------------------------------------------------------------


void __fastcall TFinput::BitBtn2Click(TObject *Sender)
{
	Finput->Close();
}
//---------------------------------------------------------------------------

void __fastcall TFinput::FormClose(TObject *Sender, TCloseAction &Action)
{
	if(CBflag->Checked&&Application->MessageBoxW(String("Введеные данные не будут сохранены. Вы уверены?").w_str(),String("Подтверждение действия").w_str(),MB_YESNO+MB_ICONEXCLAMATION)==IDNO){
		Action=caNone;
	}
	E11->Clear();
	E12->Clear();
	E21->Clear();
	E22->Clear();
	E31->Clear();
	E32->Clear();
	E41->Clear();
	E42->Clear();
	CB1->Checked=false;
	CB2->Checked=false;
	CB3->Checked=false;
	CB4->Checked=false;
	CBflag->Checked=false;
}
//---------------------------------------------------------------------------


void __fastcall TFinput::BitBtn3Click(TObject *Sender)
{
	if(CB1->Checked){
		DM->Tadm->Insert();
		DM->Tadm->Edit();
		DM->Tadm->FieldByName("id_enr")->AsInteger=DM->Tenrid_enr->AsInteger;
		DM->Tadmid_fac->AsInteger=1;
		DM->Tadmexam_1->AsInteger=StrToInt(E11->Text);
		DM->Tadmexam_2->AsInteger=StrToInt(E12->Text);
		DM->Tadm->Post();
	}
	if(CB2->Checked){
		DM->Tadm->Insert();
		DM->Tadm->Edit();
		DM->Tadm->FieldByName("id_enr")->AsInteger=DM->Tenrid_enr->AsInteger;
		DM->Tadmid_fac->AsInteger=2;
		DM->Tadmexam_1->AsInteger=StrToInt(E21->Text);
		DM->Tadmexam_2->AsInteger=StrToInt(E22->Text);
		DM->Tadm->Post();
	}
	if(CB3->Checked){
		DM->Tadm->Insert();
		DM->Tadm->Edit();
		DM->Tadm->FieldByName("id_enr")->AsInteger=DM->Tenrid_enr->AsInteger;
		DM->Tadmid_fac->AsInteger=3;
		DM->Tadmexam_1->AsInteger=StrToInt(E31->Text);
		DM->Tadmexam_2->AsInteger=StrToInt(E32->Text);
		DM->Tadm->Post();
	}
	if(CB4->Checked){
		DM->Tadm->Insert();
		DM->Tadm->Edit();
		DM->Tadm->FieldByName("id_enr")->AsInteger=DM->Tenrid_enr->AsInteger;
		DM->Tadmid_fac->AsInteger=4;
		DM->Tadmexam_1->AsInteger=StrToInt(E41->Text);
		DM->Tadmexam_2->AsInteger=StrToInt(E42->Text);
		DM->Tadm->Post();
	}
	E11->Clear();
	E12->Clear();
	E21->Clear();
	E22->Clear();
	E31->Clear();
	E32->Clear();
	E41->Clear();
	E42->Clear();
	CB1->Checked=false;
	CB2->Checked=false;
	CB3->Checked=false;
	CB4->Checked=false;
	CBflag->Checked=false;
	Finput->Hide();
}
//---------------------------------------------------------------------------


void __fastcall TFinput::FormShow(TObject *Sender)
{
	CBflag->Checked=true;
}
//---------------------------------------------------------------------------

