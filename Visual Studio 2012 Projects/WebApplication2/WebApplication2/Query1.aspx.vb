Public Class Query1
    Inherits System.Web.UI.Page

    Protected Sub Page_Load(ByVal sender As Object, ByVal e As System.EventArgs) Handles Me.Load
        If Not IsPostBack Then
            Label1.Text = Request.QueryString("Userid")
            Label2.Text = Request.QueryString("UserName")

        End If
    End Sub

End Class