Imports System.Data.OleDb

Public Class Ration
    Dim pro As String
    Dim connstring As String 'Connection
    Dim command As String 'to pass command
    Dim myconnection As OleDbConnection = New OleDbConnection 'To link with database
    Dim ds As New OleDbDataAdapter 'help to connect with datagrid
    Dim con As New OleDbConnection 'help to connect database with datagrid
    Dim dt As New DataTable 'help data display in table format 

    Private Sub Ration_Load(sender As Object, e As EventArgs) Handles MyBase.Load

    End Sub

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        pro = "Provider = Microsoft.Ace.OlEDB.12.0;Data Source =C:\Users\kulde\Documents\Database1.accdb"
        connstring = pro
        myconnection.ConnectionString = connstring
        myconnection.Open()
        command = "INSERT INTO Table1([No],[Name],[Qty],[Price]) VALUES ('" & TextBox1.Text & "', '" & TextBox2.Text & "', '" & TextBox3.Text & "', '" & TextBox4.Text & "')"
        Dim cmd As OleDbCommand = New OleDbCommand(command, myconnection)
        cmd.Parameters.Add(New OleDbParameter("No", CType(TextBox1.Text, String)))
        cmd.Parameters.Add(New OleDbParameter("Name", CType(TextBox2.Text, String)))
        cmd.Parameters.Add(New OleDbParameter("Qty", CType(TextBox3.Text, String)))
        cmd.Parameters.Add(New OleDbParameter("Price", CType(TextBox4.Text, String)))
        MsgBox("Records Saved")
        Try
            cmd.ExecuteNonQuery()
            cmd.Dispose()
            myconnection.Close()
            TextBox1.Clear()
            TextBox2.Clear()
            TextBox3.Clear()
            TextBox4.Clear()
        Catch ex As Exception
            MsgBox(ex.Message)
        End Try
    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        pro = "Provider = Microsoft.Ace.OlEDB.12.0;Data Source =C:\Users\kulde\Documents\Database1.accdb"
        connstring = pro
        myconnection.ConnectionString = connstring
        myconnection.Open()
        command = "DELETE FROM [Table1] where [No] =" & TextBox1.Text & ""

        Dim cmd As OleDbCommand = New OleDbCommand(command, myconnection)

        MsgBox("Record(s) Deleted")
        Try
            cmd.ExecuteNonQuery()
            cmd.Dispose()
            myconnection.Close()
            TextBox1.Clear()
            TextBox2.Clear()
            TextBox3.Clear()
            TextBox4.Clear()
        Catch ex As Exception
            MsgBox(ex.Message)
        End Try

    End Sub

    Private Sub Button3_Click(sender As Object, e As EventArgs) Handles Button3.Click
        pro = "Provider = Microsoft.Ace.OlEDB.12.0;Data Source =C:\Users\kulde\Documents\Database1.accdb"
        connstring = pro
        myconnection.ConnectionString = connstring
        myconnection.Open()
        command = "Update [Table1] set [Name]='" & TextBox2.Text & "',[Qty]='" & TextBox3.Text & "',[Price]='" & TextBox4.Text & "'  where[No]=" & TextBox1.Text & ""

        Dim cmd As OleDbCommand = New OleDbCommand(command, myconnection)

        MsgBox("Record(s) Updated")
        Try
            cmd.ExecuteNonQuery()
            cmd.Dispose()
            myconnection.Close()
            TextBox1.Clear()
            TextBox2.Clear()
            TextBox3.Clear()
            TextBox4.Clear()
        Catch ex As Exception
            MsgBox(ex.Message)
        End Try
    End Sub

    Private Sub Button4_Click(sender As Object, e As EventArgs) Handles Button4.Click
        con.ConnectionString = "Provider = Microsoft.Ace.OlEDB.12.0;Data Source =C:\Users\kulde\Documents\Database1.accdb"
        con.Open()
        ds = New OleDbDataAdapter("Select * from Table1", con)
        ds.Fill(dt)
        DataGridView1.DataSource = dt.DefaultView
        con.Close()

    End Sub

    Private Sub Button5_Click(sender As Object, e As EventArgs) Handles Button5.Click
        TextBox1.Clear()
        TextBox2.Clear()
        TextBox3.Clear()
        TextBox4.Clear()


    End Sub
End Class