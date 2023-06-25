<?php
$arr=array("One","Two","Three","four","five","Six");
echo "splice<br>";
print_r($arr);
echo "<br>";
array_splice($arr,1,2);
echo "<br>";
print_r($arr);
echo "<br>";
echo "Unset<br>";
print_r($arr);
echo "<br>";
unset($arr[2]);
echo "<br>";
print_r($arr);
?>
