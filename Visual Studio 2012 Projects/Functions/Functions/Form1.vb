Public Class Form1

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim ans As Integer = Multi()
        MessageBox.Show(ans)
    End Sub
    Private Function Multi() As Integer
        Dim num1, num2 As Integer
        num1 = Convert.ToInt32(TextBox1.Text)
        num2 = Convert.ToInt32(TextBox2.Text)
        Return num1 * num2
    End Function

    Private Sub Label2_Click(sender As Object, e As EventArgs) Handles Label2.Click

    End Sub
End Class