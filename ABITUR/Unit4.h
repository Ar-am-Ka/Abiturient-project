//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Mask.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.CheckLst.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TFinputedit : public TForm
{
__published:	// IDE-managed Components
	TPageControl *PG1;
	TTabSheet *TabSheet1;
	TRadioGroup *RG1mode;
	TDBGrid *DBG1enr;
	TEdit *Eidenr;
	TEdit *Ename;
	TEdit *Elastn;
	TEdit *Epatr;
	TEdit *Eaddres;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TGroupBox *GroupBox1;
	TRadioGroup *RG2sex;
	TDateTimePicker *DTPbirthdate;
	TButton *Button1;
	TLabel *Label7;
	TMaskEdit *Ephone;
	TLabel *Label8;
	TLabel *Label9;
	TLabel *Label10;
	TCheckBox *CBhonors;
	TComboBox *CBedu;
	TComboBox *CBdoc_edu;
	TBitBtn *BitBtn1;
	TBitBtn *BitBtn2;
	TGroupBox *GroupBox2;
	TTabSheet *TabSheet2;
	TDBGrid *DBGadm;
	TEdit *Eslastn;
	TLabel *Label11;
	TDBNavigator *DBNavigator1;
	TMaskEdit *Esphone;
	TLabel *Label13;
	TEdit *Esname;
	TLabel *Label14;
	TEdit *Espatronymicn;
	TLabel *Label15;
	TButton *Bsclear;
	TGroupBox *GroupBox4;
	TEdit *Efname;
	TRadioGroup *RG3fsex;
	TLabel *Label12;
	TCheckBox *CBfcitizen;
	TDateTimePicker *DTPfbdayfrom;
	TDateTimePicker *DTPfbdayto;
	TEdit *Eflastn;
	TEdit *Efpatronymicn;
	TCheckBox *CBflastn;
	TCheckBox *CBfname;
	TCheckBox *�Bfpatronymicn;
	TCheckBox *CBfbday;
	TRadioGroup *RG4fdoc;
	TCheckBox *CBfedu;
	TListBox *CLBfcitizen;
	TListBox *CLBfedu;
	TDBNavigator *DBNavigator2;
	TButton *Button4;
	TBitBtn *BitBtn4;
	TDBNavigator *DBNadm1;
	TDBGrid *DBGfac;
	TLabeledEdit *LEfi;
	TLabeledEdit *LEidenr;
	TLabeledEdit *LEex1;
	TLabeledEdit *LEex2;
	TLabel *Label17;
	TGroupBox *GroupBox3;
	TDBNavigator *DBNadm2;
	TDBNavigator *DBNfac1;
	TDBNavigator *DBNfac2;
	TCheckBox *CBadm;
	TCheckBox *CBfac;
	TDBNavigator *DBNenr;
	TTabSheet *TabSheet3;
	TDBGrid *DBGemt;
	TLabel *Label18;
	TLabel *Label19;
	TBitBtn *BitBtn5;
	TBitBtn *BitBtn6;
	TDBNavigator *DBNavigator3;
	TLabel *Label21;
	TLabel *Ltitle_fac;
	TGroupBox *GroupBox5;
	TLabel *Label20;
	TLabel *Label22;
	TLabel *Ltitle_fac2;
	TLabeledEdit *LEfi2;
	TLabeledEdit *LEidenr2;
	TLabel *Label24;
	TLabel *Lbud_com;
	TEdit *Eresults_exam;
	TCheckBox *CBemt;
	TDBNavigator *DBNemt;
	TProgressBar *PB1;
	TTimer *T1;
	TGroupBox *GroupBox6;
	TLabel *Label23;
	TLabel *Label25;
	TLabel *LcntEnr;
	TLabel *Label27;
	TLabel *LcntEmt;
	TLabel *LcntEmtBud;
	TComboBox *Ecitizen;
	TButton *Bunfil;
	TLabel *Label26;
	TLabel *Label28;
	TLabel *LcntEmtCom;
	TCheckBox *CBfexams;
	TCheckBox *CBffac;
	TGroupBox *GroupBox7;
	TTrackBar *TBfex1;
	TTrackBar *TBfex2;
	TLabeledEdit *LEfex1;
	TLabeledEdit *LEfex2;
	TRadioGroup *RGfbud_com;
	TListBox *LBffac;
	TBitBtn *BitBtn7;
	TButton *B1reports;
	TPopupMenu *PM1reports;
	TMenuItem *PDF1;
	TMenuItem *N1;
	TMenuItem *N2;
	TMenuItem *PDF2;
	TMenuItem *N3;
	TMenuItem *N4;
	TMenuItem *N5;
	TMenuItem *PDF3;
	TButton *Button3;
	TPopupMenu *PM2reports;
	TMenuItem *MenuItem1;
	TMenuItem *MenuItem2;
	TMenuItem *MenuItem3;
	TMenuItem *MenuItem4;
	TButton *Button2;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall BitBtn1Click(TObject *Sender);
	void __fastcall PG1Change(TObject *Sender);
	void __fastcall BitBtn2Click(TObject *Sender);
	void __fastcall EidenrEnter(TObject *Sender);
	void __fastcall DBG1enrCellClick(TColumn *Column);
	void __fastcall EslastnChange(TObject *Sender);
	void __fastcall EsnameChange(TObject *Sender);
	void __fastcall EspatronymicnChange(TObject *Sender);
	void __fastcall EsphoneChange(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall BitBtn4Click(TObject *Sender);
	void __fastcall DBNavigator1Click(TObject *Sender, TNavigateBtn Button);
	void __fastcall DBG1enrKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall DBGadmCellClick(TColumn *Column);
	void __fastcall DBNadm2Click(TObject *Sender, TNavigateBtn Button);
	void __fastcall CBadmClick(TObject *Sender);
	void __fastcall CBfacClick(TObject *Sender);
	void __fastcall BitBtn5Click(TObject *Sender);
	void __fastcall BitBtn6Click(TObject *Sender);
	void __fastcall DBNadm1Click(TObject *Sender, TNavigateBtn Button);
	void __fastcall DBGemtCellClick(TColumn *Column);
	void __fastcall TabSheet1Exit(TObject *Sender);
	void __fastcall DBGfacDblClick(TObject *Sender);
	void __fastcall TBfex1Change(TObject *Sender);
	void __fastcall TBfex2Change(TObject *Sender);
	void __fastcall DBNavigator3Click(TObject *Sender, TNavigateBtn Button);
	void __fastcall BitBtn7Click(TObject *Sender);
	void __fastcall LEfex1Change(TObject *Sender);
	void __fastcall LEfex2Change(TObject *Sender);
	void __fastcall CBemtClick(TObject *Sender);
	void __fastcall TabSheet1Enter(TObject *Sender);
	void __fastcall TabSheet3Enter(TObject *Sender);
	void __fastcall TabSheet2Enter(TObject *Sender);
	void __fastcall TabSheet3Exit(TObject *Sender);
	void __fastcall BitBtn8Click(TObject *Sender);
	void __fastcall LEslastnadmChange(TObject *Sender);
	void __fastcall N2Click(TObject *Sender);
	void __fastcall PDF2Click(TObject *Sender);
	void __fastcall N3Click(TObject *Sender);
	void __fastcall N5Click(TObject *Sender);
	void __fastcall N4Click(TObject *Sender);
	void __fastcall PDF3Click(TObject *Sender);
	void __fastcall BunfilClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall RG1modeClick(TObject *Sender);
	void __fastcall MenuItem2Click(TObject *Sender);
	void __fastcall MenuItem3Click(TObject *Sender);
	void __fastcall MenuItem4Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);


private:	// User declarations
public:		// User declarations
	__fastcall TFinputedit(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFinputedit *Finputedit;
//---------------------------------------------------------------------------
#endif
