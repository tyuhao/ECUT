VERSION 5.00
Begin VB.Form 计算器 
   Caption         =   "Form1"
   ClientHeight    =   6960
   ClientLeft      =   60
   ClientTop       =   405
   ClientWidth     =   13125
   LinkTopic       =   "计算器"
   ScaleHeight     =   6960
   ScaleWidth      =   13125
   StartUpPosition =   3  '窗口缺省
   Begin VB.TextBox Text3 
      Height          =   855
      Left            =   4680
      TabIndex        =   4
      Top             =   3600
      Width           =   3855
   End
   Begin VB.TextBox Text2 
      Height          =   735
      Left            =   4560
      TabIndex        =   3
      Top             =   2040
      Width           =   3855
   End
   Begin VB.TextBox Text1 
      Height          =   735
      Left            =   1560
      TabIndex        =   2
      Top             =   480
      Width           =   6735
   End
   Begin VB.CommandButton Command2 
      Caption         =   "阶乘"
      Height          =   735
      Left            =   1560
      TabIndex        =   1
      Top             =   3720
      Width           =   1935
   End
   Begin VB.CommandButton Command1 
      Caption         =   "求和"
      Height          =   735
      Left            =   1560
      TabIndex        =   0
      Top             =   2040
      Width           =   1935
   End
End
Attribute VB_Name = "计算器"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Dim i, n As Integer
Dim s As Single
n = Val(Text1.Text)
  For i = 1 To n
   s = s + i
  Next i
Text2.Text = s
End Sub

Private Sub Command2_Click()
n = Val(Text1.Text)
q = 1
 For j = 1 To n
  q = q * j
 Next j
Text3.Text = q
End Sub

