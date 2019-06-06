VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   5055
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   9825
   LinkTopic       =   "Form1"
   ScaleHeight     =   5055
   ScaleWidth      =   9825
   StartUpPosition =   3  '系統預設值
   Begin VB.Timer Timer1 
      Left            =   6360
      Top             =   3360
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
         Size            =   27.75
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
