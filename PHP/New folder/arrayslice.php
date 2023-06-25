<?php
$car=array("BMW","OD","Toyota","Regera");
$subarr=array_slice($car,1,3);
foreach($subarr as $value)
{
echo "$value <br>";
}
?>