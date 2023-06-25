Public Class Form7

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim choice As String
        choice = InputBox("1-Red,2-Blue,3-Green", "Enter your Choice")
        If (choice > 18) Then
            MessageBox.Show("eligible for voting")

        End If
    End Sub
End Class