<?php
$myfile="newfile.txt";
$fp=fopen($myfile,'a+');
if($fp==false)
{
echo ("Error in opening a file");
exit();
}
fwrite($fp,"ka hal ha ygygygygyg");
fclose($fp);
?>