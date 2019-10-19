VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   4500
   ClientLeft      =   60
   ClientTop       =   405
   ClientWidth     =   7575
   LinkTopic       =   "Form1"
   ScaleHeight     =   4500
   ScaleWidth      =   7575
   StartUpPosition =   3  '窗口缺省
   Begin VB.Frame Frame2 
      Caption         =   "字号"
      Height          =   2535
      Left            =   3840
      TabIndex        =   2
      Top             =   1800
      Width           =   2295
      Begin VB.OptionButton Option6 
         Caption         =   "16"
         Height          =   615
         Left            =   480
         TabIndex        =   8
         Top             =   1800
         Width           =   1455
      End
      Begin VB.OptionButton Option5 
         Caption         =   "14"
         Height          =   615
         Left            =   480
         TabIndex        =   7
         Top             =   960
         Width           =   1455
      End
      Begin VB.OptionButton Option4 
         Caption         =   "10"
         Height          =   615
         Left            =   480
         TabIndex        =   6
         Top             =   360
         Width           =   1455
      End
   End
   Begin VB.Frame Frame1 
      Caption         =   "字体"
      Height          =   2535
      Left            =   720
      TabIndex        =   1
      Top             =   1800
      Width           =   2295
      Begin VB.OptionButton Option3 
         Caption         =   "隶书"
         Height          =   615
         Left            =   360
         TabIndex        =   5
         Top             =   1680
         Width           =   1455
      End
      Begin VB.OptionButton Option2 
         Caption         =   "楷体"
         Height          =   495
         Left            =   360
         TabIndex        =   4
         Top             =   960
         Width           =   1455
      End
      Begin VB.OptionButton Option1 
         Caption         =   "宋体"
         Height          =   375
         Left            =   360
         TabIndex        =   3
         Top             =   360
         Width           =   1455
      End
   End
   Begin VB.TextBox Text1 
      Height          =   855
      Left            =   600
      TabIndex        =   0
      Text            =   "欢迎来到VB世界"
      Top             =   480
      Width           =   5775
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Option1_Click()
Text1.FontName = "宋体"
End Sub

Private Sub Option2_Click()
Text1.FontName = "楷体"
End Sub

Private Sub Option3_Click()
Text1.FontName = "隶书"
End Sub

Private Sub Option4_Click()
Text1.FontSize = 10
End Sub

Private Sub Option5_Click()
Text1.FontSize = 14
End Sub

Private Sub Option6_Click()
Text1.FontSize = 16
End Sub
