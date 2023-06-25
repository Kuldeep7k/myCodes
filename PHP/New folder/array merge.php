<?php
$car=array("BMW","OD","Toyota","Regera");
$price=array(2,4,5,8);
$arr=array_merge($car,$price);
foreach($arr as $value)
{
echo "$value ";
}
?>