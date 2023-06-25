<?php
//First method numeric array
$num=array(1,2,3,4,5);
foreach($num as $value)
{
echo"Value is $value <br>";
}
//Second Method
$num[0]="one";
$num[1]="two";
$num[2]="three";
$num[3]="four";
$num[4]="five";
foreach($num as $value)
{
echo"Value is $value <br>";
}
?>