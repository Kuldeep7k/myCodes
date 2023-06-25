Public Class Form5
    Dim cnt As Integer
    Dim sum As Integer
    Dim i As Integer
    Dim num As Integer
    Dim mynumber(5) As UInteger

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Num = Convert.ToInt32(TextBox1.Text)
        ListBox1.Items.Add(num)
        mynumber(i) = num
        i = i + 1

    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        For cnt = 0 To 5
            sum = sum + mynumber(cnt)
        Next
        MessageBox.Show("Sum of all number :" & sum)
    End Sub

    Private Sub TextBox1_TextChanged(sender As Object, e As EventArgs) Handles TextBox1.TextChanged

    End Sub

    Private Sub ListBox1_SelectedIndexChanged(sender As Object, e As EventArgs) Handles ListBox1.SelectedIndexChanged

    End Sub
End Class