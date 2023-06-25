<?php
$x=5;
function mytest()
{
$x=10;
echo "Local Variable x :".$x;
echo "<br>";
echo "Global Variable x : $GLOBALS[x]";
}
mytest()
?>