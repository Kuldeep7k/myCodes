<?php
session_start();
?>
<html><head><title> SEssion variables </title></head>
<body>
<h1>destroy variables</h1>
<?php
if (isset($_SESSION["Author"]))
{
unset($_SESSION["Author"]);
}
echo "Session Author variables deleted";
?>
</body>
</html>