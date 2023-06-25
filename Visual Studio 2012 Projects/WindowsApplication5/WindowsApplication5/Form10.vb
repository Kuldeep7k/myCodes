Public Class Form10
    Dim i As Integer = 0
    Dim t As Integer
    Dim input As Integer
    Dim num(9) As Integer
    Dim sum As Integer
    Dim avg As Integer
    Dim min As Integer
    Dim max As Integer
    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        Array.Sort(num)
        For i = 0 To num.Length - 1
            Label1.Text = Label1.Text & " " & num(i)
        Next


    End Sub

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        input = Convert.ToInt32(TextBox2.Text)
        ListBox1.Items.Add(input)
        num(i) = input
        i = i + 1
    End Sub
End Class