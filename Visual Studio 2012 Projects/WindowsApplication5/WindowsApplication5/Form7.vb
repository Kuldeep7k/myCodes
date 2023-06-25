Public Class Form7

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim a As Integer
        a = Convert.ToInt32(TextBox1.Text)
        If a >= 18 And a <= 101 Then
            MessageBox.Show("Eligible for vote")

        Else
            MessageBox.Show("Not eligible for vote")


        End If


    End Sub
End Class