<?php
$x=3;
function mytest()
{
global $x;
echo $x;
}
mytest();
?>