Public Class Form2

    Private Sub Form2_KeyDown(sender As Object, e As KeyEventArgs) Handles Me.KeyDown
        If e.KeyCode = Keys.F12 Then
            TextBox1.Text = "Key down event used"
        End If
    End Sub

    Private Sub Form2_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        Me.Text = "Form event"
        Dim btn As New System.Windows.Forms.Button
        btn.Text = "new button time"
        btn.Left = 200
        btn.Top = 60
        btn.Width = 150
        Me.Controls.Add(btn)
    End Sub

    Private Sub Form2_MouseClick(sender As Object, e As MouseEventArgs) Handles Me.MouseClick
        If e.Button = MouseButtons.Right Then
            Me.BackColor = Color.Violet


        End If
    End Sub

    Private Sub Form2_MouseDown(sender As Object, e As MouseEventArgs) Handles Me.MouseDown
        If e.Button = MouseButtons.Left Then
            TextBox2.Text = "Mouse left click at " + CStr(e.X) + " : " + CStr(e.Y)
        End If
    End Sub

    Private Sub Form2_MouseEnter(sender As Object, e As EventArgs) Handles Me.MouseEnter
        TextBox3.Text = "Mouse Entered"
    End Sub

    Private Sub Form2_MouseLeave(sender As Object, e As EventArgs) Handles Me.MouseLeave
        TextBox4.Text = "Mouse Exited"
    End Sub
End Class