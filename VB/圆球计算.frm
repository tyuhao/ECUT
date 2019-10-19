VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   5220
   ClientLeft      =   60
   ClientTop       =   405
   ClientWidth     =   8070
   LinkTopic       =   "Form1"
   ScaleHeight     =   5220
   ScaleWidth      =   8070
   StartUpPosition =   3  '窗口缺省
   Begin VB.TextBox Text4 
      Height          =   855
      Left            =   1440
      TabIndex        =   6
      Top             =   4080
      Width           =   3855
   End
   Begin VB.TextBox Text3 
      Height          =   735
      Left            =   1440
      TabIndex        =   5
      Top             =   3120
      Width           =   3855
   End
   Begin VB.TextBox Text2 
      Height          =   615
      Left            =   1440
      TabIndex        =   4
      Top             =   1320
      Width           =   3855
   End
   Begin VB.TextBox Text1 
      Height          =   615
      Left            =   1440
      TabIndex        =   3
      Top             =   2280
      Width           =   3855
   End
   Begin VB.CommandButton Command2 
      Caption         =   "清除"
      Height          =   495
      Left            =   5640
      TabIndex        =   2
      Top             =   2400
      Width           =   1215
   End
   Begin VB.CommandButton Command1 
      Caption         =   "确定"
      Height          =   495
      Left            =   5640
      TabIndex        =   1
      Top             =   1320
      Width           =   1215
   End
   Begin VB.Label Label5 
      AutoSize        =   -1  'True
      Caption         =   "球体积"
      Height          =   180
      Left            =   120
      TabIndex        =   10
      Top             =   4200
      Width           =   540
   End
   Begin VB.Label Label4 
      AutoSize        =   -1  'True
      Caption         =   "球表面积"
      Height          =   180
      Left            =   120
      TabIndex        =   9
      Top             =   3120
      Width           =   720
   End
   Begin VB.Label Label3 
      AutoSize        =   -1  'True
      Caption         =   "圆面积"
      Height          =   180
      Left            =   240
      TabIndex        =   8
      Top             =   2160
      Width           =   540
   End
   Begin VB.Label Label2 
      AutoSize        =   -1  'True
      Caption         =   "圆周长"
      Height          =   180
      Left            =   240
      TabIndex        =   7
      Top             =   1320
      Width           =   540
   End
   Begin VB.Label Label1 
      AutoSize        =   -1  'True
      Caption         =   "输入半径R"
      Height          =   180
      Left            =   0
      TabIndex        =   0
      Top             =   0
      Width           =   810
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Dim r As Single
Const pi = 3.14
r = InputBox("输入半径R", "Area")
Text1.Text = pi * r ^ 2
Text2.Text = 2 * pi * r
Text3.Text = 4 * pi * r ^ 2
Text4.Text = 4 * pi * r ^ 3 / 3
End Sub

Private Sub Command2_Click()
Text1.Text = ""
Text2.Text = ""
Text3.Text = ""
Text4.Text = ""
End Sub
