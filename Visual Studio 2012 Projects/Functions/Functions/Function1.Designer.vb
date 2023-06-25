<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class Function1
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Me.buttonadd = New System.Windows.Forms.Button()
        Me.SuspendLayout()
        '
        'buttonadd
        '
        Me.buttonadd.Location = New System.Drawing.Point(69, 68)
        Me.buttonadd.Name = "buttonadd"
        Me.buttonadd.Size = New System.Drawing.Size(147, 94)
        Me.buttonadd.TabIndex = 0
        Me.buttonadd.Text = "Run Function"
        Me.buttonadd.UseVisualStyleBackColor = True
        '
        'Function1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(8.0!, 16.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(282, 253)
        Me.Controls.Add(Me.buttonadd)
        Me.Name = "Function1"
        Me.Text = "Form1"
        Me.ResumeLayout(False)

    End Sub
    Friend WithEvents buttonadd As System.Windows.Forms.Button

End Class
