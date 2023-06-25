Public Class Form9
    Dim i As Integer = 0
    Dim t As Integer
    Dim input As Integer
    Dim num(9) As Integer
    Dim sum As Integer
    Dim avg As Integer
    Dim min As Integer
    Dim max As Integer
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        input = Convert.ToInt32(TextBox2.Text)
        ListBox1.Items.Add(input)
        num(i) = input
        i = i + 1
    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        For t = 0 To num.Length - 1
            sum = sum + num(t)
        Next
        avg = sum / 10
        MessageBox.Show("Average is :" & avg)

    End Sub

    Private Sub Button3_Click(sender As Object, e As EventArgs) Handles Button3.Click
        MessageBox.Show("Maximum value is " & num.Max)
    End Sub

    Private Sub Button4_Click(sender As Object, e As EventArgs) Handles Button4.Click
        MessageBox.Show("Maximum value is " & num.Min)
    End Sub

    Private Sub ListBox1_SelectedIndexChanged(sender As Object, e As EventArgs) Handles ListBox1.SelectedIndexChanged

    End Sub
End Class