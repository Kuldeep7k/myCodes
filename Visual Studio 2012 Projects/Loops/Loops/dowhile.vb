Public Class dowhile

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim num As Integer = 0
        Do
            num += 1
            Label2.Text = Label2.Text & vbNewLine & num

        Loop While num < Convert.ToInt32(TextBox1.Text)

    End Sub
End Class