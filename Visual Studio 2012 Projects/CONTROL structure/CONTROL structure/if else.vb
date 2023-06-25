Public Class Form2

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim uname As String = TextBox1.Text
        Dim passcode As String = TextBox2.Text

        If (uname.Equals("kk") And passcode.Equals("123")) Then
            MessageBox.Show("Welcome")
        Else
            MessageBox.Show("Wrong")


        End If




    End Sub
End Class