VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   5172
   ClientLeft      =   120
   ClientTop       =   468
   ClientWidth     =   7872
   LinkTopic       =   "Form1"
   ScaleHeight     =   5172
   ScaleWidth      =   7872
   StartUpPosition =   3  '系統預設值
   Begin VB.CommandButton Command2 
      Caption         =   "還車"
      Height          =   855
      Left            =   3000
      TabIndex        =   1
      Top             =   2040
      Width           =   2055
   End
   Begin VB.CommandButton Command1 
      Caption         =   "借車"
      Height          =   855
      Left            =   3000
      TabIndex        =   0
      Top             =   840
      Width           =   2055
   End
   Begin VB.Label Label1 
      BeginProperty Font 
         Name            =   "新細明體"
         Size            =   21.6
         Charset         =   136
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      ForeColor       =   &H000000FF&
      Height          =   495
      Left            =   3000
      TabIndex        =   2
      Top             =   3840
      Width           =   2415
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Dim a As Date
Dim b As Date
Dim c As Integer '第三題可能會用到

Private Sub Command1_Click()
    a = Now
    x = DateDiff("s", b, a)
    If x > 15 And c <> 1 Then
        Print "借車" & vbTab & a
        c = 1
    ElseIf c = 1 Then
        MsgBox "同時只能借一台車!"
    Else
        MsgBox "同站15分鐘內不得續借!" & vbCrLf & "下次租借還須" & 15 - x & "秒"
    End If
End Sub

Private Sub Command2_Click()
    b = Now
    Print "還車" & vbTab & b
    d = DateDiff("s", a, b)
    Print "租借時間" & d & "分鐘"
    If d <= 30 Then
        m = 5
    Else
        m = 5 + Int(d / 30) * 10
    End If
    Print "收費: " & m & "元"
    Print ""
    Label1 = m & "元"
    c = 0
End Sub
