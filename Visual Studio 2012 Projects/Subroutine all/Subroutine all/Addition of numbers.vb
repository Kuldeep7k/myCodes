Public Class Form2

    Private Sub ListBox1_SelectedIndexChanged(sender As Object, e As EventArgs) Handles ListBox1.SelectedIndexChanged

    End Sub

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim n1 = 2, n2 = 5, n3 = 4, n4 = 5
        Dim sum1, sum2 As Integer
        sum1 = n1 + n2
        sum2 = n3 + n4
        Showsum(n1, n2, n3, n4, sum1, sum2)
    End Sub
    Sub Showsum(n1 As Integer, n2 As Integer, n3 As Integer, n4 As Integer, sum1 As Integer, sum2 As Integer)
        ListBox1.Items.Clear()

        ListBox1.Items.Add(n1 & "+" & n2 & "=" & sum1)
        ListBox1.Items.Add(n3 & "+" & n4 & "=" & sum2)
    End Sub

End Class