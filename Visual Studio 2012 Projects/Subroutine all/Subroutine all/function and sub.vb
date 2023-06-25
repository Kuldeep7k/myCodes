Public Class Form3

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim no = 10
        MessageBox.Show(add(no)) //calling function
        'plus(no) //calling subroutine
    End Sub
    Function add(ByVal myval As Integer) As Integer
        myval = myval + 1
        Return myval
    End Function
    Sub plus(ByVal myval As Integer)
        myval = myval + 1
        MessageBox.Show(myval)
    End Sub
End Class