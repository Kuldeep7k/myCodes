Public Class Forloop

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim num, table As Integer
        num = Convert.ToInt32(TextBox1.Text)
        Label2.Text = "Table of" & num & " is as :"
        For I = 1 To 10 Step 1
            table = num * I
            Label2.Text = Label2.Text & vbNewLine & table.ToString()
        Next




    End Sub

    Private Sub Label1_Click(sender As Object, e As EventArgs) Handles Label1.Click

    End Sub

    Private Sub Label2_Click(sender As Object, e As EventArgs) Handles Label2.Click

    End Sub

    Private Sub TextBox1_TextChanged(sender As Object, e As EventArgs) Handles TextBox1.TextChanged

    End Sub
End Class