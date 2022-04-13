//---------------------------------------------------------------------------

#ifndef Unit9H
#define Unit9H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "frxClass.hpp"
#include "frxPreview.hpp"
#include "frxExportPDF.hpp"
//---------------------------------------------------------------------------
class TFrep2 : public TForm
{
__published:	// IDE-managed Components
	TfrxPreview *frxPreview1;
	TfrxReport *frxReport1;
	TfrxPDFExport *frxPDFExport1;
private:	// User declarations
public:		// User declarations
	__fastcall TFrep2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrep2 *Frep2;
//---------------------------------------------------------------------------
#endif
