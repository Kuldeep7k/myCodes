<?php
function mytest()
{
static $x=1;
echo $x;
$x++;
}
mytest();
mytest();
mytest();
?>