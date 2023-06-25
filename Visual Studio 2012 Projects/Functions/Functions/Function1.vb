Public Class Function1

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles buttonadd.Click
        Dim Answer As Double = Solvemath()
        MessageBox.Show(Answer)
    End Sub
    'Create Function

    Private Function Solvemath() As Double
        Dim num1 As Integer = 16
        Dim num2 As Integer = 2
        Return num1 * num2
    End Function

End Class
