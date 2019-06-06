VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   3564
   ClientLeft      =   120
   ClientTop       =   456
   ClientWidth     =   7512
   LinkTopic       =   "Form1"
   ScaleHeight     =   3564
   ScaleWidth      =   7512
   StartUpPosition =   3  '系統預設值
   Begin VB.CommandButton Command1 
      Caption         =   "Check"
      BeginProperty Font 
         Name            =   "@Adobe Gothic Std B"
         Size            =   24
         Charset         =   128
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   612
      Left            =   1320
      TabIndex        =   1
      Top             =   1680
      Width           =   4212
   End
   Begin VB.TextBox Text1 
      BeginProperty Font 
         Name            =   "@Adobe Gothic Std B"
         Size            =   24
         Charset         =   128
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   615
      Left            =   1320
      TabIndex        =   0
      Text            =   "V120863155"
      Top             =   840
      Width           =   4215
   End
   Begin VB.Label Label1 
      BeginProperty Font 
         Name            =   "標楷體"
         Size            =   16.2
         Charset         =   136
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      ForeColor       =   &H000000FF&
      Height          =   612
      Left            =   1320
      TabIndex        =   2
      Top             =   2520
      Width           =   4212
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
    If Label1.ForeColor = &HFF00& Then
    Text1 = UCase(Text1)
    X = Mid(Text1, 1, 1)
    If X = "V" Then
        p = "29" + Mid(Text1, 2, 10)
    ElseIf X = "U" Then
        p = "28" + Mid(Text1, 2, 10)
    Else
        MsgBox "你不是花蓮人"
        Exit Sub
    End If
    a = Int(Mid(p, 1, 1)) + Int(Mid(p, 11, 1))
    For i = 2 To 10
        a = a + Mid(p, i, 1) * (21 - i Mod 10)
    Next
    If a Mod 10 = 0 Then
        MsgBox "訂購成功"
    Else
        MsgBox "身分證錯誤"
    End If
    ElseIf Len(Text1) < 10 Then
        MsgBox "身分證字號有漏! 少" & 10 - Len(Text1) & "碼"
    ElseIf Len(Text1) > 10 Then
        MsgBox "身分證字號字數超過! 多" & Len(Text1) - 10 & "碼"
    End If
End Sub

Private Sub Form_Load()
    Text1_Change
End Sub

Private Sub Text1_Change()
    If Len(Text1) < 10 Then
        Label1.ForeColor = &HFF&
        Label1.Caption = "身分證字號有漏! 少" & 10 - Len(Text1) & "碼"
    ElseIf Len(Text1) > 10 Then
        Label1.ForeColor = &HFF&
        Label1.Caption = "身分證字號字數超過! 多" & Len(Text1) - 10 & "碼"
    Else
        Label1.ForeColor = &HFF00&
        Label1.Caption = "身分證字數符合!"
    End If
End Sub
