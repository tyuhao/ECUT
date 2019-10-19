VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   5145
   ClientLeft      =   60
   ClientTop       =   405
   ClientWidth     =   13950
   LinkTopic       =   "Form1"
   ScaleHeight     =   5145
   ScaleWidth      =   13950
   StartUpPosition =   3  '窗口缺省
   Begin VB.CommandButton Command1 
      Caption         =   "确定"
      Height          =   615
      Left            =   8400
      TabIndex        =   0
      Top             =   240
      Width           =   1455
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Dim m%, n%
For m = 1 To 9
 For n = 1 To m
   Print n; "*"; m; "="; m * n,
 Next n
 Print
 Next m
End Sub
