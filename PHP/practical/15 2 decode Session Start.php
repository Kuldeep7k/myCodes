<?php
session_start();

$_SESSION["Title"]="PHP";
$_SESSION["Author"]="KK";
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