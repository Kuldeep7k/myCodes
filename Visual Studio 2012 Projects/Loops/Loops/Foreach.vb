Public Class Foreach

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click

        Dim myArray() As Integer = {10, 3, 12, 23, 9}

        Dim item As Integer

        For Each item In myArray

            MessageBox.Show(item)

        Next




    End Sub
End Class