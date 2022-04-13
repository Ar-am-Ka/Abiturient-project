//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit5.h"
#include "Unit6.h"
#include "Unit7.h"
#include "Unit8.h"
#include "Unit9.h"
#include "Unit10.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFinputedit *Finputedit;
//---------------------------------------------------------------------------
__fastcall TFinputedit::TFinputedit(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TFinputedit::Button1Click(TObject *Sender)
{
	DM->Tenr->Active=false;
	Finputedit->Close();
}
//---------------------------------------------------------------------------

void __fastcall TFinputedit::BitBtn1Click(TObject *Sender)
{
	switch(RG1mode->ItemIndex){
		case(0):
			if(Ecitizen->ItemIndex==-1 || CBedu->ItemIndex==-1 || CBdoc_edu->ItemIndex==-1){
				Application->MessageBoxW(String("�������� ������������ �������� �� ���������� �������!").w_str(),String("������").w_str(),MB_OK+MB_ICONWARNING);
				break;
			}
			DM->Tenr->Last();
			{
			int i=DM->Tenrid_enr->Value+1;
			DM->Tenr->Insert();
			DM->Tenr->Edit();
			DM->Tenrid_enr->AsInteger=i;
			}
			DM->Tenrfirst_name->AsString=Ename->Text;
			DM->Tenrlast_name->AsString=Elastn->Text;
			DM->Tenrpatronymic_name->AsString=Epatr->Text;
			if(RG2sex->ItemIndex==0) DM->Tenrsex->AsString="���";
			else DM->Tenrsex->AsString="���";
			DM->Tenrdate_birth->AsDateTime=DTPbirthdate->DateTime;
			DM->Tenrcitizen->AsString=Ecitizen->Items->Strings[Ecitizen->ItemIndex];
			DM->Tenraddress->AsString=Eaddres->Text;
			DM->Tenrphone->AsString=Ephone->Text;
			DM->Tenredu->AsString=CBedu->Items->Strings[CBedu->ItemIndex];
			DM->Tenrdoc_edu->AsString=CBdoc_edu->Items->Strings[CBdoc_edu->ItemIndex];
			if(CBhonors->Checked==true) DM->Tenrhonors->AsString="1";
			else DM->Tenrhonors->AsString="0";
			DM->Tenr->Post();
			BitBtn4Click(Sender);

			Finput->Show();
			BitBtn4Click(Sender);

			Eidenr->Clear();
			Ename->Clear();
			Elastn->Clear();
			Epatr->Clear();
			RG2sex->ItemIndex=0;
			DTPbirthdate->DateTime=Date();
			Ecitizen->ItemIndex=-1;
			Eaddres->Clear();
			Ephone->Clear();
			CBedu->ItemIndex=-1;
			CBdoc_edu->ItemIndex=-1;
			CBhonors->Checked=false;
			Elastn->SetFocus();
			Finput->Show();
			Finput->CBflag->Checked=true;


			break;
		case(1):
			if(Ecitizen->ItemIndex==-1 || CBedu->ItemIndex==-1 || CBdoc_edu->ItemIndex==-1){
				Application->MessageBoxW(String("�������� ������������ �������� �� ���������� �������!").w_str(),String("������").w_str(),MB_OK+MB_ICONWARNING);
				break;
			}
			DM->Tenr->Edit();
			DM->Tenrfirst_name->AsString=Ename->Text;
			DM->Tenrlast_name->AsString=Elastn->Text;
			DM->Tenrpatronymic_name->AsString=Epatr->Text;
			if(RG2sex->ItemIndex==0) DM->Tenrsex->AsString="���";
			else DM->Tenrsex->AsString="���";
			DM->Tenrdate_birth->AsDateTime=DTPbirthdate->DateTime;
			DM->Tenrcitizen->AsString=Ecitizen->Items->Strings[Ecitizen->ItemIndex];
			DM->Tenraddress->AsString=Eaddres->Text;
			DM->Tenrphone->AsString=Ephone->Text;
			DM->Tenredu->AsString=CBedu->Items->Strings[CBedu->ItemIndex];
			DM->Tenrdoc_edu->AsString=CBdoc_edu->Items->Strings[CBdoc_edu->ItemIndex];
			/*
			switch(CBedu->ItemIndex){
				case(0): DM->Tenredu->AsString="c������ �����"; break;
				case(1): DM->Tenredu->AsString="������� ����������������"; break;
				case(2): DM->Tenredu->AsString="��������� ����������������"; break;
			}
			switch(CBdoc_edu->ItemIndex){
				case(0): DM->Tenrdoc_edu->AsString="��������"; break;
				case(1): DM->Tenrdoc_edu->AsString="������"; break;
			}  */
			if(CBhonors->Checked==true) DM->Tenrhonors->AsString="1";
			else DM->Tenrhonors->AsString="0";
			DM->Tenr->Post();

			Eidenr->Clear();
			Ename->Clear();
			Elastn->Clear();
			Epatr->Clear();
			RG2sex->ItemIndex=0;
			DTPbirthdate->DateTime=Date();
			Ecitizen->ItemIndex=-1;
			Eaddres->Clear();
			Ephone->Clear();
			CBedu->ItemIndex=-1;
			CBdoc_edu->ItemIndex=-1;;
			CBhonors->Checked=false;
			//BitBtn4Click(Sender); ���������� ������ ��������� ������� �� ��������� ������


			break;

	}
}
//---------------------------------------------------------------------------

void __fastcall TFinputedit::PG1Change(TObject *Sender)
{/*
	switch(PG1->ActivePageIndex){
		case(0):
			DM->Tenr->Close();
			DM->Tenr->Open();
			DM->Tenr->Active=false;
			DM->Tenr->Active=true;
			Eidenr->ShowHint=true;
			CLBfcitizen->Items->Clear();
			DM->Tenr->First();
			bool flag;
				while(!DM->Tenr->Eof){
					flag=true;
					for(int i=0;i<CLBfcitizen->Count;i++){
						if (CLBfcitizen->Items->Strings[i]==DM->Tenrcitizen->AsString) {
							flag=false;
							break;
						}
					}
					if(flag)CLBfcitizen->Items->Add(DM->Tenrcitizen->AsString);
					DM->Tenr->Next();
				}
				//Label2->Caption=ListBox1->Items->Strings[ListBox1->ItemIndex];
			break;
		case(1):
			//Fstart->Tenr->Active=false;
			break;
		case(2):
			DM->Tadm->Active=false;
			DM->Tadm->Active=true;
			DM->Temt->Active=false;
			DM->Temt->Active=true;
			DM->Tadm->First();    //PROGRESS BAR
			{
				int cnt=0;
				while(!DM->Tadm->Eof){
					cnt++;
					DM->Tadm->Next();
				}
				DM->Tadm->First();
			PB1->Min=0;
			PB1->Max=cnt;
			PB1->Position=0;
			}
		}

		*/
}
void __fastcall TFinputedit::BitBtn2Click(TObject *Sender)
{
	for(int i=0;i<5;i++){
		try{
			if(Application->MessageBoxW(String("�� ������������� ������ ������� ������ ������?").w_str(),String("������������� ��������").w_str(),MB_YESNO+MB_ICONQUESTION)==IDYES){
				int id=DM->Tenrid_enr->AsInteger;
				DM->Tadm->First();
				DM->Temt->First();
				do {
					if(DM->Tadmid_enr->AsInteger==id) DM->Tadm->Delete();
					DM->Tadm->Next();
				} while(!DM->Tadm->Eof);
				do {
					if(DM->Temtid_enr->AsInteger==id) DM->Temt->Delete();
					DM->Temt->Next();
				} while(!DM->Temt->Eof);
				DM->Tenr->Delete();
				break;
			} else break;
		} catch (Exception *ex) {}
	}
}
//---------------------------------------------------------------------------


void __fastcall TFinputedit::EidenrEnter(TObject *Sender)
{
	if(RG1mode->ItemIndex==0){
		DM->Tenr->Last();
		Eidenr->Text=IntToStr(DM->Tenrid_enr->Value+1);
	}
}
//---------------------------------------------------------------------------


void __fastcall TFinputedit::DBG1enrCellClick(TColumn *Column)
{
	if(RG1mode->ItemIndex==1){
			Eidenr->Text=DM->Tenrid_enr->AsInteger;
			Ename->Text=DM->Tenrfirst_name->AsString;
			Elastn->Text=DM->Tenrlast_name->AsString;
			Epatr->Text=DM->Tenrpatronymic_name->AsString;
			if(DM->Tenrsex->AsString=="���") RG2sex->ItemIndex=0;
			else RG2sex->ItemIndex=1;
			DTPbirthdate->DateTime=DM->Tenrdate_birth->AsDateTime;
			Ecitizen->Text=DM->Tenrcitizen->AsString;
			Eaddres->Text=DM->Tenraddress->AsString;
			Ephone->Text=DM->Tenrphone->AsString;
			CBedu->Text=DM->Tenredu->AsString;
			CBdoc_edu->Text=DM->Tenrdoc_edu->AsString;
			if(DM->Tenrhonors->AsString==0) CBhonors->Checked=false;
			else CBhonors->Checked=true;
	}//end if
}
//---------------------------------------------------------------------------


void __fastcall TFinputedit::EslastnChange(TObject *Sender)
{
	DM->Tenr->IndexFieldNames="last_name";
	DM->Tenr->FindNearest(&TVarRec(Eslastn->Text),0);
}
//---------------------------------------------------------------------------


void __fastcall TFinputedit::EsnameChange(TObject *Sender)
{
	DM->Tenr->IndexFieldNames="first_name";
	DM->Tenr->FindNearest(&TVarRec(Esname->Text),0);
}
//---------------------------------------------------------------------------

void __fastcall TFinputedit::EspatronymicnChange(TObject *Sender)
{
	DM->Tenr->IndexFieldNames="patronymic_name";
	DM->Tenr->FindNearest(&TVarRec(Espatronymicn->Text),0);
}
//---------------------------------------------------------------------------

void __fastcall TFinputedit::EsphoneChange(TObject *Sender)
{
	DM->Tenr->IndexFieldNames="phone";
	DM->Tenr->FindNearest(&TVarRec(Esphone->Text),0);
}
//---------------------------------------------------------------------------




void __fastcall TFinputedit::Button4Click(TObject *Sender)
{
	Finput->Show();
	Finput->CBflag->Checked=true;
}
//---------------------------------------------------------------------------


void __fastcall TFinputedit::FormActivate(TObject *Sender)
{
	PG1->ActivePageIndex=0;
	DM->Tenr->Active=false;
	DM->Tenr->Active=true;
	Eidenr->ShowHint=true;
	//DBG1enr->ReadOnly=true;
	DM->Tenr->First();
	CLBfcitizen->Items->Clear();
	bool flag;
		while(!DM->Tenr->Eof){
			flag=true;
				for(int i=0;i<CLBfcitizen->Count;i++){
					if (CLBfcitizen->Items->Strings[i]==DM->Tenrcitizen->AsString) {
						flag=false;
						break;
					}
				}
				if(flag)CLBfcitizen->Items->Add(DM->Tenrcitizen->AsString);
				DM->Tenr->Next();
		}
}
//---------------------------------------------------------------------------

void __fastcall TFinputedit::BitBtn4Click(TObject *Sender)
{
	CLBfcitizen->Items->Clear();
	bool flag;
	DM->Tenr->First();
		while(!DM->Tenr->Eof){
			flag=true;
				for(int i=0;i<CLBfcitizen->Count;i++){
					if (CLBfcitizen->Items->Strings[i]==DM->Tenrcitizen->AsString) {
						flag=false;
						break;
					}
				}
				if(flag)CLBfcitizen->Items->Add(DM->Tenrcitizen->AsString);
				DM->Tenr->Next();
		}
	DM->Tenr->Last();
}
//---------------------------------------------------------------------------
 


void __fastcall TFinputedit::DBNavigator1Click(TObject *Sender, TNavigateBtn Button)

{
	if(RG1mode->ItemIndex==1){
		Eidenr->Text=DM->Tenrid_enr->AsInteger;
		Ename->Text=DM->Tenrfirst_name->AsString;
		Elastn->Text=DM->Tenrlast_name->AsString;
		Epatr->Text=DM->Tenrpatronymic_name->AsString;
		if(DM->Tenrsex->AsString=="���") RG2sex->ItemIndex=0;
		else RG2sex->ItemIndex=1;
		DTPbirthdate->DateTime=DM->Tenrdate_birth->AsDateTime;
		Ecitizen->Text=DM->Tenrcitizen->AsString;
		Eaddres->Text=DM->Tenraddress->AsString;
		Ephone->Text=DM->Tenrphone->AsString;
		CBedu->Text=DM->Tenredu->AsString;
		CBdoc_edu->Text=DM->Tenrdoc_edu->AsString;
		if(DM->Tenrhonors->AsString==0) CBhonors->Checked=false;
		else CBhonors->Checked=true;
	}
}
//---------------------------------------------------------------------------


void __fastcall TFinputedit::DBG1enrKeyPress(TObject *Sender, System::WideChar &Key)

{
	if(Key==0x45 && RG1mode->ItemIndex==1){
		Eidenr->Text=DM->Tenrid_enr->AsInteger;
		Ename->Text=DM->Tenrfirst_name->AsString;
		Elastn->Text=DM->Tenrlast_name->AsString;
		Epatr->Text=DM->Tenrpatronymic_name->AsString;
		if(DM->Tenrsex->AsString=="���") RG2sex->ItemIndex=0;
		else RG2sex->ItemIndex=1;
		DTPbirthdate->DateTime=DM->Tenrdate_birth->AsDateTime;
		Ecitizen->Text=DM->Tenrcitizen->AsString;
		Eaddres->Text=DM->Tenraddress->AsString;
		Ephone->Text=DM->Tenrphone->AsString;
		CBedu->Text=DM->Tenredu->AsString;
		CBdoc_edu->Text=DM->Tenrdoc_edu->AsString;
		CBhonors->Checked=false;
	}
}
//---------------------------------------------------------------------------

void __fastcall TFinputedit::DBGadmCellClick(TColumn *Column)
{
	LEidenr->Text=DM->Tadm->FieldByName("id_enr")->AsString;
	LEfi->Text=DM->Tadmlast_name->AsString+" "+DM->Tadmfirst_name->AsString;
	Ltitle_fac->Caption=DM->Tadmtitle_fac->AsString;
	LEex1->EditLabel->Caption=DM->Tadmname_exam1->AsString;
	LEex1->Text=IntToStr(DM->Tadmexam_1->AsInteger);
	LEex2->EditLabel->Caption=DM->Tadmname_exam2->AsString;
	LEex2->Text=IntToStr(DM->Tadmexam_2->AsInteger);

}
//---------------------------------------------------------------------------

void __fastcall TFinputedit::DBNadm2Click(TObject *Sender, TNavigateBtn Button)

{
	LEidenr->Text=DM->Tadm->FieldByName("id_enr")->AsString;
	LEfi->Text=DM->Tadmlast_name->AsString+" "+DM->Tadmfirst_name->AsString;
	LEex1->EditLabel->Caption=DM->Tadmname_exam1->AsString;
	LEex1->Text=IntToStr(DM->Tadmexam_1->AsInteger);
	LEex2->EditLabel->Caption=DM->Tadmname_exam2->AsString;
	LEex2->Text=IntToStr(DM->Tadmexam_2->AsInteger);
}
//---------------------------------------------------------------------------



void __fastcall TFinputedit::CBadmClick(TObject *Sender)
{
	if(CBadm->Checked){
		DBGadm->ReadOnly=false;
		DBNadm2->Enabled=true;
	}else{

		DBGadm->ReadOnly=true;
		DBNadm2->Enabled=false;
	}
}
//---------------------------------------------------------------------------

void __fastcall TFinputedit::CBfacClick(TObject *Sender)
{

	if(CBadm->Checked){
	//DM->Tfac->ReadOnly=false;
		DBGfac->ReadOnly=false;
		DBNfac1->Enabled=true;
		DBNfac2->Enabled=true;
		DBNfac1->Visible=true;
		DBNfac2->Visible=true;

	}else{


		DBGfac->ReadOnly=true;
		DBNfac1->Enabled=false;
		DBNfac2->Enabled=false;
		DBNfac1->Visible=false;
		DBNfac2->Visible=false;

	}

}
//---------------------------------------------------------------------------

void __fastcall TFinputedit::BitBtn5Click(TObject *Sender)
{
	PB1->Position=0;
	int cntEnr=0,cntEmt=0,cntEmtBud=0,cntEmtCom=0;
	DM->Tadm->First();
	while(!DM->Tadm->Eof){
		PB1->StepBy(1);		//PROGRESS BAR
		cntEnr++;
		if(DM->Tadmexam_1->AsInteger+DM->Tadmexam_2->AsInteger<50){
			DM->Tadm->Next();
			continue;
		}

		try {
			DM->Temt->Insert();
			DM->Temtid_enr->Value=DM->Tadmid_enr->Value;
			DM->Temtid_fac->Value=DM->Tadmid_fac->Value;
			DM->Temtresults_exam->AsInteger=(DM->Tadmexam_1->AsInteger)+(DM->Tadmexam_2->AsInteger);
			DM->Temthonors->Value=DM->Tadmhonors->Value;
			int value=DM->Temtresults_exam->AsInteger;
			if (value>=100 || DM->Tadmhonors->AsString=="1"){
				cntEmtBud++;
				DM->Temtbud_com->AsString="������";
			}
			else{
				cntEmtCom++;
				DM->Temtbud_com->AsString="���������";
			}

			DM->Temt->Post();
			DM->Tadm->Next();
			cntEmt++;
		} catch (Exception *ex) {
			DM->Temt->Cancel();

			DM->Tadm->Next();
		}
	}
	LcntEnr->Caption=IntToStr(cntEnr);
	LcntEmt->Caption=IntToStr(cntEmt);
	LcntEmtBud->Caption=IntToStr(cntEmtBud);
	LcntEmtCom->Caption=IntToStr(cntEmtCom);
	//PB1->Position=0;      //PROGRESS BAR
	//ShowMessage("�������� ���������! ���������� �������: "+cntEnr);
}
//---------------------------------------------------------------------------

void __fastcall TFinputedit::BitBtn6Click(TObject *Sender)
{
	DM->Tadm->First();
	while(!DM->Tadm->Eof){

			try {
				DM->Temt->Delete();
			} catch (Exception *ex) {
				break;
			}
	}
}
//---------------------------------------------------------------------------

void __fastcall TFinputedit::DBNadm1Click(TObject *Sender, TNavigateBtn Button)
{
	LEidenr->Text=DM->Tadm->FieldByName("id_enr")->AsString;
	LEfi->Text=DM->Tadmlast_name->AsString+" "+DM->Tadmfirst_name->AsString;
	Ltitle_fac->Caption=DM->Tadmtitle_fac->AsString;
	LEex1->EditLabel->Caption=DM->Tadmname_exam1->AsString;
	LEex1->Text=IntToStr(DM->Tadmexam_1->AsInteger);
	LEex2->EditLabel->Caption=DM->Tadmname_exam2->AsString;
	LEex2->Text=IntToStr(DM->Tadmexam_2->AsInteger);
}
//---------------------------------------------------------------------------

void __fastcall TFinputedit::DBGemtCellClick(TColumn *Column)
{
	LEidenr2->Text=DM->Temtid_enr->AsString;
	LEfi2->Text=DM->Temtlast_name->AsString+" "+DM->Temtfirst_name->AsString;
	Ltitle_fac2->Caption=DM->Temttitle_fac->AsString;
	Eresults_exam->Text=IntToStr(DM->Temtresults_exam->AsInteger);
	Lbud_com->Caption=DM->Temtbud_com->AsString;
}
//---------------------------------------------------------------------------



//---------------------------------------------------------------------------


void __fastcall TFinputedit::DBGfacDblClick(TObject *Sender)
{
	DM->Tadm->Filtered=false;
	DM->Tadm->Filter="id_fac="+DM->Tfacid_fac->AsString;
	DM->Tadm->Filtered=true;
	Bunfil->Enabled=true;


}
//---------------------------------------------------------------------------



void __fastcall TFinputedit::TBfex1Change(TObject *Sender)
{
	LEfex1->Text=IntToStr(TBfex1->Position*2);
}
//---------------------------------------------------------------------------

void __fastcall TFinputedit::TBfex2Change(TObject *Sender)
{
	LEfex2->Text=IntToStr(TBfex2->Position*2);
}
//---------------------------------------------------------------------------



void __fastcall TFinputedit::DBNavigator3Click(TObject *Sender, TNavigateBtn Button)

{
	LEidenr2->Text=DM->Temtid_enr->AsString;
	LEfi2->Text=DM->Temtlast_name->AsString+" "+DM->Temtfirst_name->AsString;
	Ltitle_fac2->Caption=DM->Temttitle_fac->AsString;
	Eresults_exam->Text=IntToStr(DM->Temtresults_exam->AsInteger);
	Lbud_com->Caption=DM->Temtbud_com->AsString;
}
//---------------------------------------------------------------------------

void __fastcall TFinputedit::BitBtn7Click(TObject *Sender)
{
	if(DM->Temt->Filtered){
		DM->Temt->Filtered=false;
		BitBtn7->Caption="�������� �������";
	}
	else{
		DM->Temt->Filtered=true;
		BitBtn7->Caption="��������� �������";
	}
}
//---------------------------------------------------------------------------

void __fastcall TFinputedit::LEfex1Change(TObject *Sender)
{
	if(LEfex1->Text=="")LEfex1->Text="0";
	else if(StrToInt(LEfex1->Text)>200)LEfex1->Text="200";
	else if (StrToInt(LEfex1->Text)>StrToInt(LEfex2->Text)) LEfex1->Text=StrToInt(LEfex2->Text);
	TBfex1->Position=StrToInt(LEfex1->Text)/2;
}
//---------------------------------------------------------------------------

void __fastcall TFinputedit::LEfex2Change(TObject *Sender)
{
	if(LEfex2->Text=="")LEfex2->Text="0";
	else if(StrToInt(LEfex2->Text)>200)LEfex2->Text="200";
	else if (StrToInt(LEfex2->Text)<StrToInt(LEfex1->Text)) LEfex2->Text=StrToInt(LEfex1->Text);
	TBfex2->Position=StrToInt(LEfex2->Text)/2;
}
//---------------------------------------------------------------------------

void __fastcall TFinputedit::CBemtClick(TObject *Sender)
{
	if(CBemt->Checked){
		DBGemt->ReadOnly=false;
		DBNemt->Enabled=true;
	} else {
		DBGemt->ReadOnly=true;
		DBNemt->Enabled=false;
	}
}
//--------------SHEET-1---ENTER--------------------------------


void __fastcall TFinputedit::TabSheet1Enter(TObject *Sender)
{
	DM->Tenr->Close();
	DM->Tenr->Open();
	DM->Tenr->Active=false;
	DM->Tenr->Active=true;
	Eidenr->ShowHint=true;
	CLBfcitizen->Items->Clear();
	DM->Tenr->First();
	bool flag;
	while(!DM->Tenr->Eof){
		flag=true;
		for(int i=0;i<CLBfcitizen->Count;i++){
			if (CLBfcitizen->Items->Strings[i]==DM->Tenrcitizen->AsString) {
				flag=false;
				break;
			}
		}
		if(flag)CLBfcitizen->Items->Add(DM->Tenrcitizen->AsString);
		DM->Tenr->Next();
	}
}

//--------------SHEET-2---ENTER-------------------------------------------------------

void __fastcall TFinputedit::TabSheet2Enter(TObject *Sender)
{
	DM->Tfac->Active=false;
	DM->Tfac->Active=true;
	DM->Tadm->Active=false;
	DM->Tadm->Active=true;
}


//---------------SHEET-3---ENTER-------------------------------------------------------
void __fastcall TFinputedit::TabSheet3Enter(TObject *Sender)
{
	DM->Tadm->Active=false;
	DM->Tadm->Active=true;
	DM->Tfac->Active=false;
	DM->Tfac->Active=true;
	DM->Tadm->First();    //PROGRESS BAR
	{
		int cnt=0;
		while(!DM->Tadm->Eof){
			cnt++;
			DM->Tadm->Next();
		}
		DM->Tadm->First();
		PB1->Min=0;
		PB1->Max=cnt;
		PB1->Position=0;
	}
}


//--------------SHEET-1---EXIT-------------------------------------------------------
void __fastcall TFinputedit::TabSheet1Exit(TObject *Sender)
{
	DM->Tenr->Active=false;
	Eidenr->ShowHint=false;
	Finput->Close();
}

//--------------SHEET-3---EXIT---------------------------------------------------------
void __fastcall TFinputedit::TabSheet3Exit(TObject *Sender)
{
	PB1->Position=0;
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------

void __fastcall TFinputedit::BitBtn8Click(TObject *Sender)
{
/*	if(DM->Tadm->Filtered){
		DM->Tadm->Filtered=false;
	  //	DM->Tadm->Filter="";
		BitBtn8->Caption="��������";
	}else{
	  //	DM->Tadm->Filter="last_name="+LEslastnadm->Text;
		DM->Tadm->Filtered=true;
		BitBtn8->Caption="��������";
	}
	*/
}
//---------------------------------------------------------------------------

void __fastcall TFinputedit::LEslastnadmChange(TObject *Sender)
{
//	DM->Tadm->IndexFieldNames="last_name";
  //	DM->Tadm->FindNearest(&TVarRec(LEslastnadm->Text),0);
}
//---------------------------------------------------------------------------







void __fastcall TFinputedit::N2Click(TObject *Sender)
{
	Frep1->frxR1->PrepareReport(true);
	Frep1->frxR1->Print();
}
//---------------------------------------------------------------------------

void __fastcall TFinputedit::PDF2Click(TObject *Sender)
{
	Frep1->frxR1->Export(Frep1->frxPDFExp1);
}
//---------------------------------------------------------------------------

void __fastcall TFinputedit::N3Click(TObject *Sender)
{
	Frep1->frxR1->PrepareReport(true);
	Frep1->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFinputedit::N5Click(TObject *Sender)
{
	Frep2->frxReport1->PrepareReport(true);
	Frep2->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFinputedit::N4Click(TObject *Sender)
{
	Frep2->frxReport1->PrepareReport(true);
	Frep2->frxReport1->Print();
}
//---------------------------------------------------------------------------

void __fastcall TFinputedit::PDF3Click(TObject *Sender)
{
	Frep2->frxReport1->Export(Frep2->frxPDFExport1);
}
//---------------------------------------------------------------------------

void __fastcall TFinputedit::BunfilClick(TObject *Sender)
{
	DM->Tadm->Filtered=false;
	Bunfil->Enabled=false;
}
//---------------------------------------------------------------------------


void __fastcall TFinputedit::FormShow(TObject *Sender)
{
	WindowState=wsMaximized;
}
//---------------------------------------------------------------------------

void __fastcall TFinputedit::RG1modeClick(TObject *Sender)
{
	if(RG1mode->ItemIndex==1){
			Eidenr->Text=DM->Tenrid_enr->AsInteger;
			Ename->Text=DM->Tenrfirst_name->AsString;
			Elastn->Text=DM->Tenrlast_name->AsString;
			Epatr->Text=DM->Tenrpatronymic_name->AsString;
			if(DM->Tenrsex->AsString=="���") RG2sex->ItemIndex=0;
			else RG2sex->ItemIndex=1;
			DTPbirthdate->DateTime=DM->Tenrdate_birth->AsDateTime;
			Ecitizen->Text=DM->Tenrcitizen->AsString;
			Eaddres->Text=DM->Tenraddress->AsString;
			Ephone->Text=DM->Tenrphone->AsString;
			CBedu->Text=DM->Tenredu->AsString;
			CBdoc_edu->Text=DM->Tenrdoc_edu->AsString;
			if(DM->Tenrhonors->AsString==0) CBhonors->Checked=false;
			else CBhonors->Checked=true;
	}
}
//---------------------------------------------------------------------------



void __fastcall TFinputedit::MenuItem2Click(TObject *Sender)
{
	Frep3->frxReport1->PrepareReport(true);
	Frep3->frxReport1->Print();
}
//---------------------------------------------------------------------------

void __fastcall TFinputedit::MenuItem3Click(TObject *Sender)
{
	Frep3->frxReport1->PrepareReport(true);
	Frep3->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFinputedit::MenuItem4Click(TObject *Sender)
{
	Frep3->frxReport1->Export(Frep3->frxPDFExport1);
}
//---------------------------------------------------------------------------

void __fastcall TFinputedit::Button2Click(TObject *Sender)
{
	if(DM->Tenr->Filtered){
		DM->Tenr->Filtered=false;
		Button2->Caption="�������� �������";
	}
	else{
		DM->Tenr->Filtered=true;
		Button2->Caption="��������� �������";
	}
}
//---------------------------------------------------------------------------

