Public Class Form4
    Private multiArray(3, 3) As Integer

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim i, j As Integer
        multiArray(0, 0) = 0
        multiArray(0, 1) = 1
        multiArray(0, 2) = 2
        multiArray(1, 0) = 3
        multiArray(1, 1) = 4
        multiArray(1, 2) = 5
        multiArray(2, 0) = 6
        multiArray(2, 1) = 7
        multiArray(2, 2) = 8
        Label1.Text = Label1.Text + vbNewLine
        For i = 0 To 2
            For j = 0 To 2
                Label1.Text = Label1.Text & " " & multiArray(i, j)

                If (j = 2) Then
                    Label1.Text = Label1.Text + vbNewLine
                End If

            Next


        Next


    End Sub
End Class