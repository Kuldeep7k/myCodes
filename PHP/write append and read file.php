<?php

//Write
$myfile="newfile.txt";
$fp=fopen($myfile,'w');
if($fp==false)
{
echo ("Error in opening a file");
exit();
}
fwrite($fp,"Hello !!!!!");
fclose($fp);

//append
$fp=fopen($myfile,'a');
if(fwrite($fp,'Goodbye'))
{
echo ("File appended");
}
else 
{
echo ("<br>An error occured during appened");
}

//open
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
?>