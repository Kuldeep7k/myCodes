<?php
session_start();
?>
<html><head><title> SEssion variables </title></head>
<body>
<h1>Destroy variables</h1>
<?php
if (isset($_SESSION["Author"]))
{
session_destroy();
echo "Session deleted";
}
else
{
echo "not working";
}

?>
</body>
</html>