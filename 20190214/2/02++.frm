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
   Begin VB.Timer Timer1 
      Left            =   360
      Top             =   5400
   End
   Begin VB.CommandButton Command2 
      Caption         =   "Timer Off"
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
      TabIndex        =   12
      Top             =   3720
      Width           =   2052
   End
   Begin VB.Frame Frame1 
      Caption         =   "Timer"
      BeginProperty Font 
         Name            =   "Tekton Pro Ext"
         Size            =   12
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   1212
      Left            =   960
      TabIndex        =   11
      Top             =   4800
      Width           =   7092
      Begin VB.Label Label4 
         Caption         =   "X: "
         BeginProperty Font 
            Name            =   "Tekton Pro Ext"
            Size            =   16.2
            Charset         =   0
            Weight          =   700
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Height          =   612
         Left            =   4080
         TabIndex        =   14
         Tag             =   "0"
         Top             =   360
         Width           =   2772
      End
      Begin VB.Label Label3 
         Caption         =   "O: "
         BeginProperty Font 
            Name            =   "Tekton Pro Ext"
            Size            =   16.2
            Charset         =   0
            Weight          =   700
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Height          =   612
         Left            =   360
         TabIndex        =   13
         Tag             =   "0"
         Top             =   360
         Width           =   2772
      End
   End
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
   Begin VB.Label Label2 
      Caption         =   "OOXX GAME"
      BeginProperty Font 
         Name            =   "Tekton Pro Ext"
         Size            =   18
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
    Randomize
    If Rnd() < 0.5 Then
        Label2.Caption = "X"
    Else
        Label2.Caption = "O"
    End If
    Label2.FontSize = 72
    For i = 0 To 8
        Label1(i).Caption = ""
    Next
    Command1.Enabled = False
    Command1.Caption = "Started"
    Timer1.Interval = 1000
    Label3.Tag = 0
    Label3.Caption = "O: 0s"
    Label4.Tag = 0
    Label4.Caption = "X: 0s"
End Sub

Private Sub Command2_Click()
    If Frame1.Visible = True Then
        Frame1.Visible = False
        Command2.Caption = "Timer On"
    Else
        Frame1.Visible = True
        Command2.Caption = "Timer Off"
    End If
End Sub

Private Sub Label1_Click(Index As Integer)
    If Label1(Index).Caption = "" Then
        Label1(Index).Caption = Label2.Caption
        If Index Mod 3 = 0 Then
            If Label1(Index + 1).Caption = Label2.Caption And Label1(Index + 2).Caption = Label2.Caption Then
                Win
                Exit Sub
            End If
        ElseIf Index Mod 3 = 1 Then
            If Label1(Index - 1).Caption = Label2.Caption And Label1(Index + 1).Caption = Label2.Caption Then
                Win
                Exit Sub
            End If
        ElseIf Index Mod 3 = 2 Then
            If Label1(Index - 1).Caption = Label2.Caption And Label1(Index - 2).Caption = Label2.Caption Then
                Win
                Exit Sub
            End If
        End If
        If Index < 3 Then
            If Label1(Index + 3).Caption = Label2.Caption And Label1(Index + 6).Caption = Label2.Caption Then
                Win
                Exit Sub
            End If
        ElseIf Index >= 3 And Index < 6 Then
            If Label1(Index - 3).Caption = Label2.Caption And Label1(Index + 3).Caption = Label2.Caption Then
                Win
                Exit Sub
            End If
        ElseIf Index >= 6 Then
            If Label1(Index - 6).Caption = Label2.Caption And Label1(Index - 3).Caption = Label2.Caption Then
                Win
                Exit Sub
            End If
        End If
        If Index = 4 Then
            If Label1(0).Caption = Label2.Caption And Label1(8).Caption = Label2.Caption Then
                Win
                Exit Sub
            ElseIf Label1(2).Caption = Label2.Caption And Label1(6).Caption = Label2.Caption Then
                Win
                Exit Sub
            End If
        ElseIf Index = 0 Then
            If Label1(4).Caption = Label2.Caption And Label1(8).Caption = Label2.Caption Then
                Win
                Exit Sub
            End If
        ElseIf Index = 8 Then
            If Label1(4).Caption = Label2.Caption And Label1(0).Caption = Label2.Caption Then
                Win
                Exit Sub
            End If
        ElseIf Index = 2 Then
            If Label1(4).Caption = Label2.Caption And Label1(6).Caption = Label2.Caption Then
                Win
                Exit Sub
            End If
        ElseIf Index = 6 Then
            If Label1(4).Caption = Label2.Caption And Label1(2).Caption = Label2.Caption Then
                Win
                Exit Sub
            End If
        End If
        If Label2.Caption = "X" Then
            Label2.Caption = "O"
        Else
            Label2.Caption = "X"
        End If
        checkNumber = 0
        For i = 0 To 8
            If Label1(i).Caption <> "" Then
            checkNumber = checkNumber + 1
            End If
        Next
        If checkNumber = 9 Then
            MsgBox "Draw"
            Command1.Enabled = True
            Command1.Caption = "Start"
            Timer1.Interval = 0
        End If
    End If
End Sub
Private Sub Win()
    MsgBox Label2.Caption & " WIN!"
    Command1.Enabled = True
    Command1.Caption = "Start"
    Timer1.Interval = 0
End Sub

Private Sub Timer1_Timer()
    If Label2.Caption = "X" Then
        Label4.Tag = Label4.Tag + 1
        Label4.Caption = "X: " & Label4.Tag & "s"
    ElseIf Label2.Caption = "O" Then
        Label3.Tag = Label3.Tag + 1
        Label3.Caption = "O: " & Label3.Tag & "s"
    End If
End Sub
