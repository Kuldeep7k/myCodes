<?php
$fn="lol2.php";
$newfn="lol3.txt";
if(rename($fn,$newfn))
{
echo sprintf("%s was rename to %s",$fn,$newfn);
}
else 
{
echo ("An error occured during copy");
}
fclose($fn);
fclose($newfn);
?>