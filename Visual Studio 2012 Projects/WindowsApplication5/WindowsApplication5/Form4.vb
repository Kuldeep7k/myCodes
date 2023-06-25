Public Class Form4

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim num(5) As Integer
        Dim i As Integer
        Dim sum As Integer = 0
        Dim avg As Integer = 0
        For i = 0 To 4 Step 1
            num(i) = Rnd() * 100
        Next
        ListBox1.Items.Clear()

        For i = 0 To 4 Step 1
            ListBox1.Items.Add(num(i).ToString())
            sum = sum + num(i)
        Next
        Label2.Text = "Total :" & sum.ToString()
        avg = sum / 5
        Label3.Text = "Average :" & avg.ToString()
    End Sub
End Class