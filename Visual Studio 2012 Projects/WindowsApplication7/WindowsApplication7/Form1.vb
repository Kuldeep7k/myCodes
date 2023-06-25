Public Class Form1

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim information As New DataTable("newtable1")
        Dim id As New DataColumn("studentid", GetType(Integer))
        Dim stName As New DataColumn("studentname", GetType(String))

        information.Columns.Add(id)
        information.Columns.Add(stName)

        information.Rows.Add(1, "ram")
        information.Rows.Add(2, "sham")

        DataGridView1.DataSource = information


    End Sub
End Class
