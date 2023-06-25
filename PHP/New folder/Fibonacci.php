<?php
$a=10;
$d=0;
$e=1;
echo("The Fibonacci Series is:<br> ".$d."<br>".$e);
for($b=2; $b<$a; $b++)
{
$c=$d+$e;
$d=$e;
$e=$c;
echo("<br> $c");
}
?>