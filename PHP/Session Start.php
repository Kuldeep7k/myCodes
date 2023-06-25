<?php
session_start();
?>
<html><head><title> SEssion variables </title></head>
<body>
<h1> Session variables</h1>
<?php
//ini_set('session.gc_maxlifetime',3600);
$_SESSION["Title"]=" Web Application using PHP";
$_SESSION["Author"]=" KK";
echo "Session variables are set";
?>
</body>
</html>