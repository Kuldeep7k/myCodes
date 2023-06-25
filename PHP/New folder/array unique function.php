<?php
$fruit=array("Mango","Apple","Cherry","Grapes","Mango","Apple");
echo "Display array elements <br>";
for($x=0;$x<count($fruit);$x++)
{
echo $fruit[$x],"<br>";
}
echo "Array after removing duplicate <br>";
$unique_array=array_unique($fruit);
for($x=0;$x<count($unique_array);$x++)
{
echo $fruit[$x],"<br>";
}
?>