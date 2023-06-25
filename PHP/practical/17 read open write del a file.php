<?php
//open
$myfile="file.txt";
$fp=fopen($myfile,'r');
if($fp==false)
{
echo("Error in a opening file<br>");
exit();
}
else
{
echo("file has opened successfully<br>");
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

//read
$rfile = fopen("file.txt", "r");
echo "Content is :".fread($rfile,filesize("file.txt"));

echo sprintf("<br>%s is deleted",$myfile);
fclose($fp);

//delete 
unlink("file.txt");
?>