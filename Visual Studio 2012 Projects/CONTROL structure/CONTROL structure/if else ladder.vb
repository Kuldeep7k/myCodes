Public Class Form4

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim num As Integer = TextBox1.Text
        'User input

        If num > 0 Then
            Label2.Text = "no is Positive"
        ElseIf num < 0 Then
            Label2.Text = "no is negative"

        Else
            Label2.Text = "no is zero"
        End If

    End Sub
End Class