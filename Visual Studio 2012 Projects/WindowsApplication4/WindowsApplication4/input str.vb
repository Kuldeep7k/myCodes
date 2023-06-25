Public Class Form6

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim str As String
        str = InputBox("Enter your name")
        Label1.Text = str
    End Sub
End Class