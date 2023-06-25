<?php
$fruit=array("Apple","Grapes","Cherry","Mango");
$n=count($fruit);
echo "Count function :".$n."<br>";
echo "Current fruit :".current($fruit)."<br>";
echo "Next fruit :".next($fruit)."<br>";
echo "Previous fruit :".prev($fruit)."<br>";
echo "<br><br>Display All Fruits :";
for ($x=0;$x<$n;$x++)
{
echo $fruit[$x]."<br>";
}
echo "Reset fruit".reset($fruit)."<br>";
echo "End fruit".end($fruit)."<br>";

$number = range(0,10,3);
print_r ($number);
?>