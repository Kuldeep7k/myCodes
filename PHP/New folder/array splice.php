<?php
$fruit=array("Mango","Apple","Cherry","Grapes","Mango","Apple");
echo "Display array elements <br>";
print_r ($fruit);
echo "<br>";
array_splice($fruit,1,2);
//unset($fruit[1]);
echo "After Splice funtion :<br>";
print_r ($fruit);
?>