Public Class Form2

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim num1 As Integer
        Dim num2 As Integer
        Dim num3 As Integer
        num1 = Convert.ToInt32(TextBox1.Text)
        num2 = Convert.ToInt32(TextBox2.Text)
        num3 = num2 + num1
        TextBox3.Text = num3.ToString()
    End Sub
End Class