Public Class GetSession
    Inherits System.Web.UI.Page

    Protected Sub Page_Load(ByVal sender As Object, ByVal e As System.EventArgs) Handles Me.Load
        Label1.Text = "Session item is  " + Session("mySession").ToString

    End Sub

End Class