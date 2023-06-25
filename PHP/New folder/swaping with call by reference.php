<?php
function swap($a,$b)
{
$temp=$a;
$a=$b;
$b=$temp;
echo "<br>After Swaping A=".$a." B=".$b;
}
$a=7;
$b=9;
echo "<br>Before Swaping A=$a B=$b";
swap($a,$b);
echo "<br>After calling Swap() A=$a B=$b";
?>