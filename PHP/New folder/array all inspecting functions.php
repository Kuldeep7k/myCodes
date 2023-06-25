<?php
$arr=array("one","two","three","four","five","six");
$n=count($arr);
echo "Count function :".$n."<br>";
echo "Current arr :".current($arr)."<br>";
echo "Next arr :".next($arr)."<br>";
echo "Previous arr :".prev($arr)."<br>";
echo "<br><br>Display Arrays:";
for ($x=0;$x<$n;$x++)
{
echo $arr[$x]." ";
}
echo "<br>Reset arr :".reset($arr)."<br>";
echo "End arr :".end($arr)."<br>";

$number=range(1,3);
print_r($number);
?>