Public Class WebForm1
    Inherits System.Web.UI.Page

    Protected Sub Page_Load(ByVal sender As Object, ByVal e As System.EventArgs) Handles Me.Load

    End Sub

    Protected Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Response.Cookies("myCookie").Value = TextBox1.Text
        Response.Cookies("myCookie").Expires = DateTime.Now.AddDays(1)

    End Sub

    Protected Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        If Not Request.Cookies("myCookie") Is Nothing Then
            Dim aCookie As HttpCookie = Request.Cookies("myCookie")
            Label1.Text = Server.HtmlEncode(aCookie.Value)
        Else
            Label1.Text = "No Cokkie Available"

        End If
    End Sub

    Protected Sub Button3_Click(sender As Object, e As EventArgs) Handles Button3.Click
        Dim getCookie As String
        If Request.Cookies("myCookie") Is Nothing Then
            getCookie = ""
        Else
            Dim aCookie As HttpCookie = Request.Cookies("myCookie")
            getCookie = Server.HtmlEncode(aCookie.Value)
        End If
        Response.Cookies("myCookie").Value = "Modified Cookie's Data:" + getCookie
        Response.Cookies("myCookie").Expires = DateTime.Now.AddDays(1)
    End Sub

    Protected Sub Button4_Click(sender As Object, e As EventArgs) Handles Button4.Click
        Response.Cookies("myCookie").Expires = DateTime.Now.AddDays(-1)
    End Sub
End Class