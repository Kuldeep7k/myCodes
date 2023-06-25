Public Class Form7

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim marks As Integer
        marks = Convert.ToInt32(TextBox1.Text)
        Select Case marks
            Case Is > 90
                MessageBox.Show("A Grade")
            Case Is > 80
                MessageBox.Show("B Grade")
            Case Is > 70
                MessageBox.Show("C Grade")
            Case Is > 40
                MessageBox.Show("D Grade")
            Case Else
                MessageBox.Show("Fail")

        End Select

    End Sub
End Class