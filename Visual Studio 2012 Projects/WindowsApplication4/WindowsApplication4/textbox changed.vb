Public Class textbox

    Private Sub TextBox1_TextChanged(sender As Object, e As EventArgs) Handles TextBox1.TextChanged
        Label1.Text = "Changes text" & TextBox1.Text

    End Sub
End Class