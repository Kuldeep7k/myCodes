<?php
session_start();
$_SESSION["Title"]="PHP";
$_SESSION["Author"]="Ram";
$ecd=session_encode();
echo"Session Encoded data :<br>";
echo $ecd;
?>
