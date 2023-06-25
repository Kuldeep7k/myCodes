Public Class Form2
    Sub sqr(ByVal num As Integer)
        Dim square As Integer
        square = num * num
        Label2.Text = "Square of number :" & square


    End Sub
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim n As Integer
        n = Convert.ToInt32(TextBox1.Text)
        sqr(n)
    End Sub
End Class