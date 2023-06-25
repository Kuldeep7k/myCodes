Public Class Form6

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim day As Integer
        day = Convert.ToString(TextBox1.Text)
        Select Case day
            Case 1
                Label2.Text = "TOday Sunday"
            Case 2
                Label2.Text = "TOday Monday"
            Case 3
                Label2.Text = "TOday Tuesday"
            Case 4
                Label2.Text = "TOday Webnesday"
            Case 5
                Label2.Text = "TOday Thursday"
            Case 6
                Label2.Text = "TOday Friday"
            Case 7
                Label2.Text = "TOday Saturdat"
            Case Else
                Label2.Text = "Wrong Input"


        End Select
    End Sub
End Class