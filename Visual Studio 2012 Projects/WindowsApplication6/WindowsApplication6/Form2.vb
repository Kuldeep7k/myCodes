Public Class Form2
    'Private multiArray(2, 2) As String 
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim multiArray(,) As Integer
        ReDim multiArray(2, 2)


        multiArray(0, 0) = 7 '"Position 0,0"
        multiArray(0, 1) = 1 '"Position 0,1"
        multiArray(0, 2) = 2 '"Position 0,2"

        Dim xPos As Integer = CType(TextBox1.Text, Integer)
        Dim yPos As Integer = CType(TextBox2.Text, Integer)
        MessageBox.Show(multiArray(xPos, yPos))



    End Sub
End Class