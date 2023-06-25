<%@ Page Language="vb" AutoEventWireup="false" CodeBehind="WebForm2.aspx.vb" Inherits="WebApplication1.WebForm2" %>
<script runat="server">
    Sub event_response(ByVal sender As Object, ByVal e As EventArgs)
        Dim btn As Button = CType(sender, button)
        Label1.Text="you pressed " & btn.ID 
        
    End Sub
    
        
        </script>
<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
        <asp:Button ID="Button1" runat="server" Text="Button-1" 
        Onclick="event_response"
        runat="server" />
        <asp:Button ID="Button2" runat="server" Text="Button-2" 
          Onclick="event_response"
        runat="server" />
    
    </div>
        <p>
            <asp:Label ID="Label1" runat="server" Text="Label"></asp:Label>
        </p>
    </form>
</body>
</html>
