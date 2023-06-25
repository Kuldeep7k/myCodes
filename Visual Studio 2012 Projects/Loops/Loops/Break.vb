Public Class Break

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim a As Integer
        Dim x As Integer = 1
        a = Convert.ToInt32(TextBox1.Text)
        Label2.Text = "Series"
        While (x <= 10)
            If x = a Then
                Exit While

            End If
            Label2.Text = Label2.Text & " " & " " & x
            x = x + 1
        End While



    End Sub
End Class