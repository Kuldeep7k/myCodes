<%@ Page Language="vb" AutoEventWireup="false" CodeBehind="requiredfield and validation summary controls.aspx.vb" Inherits="WebApplication1.WebForm3" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
    <style type="text/css">
        .auto-style1 {
            height: 26px;
        }
        .auto-style2 {
            height: 26px;
            width: 316px;
        }
        .auto-style3 {
            width: 316px;
        }
        .auto-style4 {
            height: 26px;
            width: 378px;
        }
        .auto-style5 {
            width: 378px;
        }
    </style>
</head>
<body>
    <form id="form1" runat="server">
    <div>
        <table style="width: 100%; height: 79px;">
            <tr>
                <td class="auto-style2">Enter username</td>
                <td class="auto-style4">
                    <asp:TextBox ID="TextBox1" runat="server" Width="368px"></asp:TextBox>
                </td>
                <td class="auto-style1">
                    <asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server" ControlToValidate="TextBox1" ErrorMessage="username must not be empty">required</asp:RequiredFieldValidator>
                </td>
            </tr>
            <tr>
                <td class="auto-style3">password</td>
                <td class="auto-style5">
                    <asp:TextBox ID="TextBox2" runat="server" Width="365px"></asp:TextBox>
                </td>
                <td>
                    <asp:RequiredFieldValidator ID="RequiredFieldValidator2" runat="server" ControlToValidate="TextBox2" ErrorMessage="password not empty">required</asp:RequiredFieldValidator>
                </td>
            </tr>
            <tr>
                <td class="auto-style3">&nbsp;</td>
                <td class="auto-style5">
                    <asp:Button ID="Button1" runat="server" Text="Button" />
                </td>
                <td>
                    &nbsp;</td>
            </tr>
            <tr>
                <td class="auto-style3">
                    <asp:ValidationSummary ID="ValidationSummary1" runat="server" Height="66px" />
                </td>
                <td class="auto-style5">
                    &nbsp;</td>
                <td>
                    &nbsp;</td>
            </tr>
            <tr>
                <td class="auto-style3">&nbsp;</td>
                <td class="auto-style5">
                    &nbsp;</td>
                <td>&nbsp;</td>
            </tr>
        </table>
    </div>
    </form>
</body>
</html>
