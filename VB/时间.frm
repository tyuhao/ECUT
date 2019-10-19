VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   7380
   ClientLeft      =   60
   ClientTop       =   405
   ClientWidth     =   14070
   LinkTopic       =   "Form1"
   ScaleHeight     =   7380
   ScaleWidth      =   14070
   StartUpPosition =   3  '´°¿ÚÈ±Ê¡
   Begin VB.Timer Timer1 
      Enabled         =   0   'False
      Interval        =   1000
      Left            =   840
      Top             =   1200
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Command1"
      Height          =   3135
      Left            =   1320
      TabIndex        =   4
      Top             =   2520
      Width           =   3135
   End
   Begin VB.TextBox Text4 
      Height          =   1095
      Left            =   6000
      TabIndex        =   3
      Text            =   "Text4"
      Top             =   4800
      Width           =   4815
   End
   Begin VB.TextBox Text3 
      Height          =   1095
      Left            =   6000
      TabIndex        =   2
      Text            =   "Text3"
      Top             =   3360
      Width           =   4815
   End
   Begin VB.TextBox Text2 
      Height          =   1095
      Left            =   6000
      TabIndex        =   1
      Text            =   "Text2"
      Top             =   1920
      Width           =   4815
   End
   Begin VB.TextBox Text1 
      Height          =   1095
      Left            =   6000
      TabIndex        =   0
      Text            =   "Text1"
      Top             =   480
      Width           =   4815
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Timer1.Enabled = True
End Sub


Private Sub Timer1_Timer()
Text1.Text = Year(Date)
Text2.Text = Month(Date)
Text3.Text = Day(Date)
Text4.Text = Time
End Sub
