Public Class Form4

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim a, b As Integer
        a = Convert.ToInt32(TextBox1.Text)
        b = Convert.ToInt32(TextBox2.Text)
        swap(a, b)

        TextBox1.Text = a.ToString()
        TextBox2.Text = b.ToString()
    End Sub
    Sub swap(ByRef x As Integer, ByRef y As Integer)
        Dim temp As Integer
        temp = x
        x = y
        y = temp

    End Sub
End Class