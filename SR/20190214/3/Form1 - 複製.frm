VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   5175
   ClientLeft      =   120
   ClientTop       =   465
   ClientWidth     =   7875
   LinkTopic       =   "Form1"
   ScaleHeight     =   5175
   ScaleWidth      =   7875
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
      Caption         =   "Label1"
      BeginProperty Font 
         Name            =   "新細明體"
         Size            =   21.75
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
