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
echo"<br>";
echo $ecd;
//Decode
echo"<br>";
session_decode($ecd);
echo"<br>Session Decoded data :<br>";
echo "<pre>";
print_r ($_SESSION);
echo "</pre>";
?>
</body>
</html>