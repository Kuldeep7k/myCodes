<?php
$sec[0]="one";
$sec[1]="two";
$sec[2]="three";
$sec[3]="four";
$sec[4]="five";
$sec[5]="six";
$sec[6]="seven";
for($i=0;$i<7;$i++)
{
echo $sec[$i]." ";
}
echo "<br>After slice: <br>";
$arr=array_slice($sec,1,4);
foreach($arr as $value)
{
echo"$value"." ";
}
echo "<br>After merge: <br>";
$a=array_merge($sec,$arr);
foreach($a as $value)
{
echo"$value"." ";
}
?>