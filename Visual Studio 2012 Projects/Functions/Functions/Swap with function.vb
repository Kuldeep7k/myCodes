Public Class Form3

    Private Sub Label2_Click(sender As Object, e As EventArgs) Handles Label2.Click

    End Sub

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim a, b As Integer
        a = Convert.ToInt32(TextBox1.Text)
        b = Convert.ToInt32(TextBox2.Text)
        swap(a, b)
        Label3.Text = "After swap A and :" & a & " and B : " & b
    End Sub
    Private Function swap(ByVal aa As Integer, ByVal bb As Integer)
        Dim cc As Integer
        cc = aa
        aa = bb
        bb = cc
        Return aa
        Return bb
    End Function


End Class