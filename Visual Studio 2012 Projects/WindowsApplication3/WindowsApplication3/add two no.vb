Public Class Form1

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim a, b, c As Integer
        a = 10
        b = 77
        c = a + b
        MessageBox.Show("Add " & c.ToString())
    End Sub
End Class
