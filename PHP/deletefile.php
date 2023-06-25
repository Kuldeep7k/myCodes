<?php
$newfn="k.txt";
if(unlink($newfn))
{
echo sprintf("file %s removed",$newfn);
}
else 
{
echo ("An error occured during copy");
}
fclose($newfn);
?>