<?php
$a=1;
$b=2;
function mytest()
{
$GLOBALS['b']=$GLOBALS['a']+$GLOBALS['b'];
}
mytest();
echo $b;
?>