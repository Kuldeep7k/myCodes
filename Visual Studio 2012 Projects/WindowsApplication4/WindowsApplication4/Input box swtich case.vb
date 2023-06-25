Public Class Form4

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim choice As String
        choice = InputBox("1-Red,2-Blue,3-Green", "Enter your Choice")
        Select Case choice
            Case 1 : Me.BackColor = Color.Red
            Case 2 : Me.BackColor = Color.Blue
            Case 3 : Me.BackColor = Color.Green
            Case Else : MessageBox.Show("Wrong input")

        End Select

    End Sub
End Class