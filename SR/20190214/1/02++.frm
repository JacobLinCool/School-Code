VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   6432
   ClientLeft      =   120
   ClientTop       =   456
   ClientWidth     =   8880
   LinkTopic       =   "Form1"
   ScaleHeight     =   6432
   ScaleWidth      =   8880
   StartUpPosition =   3  '系統預設值
   Begin VB.CommandButton Command1 
      Caption         =   "Start"
      BeginProperty Font 
         Name            =   "Tekton Pro Ext"
         Size            =   13.8
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   612
      Left            =   6000
      TabIndex        =   9
      Top             =   2760
      Width           =   2052
   End
   Begin VB.Label Label3 
      Caption         =   "增加勝負判定"
      Height          =   1692
      Left            =   6000
      TabIndex        =   11
      Top             =   3840
      Width           =   2172
   End
   Begin VB.Label Label2 
      Caption         =   "X"
      BeginProperty Font 
         Name            =   "Tekton Pro Ext"
         Size            =   72
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   1452
      Left            =   6480
      TabIndex        =   10
      Top             =   720
      Width           =   1452
   End
   Begin VB.Label Label1 
      Alignment       =   2  '置中對齊
      Appearance      =   0  '平面
      BackColor       =   &H80000005&
      BorderStyle     =   1  '單線固定
      Caption         =   "X"
      BeginProperty Font 
         Name            =   "Tekton Pro Ext"
         Size            =   48
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      ForeColor       =   &H80000008&
      Height          =   1095
      Index           =   8
      Left            =   3840
      TabIndex        =   8
      Top             =   3240
      Width           =   1215
   End
   Begin VB.Label Label1 
      Alignment       =   2  '置中對齊
      Appearance      =   0  '平面
      BackColor       =   &H80000005&
      BorderStyle     =   1  '單線固定
      Caption         =   "X"
      BeginProperty Font 
         Name            =   "Tekton Pro Ext"
         Size            =   48
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      ForeColor       =   &H80000008&
      Height          =   1095
      Index           =   7
      Left            =   2400
      TabIndex        =   7
      Top             =   3240
      Width           =   1215
   End
   Begin VB.Label Label1 
      Alignment       =   2  '置中對齊
      Appearance      =   0  '平面
      BackColor       =   &H80000005&
      BorderStyle     =   1  '單線固定
      Caption         =   "X"
      BeginProperty Font 
         Name            =   "Tekton Pro Ext"
         Size            =   48
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      ForeColor       =   &H80000008&
      Height          =   1095
      Index           =   6
      Left            =   960
      TabIndex        =   6
      Top             =   3240
      Width           =   1215
   End
   Begin VB.Label Label1 
      Alignment       =   2  '置中對齊
      Appearance      =   0  '平面
      BackColor       =   &H80000005&
      BorderStyle     =   1  '單線固定
      Caption         =   "X"
      BeginProperty Font 
         Name            =   "Tekton Pro Ext"
         Size            =   48
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      ForeColor       =   &H80000008&
      Height          =   1095
      Index           =   5
      Left            =   3840
      TabIndex        =   5
      Top             =   1920
      Width           =   1215
   End
   Begin VB.Label Label1 
      Alignment       =   2  '置中對齊
      Appearance      =   0  '平面
      BackColor       =   &H80000005&
      BorderStyle     =   1  '單線固定
      Caption         =   "X"
      BeginProperty Font 
         Name            =   "Tekton Pro Ext"
         Size            =   48
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      ForeColor       =   &H80000008&
      Height          =   1095
      Index           =   4
      Left            =   2400
      TabIndex        =   4
      Top             =   1920
      Width           =   1215
   End
   Begin VB.Label Label1 
      Alignment       =   2  '置中對齊
      Appearance      =   0  '平面
      BackColor       =   &H80000005&
      BorderStyle     =   1  '單線固定
      Caption         =   "X"
      BeginProperty Font 
         Name            =   "Tekton Pro Ext"
         Size            =   48
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      ForeColor       =   &H80000008&
      Height          =   1095
      Index           =   3
      Left            =   960
      TabIndex        =   3
      Top             =   1920
      Width           =   1215
   End
   Begin VB.Label Label1 
      Alignment       =   2  '置中對齊
      Appearance      =   0  '平面
      BackColor       =   &H80000005&
      BorderStyle     =   1  '單線固定
      Caption         =   "X"
      BeginProperty Font 
         Name            =   "Tekton Pro Ext"
         Size            =   48
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      ForeColor       =   &H80000008&
      Height          =   1095
      Index           =   2
      Left            =   3840
      TabIndex        =   2
      Top             =   600
      Width           =   1215
   End
   Begin VB.Label Label1 
      Alignment       =   2  '置中對齊
      Appearance      =   0  '平面
      BackColor       =   &H80000005&
      BorderStyle     =   1  '單線固定
      Caption         =   "X"
      BeginProperty Font 
         Name            =   "Tekton Pro Ext"
         Size            =   48
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      ForeColor       =   &H80000008&
      Height          =   1095
      Index           =   1
      Left            =   2400
      TabIndex        =   1
      Top             =   600
      Width           =   1215
   End
   Begin VB.Label Label1 
      Alignment       =   2  '置中對齊
      Appearance      =   0  '平面
      BackColor       =   &H80000005&
      BorderStyle     =   1  '單線固定
      Caption         =   "X"
      BeginProperty Font 
         Name            =   "Tekton Pro Ext"
         Size            =   48
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      ForeColor       =   &H80000008&
      Height          =   1095
      Index           =   0
      Left            =   960
      TabIndex        =   0
      Top             =   600
      Width           =   1215
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
    For i = 0 To 8
        Label1(i).Caption = ""
    Next
