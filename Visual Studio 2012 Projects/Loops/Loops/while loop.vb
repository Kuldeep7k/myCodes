Public Class Form1

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim n, fac As Integer
        n = Convert.ToInt32(TextBox1.Text)
        fac = 1
        While (n >= 1)
            fac = fac * n
            n -= 1
        End While
        Label2.Text = "factorial is : " & fac

    End Sub
End Class
