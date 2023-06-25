Public Class dountil

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim num As Integer = 0
        Do Until num = Convert.ToInt32(TextBox1.Text)
            num += 1
            Label2.Text = Label2.Text & vbNewLine & num 'vbCrLf or vbNewline or nextline are same work

        Loop
    End Sub
End Class