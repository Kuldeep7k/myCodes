<?php
//open
$myfile="newfile.txt";
$fp=fopen($myfile,'r');
if($fp==false)
{
echo("<br>Error in a opening file");
exit();
}
else
{
echo("<br>file has opened successfully");
}
fclose($fp);

//Write

$fp=fopen($myfile,'w+');
if($fp==false)
{
echo ("Error in opening a file");
exit();
}
fwrite($fp,"Hello !!!!!");

echo sprintf("%s is deleted",$myfile);
fclose($fp);

unlink("$myfile");
?>