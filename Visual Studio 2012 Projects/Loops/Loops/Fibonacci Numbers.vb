Public Class Form4

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim a, b, c, n, i As Integer
        n = Convert.ToInt32(TextBox1.Text)
        a = 0
        b = 1
        c = 0
        For i = 1 To n Step 1
            Label2.Text = Label2.Text & " " & c.ToString()
            c = a + b
            a = b
            b = c

        Next
    End Sub
End Class