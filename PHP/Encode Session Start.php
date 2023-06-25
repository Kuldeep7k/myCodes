<?php
session_start();
?>
<html><head><title> SEssion variables </title></head>
<body>
<h1> Session variables</h1>
<?php
$_SESSION["Title"]=" Web Application using PHP";
$_SESSION["Author"]=" KK";
$ecd=session_encode();
echo"Session Encoded data :<br>";
echo $ecd;
?>
</body>
</html>