End Sub

Private Sub Label1_Click(Index As Integer)
    If Label1(Index).Caption = "" Then
        Label1(Index).Caption = Label2.Caption
        If Index Mod 3 = 0 Then
            If Label1(Index + 1).Caption = Label2.Caption And Label1(Index + 2).Caption = Label2.Caption Then
                MsgBox Label2.Caption & " WIN!"
            End If
        ElseIf Index Mod 3 = 1 Then
            If Label1(Index - 1).Caption = Label2.Caption And Label1(Index + 1).Caption = Label2.Caption Then
                MsgBox Label2.Caption & " WIN!"
            End If
        ElseIf Index Mod 3 = 2 Then
            If Label1(Index - 1).Caption = Label2.Caption And Label1(Index - 2).Caption = Label2.Caption Then
                MsgBox Label2.Caption & " WIN!"
            End If
        End If
        If Index < 3 Then
            If Label1(Index + 3).Caption = Label2.Caption And Label1(Index + 6).Caption = Label2.Caption Then
                MsgBox Label2.Caption & " WIN!"
            End If
        ElseIf Index >= 3 And Index < 6 Then
            If Label1(Index - 3).Caption = Label2.Caption And Label1(Index + 3).Caption = Label2.Caption Then
                MsgBox Label2.Caption & " WIN!"
            End If
        ElseIf Index >= 6 Then
            If Label1(Index - 6).Caption = Label2.Caption And Label1(Index - 3).Caption = Label2.Caption Then
                MsgBox Label2.Caption & " WIN!"
            End If
        End If
        If Index = 4 Then
            If Label1(0).Caption = Label2.Caption And Label1(8).Caption = Label2.Caption Then
                MsgBox Label2.Caption & " WIN!"
            ElseIf Label1(2).Caption = Label2.Caption And Label1(6).Caption = Label2.Caption Then
                MsgBox Label2.Caption & " WIN!"
            End If
        ElseIf Index = 0 Then
            If Label1(4).Caption = Label2.Caption And Label1(8).Caption = Label2.Caption Then
                MsgBox Label2.Caption & " WIN!"
            End If
        ElseIf Index = 8 Then
            If Label1(4).Caption = Label2.Caption And Label1(0).Caption = Label2.Caption Then
                MsgBox Label2.Caption & " WIN!"
            End If
        ElseIf Index = 2 Then
            If Label1(4).Caption = Label2.Caption And Label1(6).Caption = Label2.Caption Then
                MsgBox Label2.Caption & " WIN!"
            End If
        ElseIf Index = 6 Then
            If Label1(4).Caption = Label2.Caption And Label1(2).Caption = Label2.Caption Then
                MsgBox Label2.Caption & " WIN!"
            End If
        End If
        If Label2.Caption = "X" Then
            Label2.Caption = "O"
        Else
            Label2.Caption = "X"
        End If
    End If
End Sub
