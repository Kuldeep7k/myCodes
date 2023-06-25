Public Class Form3

    Private Sub Label1_Click(sender As Object, e As EventArgs) Handles Label1.Click

    End Sub
    Private Sub Label2_Click(sender As Object, e As EventArgs)

    End Sub
    Private Sub TextBox1_TextChanged(sender As Object, e As EventArgs) Handles TextBox1.TextChanged

    End Sub
    Private Sub TextBox2_TextChanged(sender As Object, e As EventArgs)

    End Sub
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim num As Char = TextBox1.Text
        If num = "A" Or num = "E" Or num = "I" Or num = "O" Or num = "U" Or num = "a" Or num = "e" Or num = "i" Or num = "o" Or num = "u" Then
            MessageBox.Show("vowel")
        Else
            MessageBox.Show("not vowel")

        End If

    End Sub
End Class