Public Class Form2
    Public WithEvents btn As Windows.Forms.Button
    Public WithEvents t1, t2, t3 As Windows.Forms.TextBox
    Public a, b, c As Integer
    Public x, y, z As String

    Public Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        Me.Text = "Textbox"
        'First textbox
        Dim t1 As New System.Windows.Forms.TextBox
        t1.Text = " " : t1.Left = 35 : t1.Top = 20 : t1.Width = 140 : t1.TextAlign = HorizontalAlignment.Center
        Me.Controls.Add(t1)
        AddHandler t1.TextChanged, AddressOf input1

        'Second Textbox
        Dim t2 As New System.Windows.Forms.TextBox
        t2.Text = " " : t2.Left = 35 : t2.Top = 50 : t2.Width = 140 : t2.TextAlign = HorizontalAlignment.Center
        Me.Controls.Add(t2)
        AddHandler t2.TextChanged, AddressOf input2

        'Third Textbox
        Dim t3 As New System.Windows.Forms.TextBox
        t3.Text = " " : t3.Left = 35 : t3.Top = 80 : t3.Width = 140 : t3.TextAlign = HorizontalAlignment.Center
        Me.Controls.Add(t3)
        AddHandler t3.TextChanged, AddressOf input3

        'Button
        Dim btn As New System.Windows.Forms.Button
        btn.Text = "FIND GREATER NO" : btn.Left = 30 : btn.Top = 140 : btn.Width = 150
        Me.Controls.Add(btn)
        AddHandler btn.Click, AddressOf btn_Click

    End Sub

    Public Sub input1(ByVal eventsender As System.Object, _
                             ByVal eventargs As System.EventArgs)
        'Retrieving First Input
        x = eventsender.text
    End Sub

    Public Sub input2(ByVal eventsender As System.Object, _
                             ByVal eventargs As System.EventArgs)
        'Retrieving Second Input
        y = eventsender.text
    End Sub

    Public Sub input3(ByVal eventsender As System.Object, _
                             ByVal eventargs As System.EventArgs)
        'Retrieving Third Input
        z = eventsender.text
    End Sub

    Private Sub btn_Click(sender As Object, e As EventArgs) Handles btn.Click
        Dim result, result1 As String

        a = Convert.ToInt32(x)
        b = Convert.ToInt32(y)
        c = Convert.ToInt32(z)

        'Greatest
        If (a > b) Then
            If (a > c) Then
                result = a.ToString()
            Else
                result = c.ToString()
            End If
        Else
            If (b > c) Then
                result = b.ToString()
            Else
                result = c.ToString()
            End If
        End If

        'Smallest
        If (a < b) Then
            If (a < c) Then
                result1 = a.ToString()
            Else
                result1 = c.ToString()
            End If
        Else
            If (b < c) Then
                result1 = b.ToString()
            Else
                result1 = c.ToString()
            End If
        End If

        'Output
        MsgBox(result & " is the Greatest Number & " & result1 & " is the Smallest Number", MsgBoxStyle.Information, "Output")
    End Sub

    Private Sub Button1_Click(sender As Object, e As EventArgs)

    End Sub
End Class
