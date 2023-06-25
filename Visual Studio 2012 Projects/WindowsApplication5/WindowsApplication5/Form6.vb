Public Class Form6
    Dim cnt As Integer
    Dim mul As Integer
    Dim i As Integer
    Dim num As Integer
    Dim mynumber(5) As UInteger
    

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        num = Convert.ToInt32(TextBox1.Text)
        ListBox1.Items.Add(num)
        mynumber(i) = num
        i = i + 1
    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        For cnt = 0 To 5
            mul = mul * mynumber(cnt)
        Next
        MessageBox.Show("Sum of all number :" & mul)
    End Sub
End Class