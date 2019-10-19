VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   4200
   ClientLeft      =   60
   ClientTop       =   405
   ClientWidth     =   8145
   LinkTopic       =   "Form1"
   ScaleHeight     =   4200
   ScaleWidth      =   8145
   StartUpPosition =   3  '´°¿ÚÈ±Ê¡
   Begin VB.HScrollBar HScroll3 
      Height          =   255
      Left            =   840
      TabIndex        =   3
      Top             =   3000
      Width           =   6615
   End
   Begin VB.HScrollBar HScroll2 
      Height          =   255
      Left            =   840
      TabIndex        =   2
      Top             =   2460
      Width           =   6615
   End
   Begin VB.HScrollBar HScroll1 
      Height          =   255
      Left            =   840
      TabIndex        =   1
      Top             =   1920
      Width           =   6615
   End
   Begin VB.TextBox Text1 
      Height          =   1095
      Left            =   840
      TabIndex        =   0
      Top             =   480
      Width           =   6615
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub HScroll1_Change()
Text1.BackColor = RGB(HScroll1.Value, HScroll2.Value, HScroll3.Value)
End Sub

Private Sub HScroll2_Change()
Text1.BackColor = RGB(HScroll1.Value, HScroll2.Value, HScroll3.Value)
End Sub

Private Sub HScroll3_Change()
Text1.BackColor = RGB(HScroll1.Value, HScroll2.Value, HScroll3.Value)
End Sub
