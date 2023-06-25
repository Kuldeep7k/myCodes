<?php
$myfile="pattern.php";
$fp=fopen($myfile,'r');
if($fp==false)
{
echo("Error in a opening file");
exit();
}
$fsize=filesize($myfile);
$filetext=fread($fp,$fsize);
echo("$filetext");
fclose($fp);
?>