//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <math.h>
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)                      `
#pragma resource "*.dfm"
TCalculator *Calculator;
int a, b, c, s, j=0, k=0;
bool nuqta=false, qoshish=false, ayirish=false, kopaytirish=false, bolish=false;
//---------------------------------------------------------------------------
__fastcall TCalculator::TCalculator(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TCalculator::Button12Click(TObject *Sender)
{
        Close();
}
//---------------------------------------------------------------------------
void __fastcall TCalculator::Button1Click(TObject *Sender)
{
        Edit1->Text = Edit1->Text+7;
}
//---------------------------------------------------------------------------
void __fastcall TCalculator::Button3Click(TObject *Sender)
{
        Edit1->Text = Edit1->Text+8;
}
//---------------------------------------------------------------------------

void __fastcall TCalculator::Button6Click(TObject *Sender)
{
        Edit1->Text = Edit1->Text+9;
}
//---------------------------------------------------------------------------
void __fastcall TCalculator::Button2Click(TObject *Sender)
{
        Edit1->Text = Edit1->Text+4;
}
//---------------------------------------------------------------------------
void __fastcall TCalculator::Button4Click(TObject *Sender)
{
        Edit1->Text = Edit1->Text+5;
}
//---------------------------------------------------------------------------
void __fastcall TCalculator::Button8Click(TObject *Sender)
{
        Edit1->Text = Edit1->Text+6;
}
//---------------------------------------------------------------------------



void __fastcall TCalculator::Button5Click(TObject *Sender)
{
        Edit1->Text = Edit1->Text+1;
}
//---------------------------------------------------------------------------

void __fastcall TCalculator::Button7Click(TObject *Sender)
{
Edit1->Text = Edit1->Text+2;
}
//---------------------------------------------------------------------------

void __fastcall TCalculator::Button9Click(TObject *Sender)
{
Edit1->Text = Edit1->Text+3;
}
//---------------------------------------------------------------------------

void __fastcall TCalculator::Button10Click(TObject *Sender)
{
        Edit1->Text = Edit1->Text+0;
}
//---------------------------------------------------------------------------

void __fastcall TCalculator::Button11Click(TObject *Sender)
{
        Edit1->Text = Edit1->Text+"00";
}
//---------------------------------------------------------------------------

void __fastcall TCalculator::Button20Click(TObject *Sender)
{
        if(nuqta==true) nuqta=true;
        else {
        Edit1->Text = Edit1->Text+".";
        nuqta=true;}

}
//---------------------------------------------------------------------------





void __fastcall TCalculator::Button13Click(TObject *Sender)
{
        s = StrToInt(Edit1->Text);
        Edit1->Text = "";
        qoshish=true;
}
//---------------------------------------------------------------------------

void __fastcall TCalculator::Button14Click(TObject *Sender)
{
        s = StrToInt(Edit1->Text);
        Edit1->Text = "";
        ayirish=true;
}
//---------------------------------------------------------------------------

void __fastcall TCalculator::Button15Click(TObject *Sender)
{
        s = StrToInt(Edit1->Text);
        Edit1->Text = "";
        kopaytirish=true;
}
//---------------------------------------------------------------------------

void __fastcall TCalculator::Button16Click(TObject *Sender)
{
        s = StrToInt(Edit1->Text);
        Edit1->Text = "";
        bolish=true;
}
//---------------------------------------------------------------------------


void __fastcall TCalculator::Button21Click(TObject *Sender)
{
        k = StrToInt(Edit1->Text);
        if(Edit1->Text=="") ShowMessage("Iltimos son kiriting!");
        if(qoshish==true){
        j=s+k;
        Edit1->Text = IntToStr(j);  }
        if(bolish==true)
        {
        if(k==0)
        {
           Edit1->Text = "Error";
        } else
          {
                j=s/k;
                Edit1->Text = IntToStr(j);
           }
        }
        if(kopaytirish==true) {
        j=s*k;
        Edit1->Text = IntToStr(j);
        }
        if(ayirish==true) {
        j=s-k;
        Edit1->Text = IntToStr(j);
        }
}
//---------------------------------------------------------------------------

void __fastcall TCalculator::Button26Click(TObject *Sender)
{
        s=0; k=0; ayirish=0; kopaytirish=0; qoshish=0; bolish=0;
        Edit1->Text = "";
}
//---------------------------------------------------------------------------


void __fastcall TCalculator::Button18Click(TObject *Sender)
{
        s = StrToInt(Edit1->Text);
        k = sqrt(s);
        Edit1->Text = StrToInt(k);
}
//---------------------------------------------------------------------------







