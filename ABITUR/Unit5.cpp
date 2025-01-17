//---------------------------------------------------------------------------


#pragma hdrstop

#include "Unit5.h"
#include "Unit4.h"
#include "Unit6.h"
#include "Unit10.h"
#include "Unit8.h"
#include "Unit9.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma classgroup "Vcl.Controls.TControl"
#pragma resource "*.dfm"
TDM *DM;
//---------------------------------------------------------------------------
__fastcall TDM::TDM(TComponent* Owner)
	: TDataModule(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TDM::TenrFilterRecord(TDataSet *DataSet, bool &Accept)
{
	/*if(Efio->Text!=""&&Etitle->Text=="")Accept=Q1fio->AsString==Efio->Text;
	else if(Etitle->Text!=""&&Efio->Text=="")Accept=(Q1title->AsString==Etitle->Text);
	else Accept=Q1fio->AsString==Efio->Text && Q1title->AsString==Etitle->Text;
	if(CSEquiz->Value!=0)Accept=Q1quiz->Value==CSEquiz->Value;     */

	if(Finputedit->CBflastn->Checked)Accept=Tenrlast_name->AsString==Finputedit->Eflastn->Text;
	if(Finputedit->CBfname->Checked)Accept=Accept&&Tenrfirst_name->AsString==Finputedit->Efname->Text;
	if(Finputedit->�Bfpatronymicn->Checked)Accept=Accept&&Tenrpatronymic_name->AsString==Finputedit->Efpatronymicn->Text;
	if(Finputedit->CBfbday->Checked)Accept=Accept&&Tenrdate_birth->AsDateTime>=Finputedit->DTPfbdayfrom->DateTime&&Tenrdate_birth->AsDateTime<=Finputedit->DTPfbdayto->DateTime;
	if(Finputedit->RG3fsex->ItemIndex==1)Accept=Accept&&Tenrsex->AsString=="���";
	else if (Finputedit->RG3fsex->ItemIndex==2) Accept=Accept&&Tenrsex->AsString=="���";
	if(Finputedit->RG4fdoc->ItemIndex==1)Accept=Accept&&Tenrdoc_edu->AsString=="������";
	else if (Finputedit->RG4fdoc->ItemIndex==2) Accept=Accept&&Tenrdoc_edu->AsString=="��������";

	if(Finputedit->CBfcitizen->Checked){
		for (int i=0; i<Finputedit->CLBfcitizen->Items->Count;i++){
			if(Finputedit->CLBfcitizen->Selected[i])Accept=Accept&&Tenrcitizen->AsString==Finputedit->CLBfcitizen->Items->Strings[i];
		}
	}
	if(Finputedit->CBfedu->Checked){
		for (int i=0; i<Finputedit->CLBfedu->Items->Count;i++){
			if(Finputedit->CLBfedu->Selected[i])Accept=Accept&&Tenredu->AsString==Finputedit->CLBfedu->Items->Strings[i];
		}
	}


}
//---------------------------------------------------------------------------


void __fastcall TDM::TemtFilterRecord(TDataSet *DataSet, bool &Accept)
{
	if(Finputedit->CBfexams->Checked)Accept=Temtresults_exam->AsInteger>=StrToInt(Finputedit->LEex1->Text)&&Temtresults_exam->AsInteger<=StrToInt(Finputedit->LEex2->Text);

	if(Finputedit->RGfbud_com->ItemIndex==1)Accept=Accept&&Temtbud_com->AsString=="������";
	else if (Finputedit->RGfbud_com->ItemIndex==2) Accept=Accept&&Temtbud_com->AsString!="������";
	if(Finputedit->CBffac->Checked)Accept=Accept&&Temtid_fac->AsInteger==(Finputedit->LBffac->ItemIndex+1);

}
//---------------------------------------------------------------------------


