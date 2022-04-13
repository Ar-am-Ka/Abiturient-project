//---------------------------------------------------------------------------

#ifndef Unit7H
#define Unit7H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TFsets : public TForm
{
__published:	// IDE-managed Components
	TCheckBox *CBenr;
	TCheckBox *CBadm;
	TCheckBox *CBfac;
	TCheckBox *CBemt;
	TButton *Button1;
	void __fastcall CBenrClick(TObject *Sender);
	void __fastcall CBadmClick(TObject *Sender);
	void __fastcall CBfacClick(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall CBemtClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFsets(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFsets *Fsets;
//---------------------------------------------------------------------------
#endif
