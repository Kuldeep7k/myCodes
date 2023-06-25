Public Class Form3
    Dim lblvalue(4) As Label
    Dim txtvalue(4) As TextBox
    Dim intcount As Integer

    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        For Me.intcount = 0 To 4
            Dim MyTextbox As New TextBox
            Dim MyLabel As New Label
            MyLabel.Left = 10 : MyLabel.Top = 10 + 25 * intcount
            MyLabel.Text = "Year " + CStr(intcount + 1)
            MyLabel.Width = 50
            lblvalue(intcount) = MyLabel
            Me.Controls.Add(lblvalue(intcount))

            MyTextbox.Left = 100 : MyTextbox.TextAlign = HorizontalAlignment.Center
            MyTextbox.Top = 10 + 25 * intcount
            txtvalue(intcount) = MyTextbox
            Me.Controls.Add(txtvalue(intcount))
        Next
    End Sub


    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim total As Double

        For Me.intcount = 0 To 4
            total += Val(txtvalue(intcount).Text)
        Next

        TextTotal.Text = total
    End Sub
End Class