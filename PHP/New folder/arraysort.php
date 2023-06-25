<?php
//$a=array("Mango","Cherry","Guava","Apple","Banana");
$a=array(4,5,2,3,1);
echo "the array elemets are :<br>";
for($x=0;$x<5;$x++)
{
echo $a[$x]."<br>";
}
sort($a);
echo "Elements after sorting <br>";
for($x=0;$x<5;$x++)
{
echo $a[$x]."<br>";
}
?>