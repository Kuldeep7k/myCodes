Public Class Form1

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim num1, num2, divide As Double
        num1 = Convert.ToDouble(TextBox1.Text)
        num2 = Convert.ToDouble(TextBox2.Text)
        If (num2 <> 0) Then
            divide = num1 / num2
            TextBox3.Text = divide.ToString()

        End If


    End Sub
End Class
