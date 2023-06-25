Public Class Form2

    Private Sub Label1_Click(sender As Object, e As EventArgs) Handles Label1.Click

    End Sub

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim a As Integer
        Dim x As Integer = 0
        a = Convert.ToInt32(TextBox1.Text)
        Label2.Text = "Series"
        While (x < 10)
            x = x + 1
            If x = a Then
                Continue While

            End If
            Label2.Text = Label2.Text & " " & " " & x
        End While
    End Sub
End Class