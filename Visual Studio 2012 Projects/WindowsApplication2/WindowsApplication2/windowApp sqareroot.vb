Public Class Form1

    Private Sub Button2_Click(sender As Object, e As EventArgs)

    End Sub

    Private Sub Label1_Click(sender As Object, e As EventArgs) Handles Label1.Click
        Dim num As Integer = TextBox1.Text
        Dim sqr As Integer = num * num
        MessageBox.Show("Square " & sqr.ToString)


    End Sub

    Private Sub TextBox1_TextChanged(sender As Object, e As EventArgs) Handles TextBox1.TextChanged

    End Sub

    Private Sub Button2_Click_1(sender As Object, e As EventArgs) Handles Button2.Click
        Dim num As Integer = TextBox1.Text
        Dim sqr As Integer = num * num
        MessageBox.Show("Square " & sqr.ToString())
    End Sub
End Class
