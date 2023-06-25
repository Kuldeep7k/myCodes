<?php
$fn="newfile.txt";
$newfn="newfile2.txt";
if(copy($fn,$newfn))
{
echo ("Copy done");
}
else 
{
echo ("An error occured during copy");
}

fclose($fn);
fclose($newfn);
?>