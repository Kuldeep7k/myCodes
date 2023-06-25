Public Class Form8

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim i As Integer
        Dim fruit(1) As String
        fruit(0) = "Apple"
        fruit(1) = "Mango"
        'ReDim fruit(3)
        ReDim Preserve fruit(3)
        fruit(2) = "Banana"
        fruit(3) = "Orange"
        For i = 0 To UBound(fruit)
            MessageBox.Show("Fruits at index " & i & " is =" & fruit(i))

        Next

    End Sub
End Class