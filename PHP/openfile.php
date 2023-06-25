<?php
$myfile="k.txt";
$fp=fopen($myfile,'r');
if($fp==false)
{
echo("Error in a opening file");
exit();
}
else
{
echo("file has opened successfully");
}
?>