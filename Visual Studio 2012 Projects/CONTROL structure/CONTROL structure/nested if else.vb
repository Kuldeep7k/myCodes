Public Class Form5

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim a As Integer = TextBox1.Text
        a = Convert.ToInt32(TextBox1.Text)

        Dim b As Integer = TextBox2.Text
        b = Convert.ToInt32(TextBox2.Text)

        Dim c As Integer = TextBox3.Text
        c = Convert.ToInt32(TextBox3.Text)
        'User input

        If a > b Then
            If a > c Then
                Label4.Text = "a is greater"
            Else
                Label4.Text = "c is greater"
            End If

        Else
            If b > c Then
                Label4.Text = "b is greater"

            Else
                Label4.Text = "c is greater"
            End If

        End If

    End Sub
End Class