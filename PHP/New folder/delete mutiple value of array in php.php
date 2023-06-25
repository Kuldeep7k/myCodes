<?php
$name[0]="kk";
$name[1]="gg";
$name[2]="kd";
$name[3]="Sam";
echo $name[2]."<br>";
echo $name[0]."<br>";
unset($name[2],$name[0]);
echo $name[2]."<br>";
echo $name[0]."<br>";
?>