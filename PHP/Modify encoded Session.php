<?php
session_start();
$_SESSION["Title"]="Web Application using PHP";
$_SESSION["Author"]="Puneet kumar";
$session_encd=session_encode();
echo "Session Encoded data :<br>";
echo $session_encd;
//changing session variable value
$_SESSION["Title"]="Php programming";
$_SESSION["Author"]="Puneet kumar";
echo "<br> <br>the change session values :<br>";
echo "<pre>";
print_r ($_SESSION);
echo "</pre>";
//Decode
echo "<br>The  Decode data :<br>"; //this will show old data because we did not encode after modify encode session
session_decode($session_encd);
echo "<pre>";
print_r($_SESSION);
echo "</pre>"

?>
