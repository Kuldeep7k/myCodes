<?php
function f($a=10,$b=20) 
{
echo $a+$b."<br>";
}
function f2($a=10,$b=20) 
{
return $a+$b;
}
f(77,88);
echo f2()."<br>";
?>