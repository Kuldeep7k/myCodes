Public Class Form3

    Private Sub Label1_Click(sender As Object, e As EventArgs)

    End Sub
    Private Sub Label2_Click(sender As Object, e As EventArgs) Handles Label2.Click

    End Sub
    Private Sub TextBox1_TextChanged(sender As Object, e As EventArgs)

    End Sub
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim num As Integer
        num = 0
        Label2.Text = "number 1 to 20" & " is:"
        For I = 1 To 20 Step 5
            num = num + 5
            Label2.Text = Label2.Text & vbNewLine & num.ToString()

        Next
    End Sub
End Class