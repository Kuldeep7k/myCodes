Public Class Form1
    Dim a As String
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        a = "             Computer system"
        TextBox1.Text = a
        TextBox2.Text = LTrim(a)

    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        a = "Computer system                 "
        TextBox1.Text = a
        TextBox2.Text = RTrim(a)
    End Sub

    Private Sub Button7_Click(sender As Object, e As EventArgs) Handles Button7.Click
        a = "Computer system"
        TextBox1.Text = a
        TextBox2.Text = Microsoft.VisualBasic.Left(a, 4)
    End Sub

    Private Sub Button3_Click(sender As Object, e As EventArgs) Handles Button3.Click
        a = "Computer system"
        TextBox1.Text = a
        TextBox2.Text = Len(a)
    End Sub

    Private Sub Button6_Click(sender As Object, e As EventArgs) Handles Button6.Click
        a = "Computer system"
        TextBox1.Text = a
        TextBox2.Text = UCase(a)
    End Sub

    Private Sub Button4_Click(sender As Object, e As EventArgs) Handles Button4.Click
        a = "Computer system"
        TextBox1.Text = a
        TextBox2.Text = LCase(a)
    End Sub

    Private Sub Button5_Click(sender As Object, e As EventArgs) Handles Button5.Click
        Dim str1 As String
        Dim str2 As String
        str2 = "Vb.net"
        str1 = InputBox("Enter name", , "Vb.net")
        Debug.WriteLine(String.Compare(str2, str1))
        If String.Compare(str2, str1) Then
            MsgBox("name is not correct")
        Else
            MsgBox("name is correct")

        End If

    End Sub
End Class
