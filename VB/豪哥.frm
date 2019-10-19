VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   4950
   ClientLeft      =   60
   ClientTop       =   405
   ClientWidth     =   10110
   LinkTopic       =   "Form1"
   ScaleHeight     =   4950
   ScaleWidth      =   10110
   StartUpPosition =   3  '窗口缺省
   Begin VB.Timer Timer1 
      Enabled         =   0   'False
      Interval        =   100
      Left            =   240
      Top             =   360
   End
   Begin VB.CommandButton Command2 
      Caption         =   "暂停"
      Height          =   855
      Left            =   5160
      TabIndex        =   2
      Top             =   3240
      Width           =   2295
   End
   Begin VB.CommandButton Command1 
      Caption         =   "开始"
      Height          =   975
      Left            =   1080
      TabIndex        =   1
      Top             =   3240
      Width           =   2415
   End
   Begin VB.Label Label1 
      Caption         =   "豪哥本无敌，飘然思不群"
      BeginProperty Font 
         Name            =   "楷体"
         Size            =   18
         Charset         =   134
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   855
      Left            =   2640
      TabIndex        =   0
      Top             =   1320
      Width           =   4215
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Dim f As Integer
Private Sub Command1_Click()
f = 1
Command1.Caption = "继续"
Command2.Enabled = True
Command1.Enabled = False
Timer1.Enabled = True
End Sub

Private Sub Command2_Click()
Command1.Enabled = True
Command2.Enabled = False
Timer1.Enabled = False
End Sub

Private Sub Timer1_Timer()
Label1.Left = Label1.Left + f * 100
  If Label1.Left + Label1.Width >= Form1.Width Then
    f = -1
  ElseIf Label1.Left <= 0 Then
    f = 1
    End If
End Sub
