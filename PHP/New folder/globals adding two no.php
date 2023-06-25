<?php
$a=7;
$b=8;
function sum()
{
$a=10;
$b=20;
$c=$GLOBALS["a"]+$GLOBALS["b"];
echo $c;

}
sum();
?>