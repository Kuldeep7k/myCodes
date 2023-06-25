Public Class Form2

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim Information As New DataTable("Student1")
        Dim Id As New DataColumn("studentID", GetType(Integer))
        Dim stName As New DataColumn("studentName", GetType(String))

        'Same as Dim Variables
        Information.Columns.Add(Id)
        Information.Columns.Add(stName)

        Information.Rows.Add(2, "Mohit")
        Information.Rows.Add(1, "Akshit")

        'Unsorted Data
        Dim dv As New DataView(Information)
        Label1.Text = "Student ID | Student Name"
        For Each View As DataRowView In dv
            Label1.Text = Label1.Text + vbNewLine + View("studentID").ToString()
            Label1.Text = Label1.Text + "                     " + View("studentName").ToString()
        Next
    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        Dim Information As New DataTable("Student1")
        Dim Id As New DataColumn("studentID", GetType(Integer))
        Dim stName As New DataColumn("studentName", GetType(String))

        'Same as Dim Variables
        Information.Columns.Add(Id)
        Information.Columns.Add(stName)

        Information.Rows.Add(2, "Mohit")
        Information.Rows.Add(1, "Akshit")

        'Sorted Data
        Dim dv As New DataView(Information, "studentID>0", "studentID Asc", DataViewRowState.CurrentRows)
        Label1.Text = "Student ID | Student Name"
        For Each View As DataRowView In dv
            Label1.Text = Label1.Text + vbNewLine + View("studentID").ToString()
            Label1.Text = Label1.Text + "                     " + View("studentName").ToString()
        Next
        'For Descending Order - "studentID<3", "studentID Desc"
    End Sub

    Private Sub Button3_Click(sender As Object, e As EventArgs) Handles Button3.Click
        Dim Information As New DataTable("Student1")
        Dim Id As New DataColumn("studentID", GetType(Integer))
        Dim stName As New DataColumn("studentName", GetType(String))

        'Same as Dim Variables
        Information.Columns.Add(Id)
        Information.Columns.Add(stName)

        Information.Rows.Add(1, "Akshit")
        Information.Rows.Add(2, "Mohit")

        'Adding New Row
        Dim newRow As New DataView(Information)
        Dim row As DataRowView = newRow.AddNew()
        row("StudentID") = 3
        row("StudentName") = "Ashish(New)"
        row.EndEdit()

        DataGridView1.DataSource = Information
    End Sub

    Private Sub Button4_Click(sender As Object, e As EventArgs) Handles Button4.Click
        Dim Information As New DataTable("Student1")
        Dim Id As New DataColumn("studentID", GetType(Integer))
        Dim stName As New DataColumn("studentName", GetType(String))

        'Same as Dim Variables
        Information.Columns.Add(Id)
        Information.Columns.Add(stName)

        Information.Rows.Add(1, "Akshit")
        Information.Rows.Add(2, "Mohit")

        'Updating Row
        Dim updateRow As New DataView(Information)
        updateRow(1)("StudentName") = "MOHIT"
        updateRow(1)("StudentID") = "8011"

        DataGridView1.DataSource = Information
    End Sub

    Private Sub Button5_Click(sender As Object, e As EventArgs) Handles Button5.Click
        Dim Information As New DataTable("Student1")
        Dim Id As New DataColumn("studentID", GetType(Integer))
        Dim stName As New DataColumn("studentName", GetType(String))

        'Same as Dim Variables
        Information.Columns.Add(Id)
        Information.Columns.Add(stName)

        Information.Rows.Add(1, "Akshit")
        Information.Rows.Add(2, "Mohit")

        DataGridView1.DataSource = Information

        'Searching
        Dim Search As New DataView(Information)
        Search.Sort = "StudentName"
        Dim loc As Integer = Search.Find("Akshit")
        MessageBox.Show("Row with StudentName = 'Akshit' Found At : " & loc)
    End Sub

    Private Sub Button6_Click(sender As Object, e As EventArgs) Handles Button6.Click
        Dim Information As New DataTable("Student1")
        Dim Id As New DataColumn("studentID", GetType(Integer))
        Dim stName As New DataColumn("studentName", GetType(String))

        'Same as Dim Variables
        Information.Columns.Add(Id)
        Information.Columns.Add(stName)

        Information.Rows.Add(1, "Akshit")
        Information.Rows.Add(2, "Mohit")

        'Deleting Row
        Dim deleteRow As New DataView(Information)
        deleteRow(1).Delete()
        DataGridView1.DataSource = Information
    End Sub
End Class