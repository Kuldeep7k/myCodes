Public Class Form3

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim days() As String = {"Sunday", "Monday", "Tuesday", "Webnesday", "Thursday", "Friday", "Saturday"}
        For Each d As String In days
            ListBox1.Items.add(d)
        Next
        Dim size As Integer = days.Length
        Label2.Text = "No. of days in a week " & size.ToString

    End Sub
End Class