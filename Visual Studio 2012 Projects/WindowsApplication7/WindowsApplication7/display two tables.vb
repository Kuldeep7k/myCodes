Public Class Form2

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim information As New DataTable("studenttable")
        Dim id As New DataColumn("studentid", GetType(Integer))
        Dim stName As New DataColumn("studentname", GetType(String))

        information.Columns.Add(id)
        information.Columns.Add(stName)

        information.Rows.Add(1, "ram")
        information.Rows.Add(2, "sham")

        Dim teacher As New DataTable("teachertable")
        Dim tid As New DataColumn("teacherid", GetType(Integer))
        Dim tName As New DataColumn("teachername", GetType(String))

        teacher.Columns.Add(tid)
        teacher.Columns.Add(tName)

        teacher.Rows.Add(1, "Gunjan")
        teacher.Rows.Add(2, "Seema")

        'addding tables to the dataset

        Dim mydataset As New DataSet("owmdataset")
        mydataset.Tables.Add(information)
        mydataset.Tables.Add(teacher)

        DataGridView1.DataSource = mydataset.Tables(0)
        DataGridView2.DataSource = mydataset.Tables(1)

        For Each table As DataTable In mydataset.Tables
            Label3.Text = Label3.Text & vbNewLine & table.TableName
        Next

        Dim total As Integer = mydataset.Tables(0).Rows.Count
        MessageBox.Show("total " & total)

        mydataset.Tables(0).Merge(mydataset.Tables(1)) 'merge tables

        Dim copydataset As DataSet = mydataset.Copy()






    End Sub
End Class