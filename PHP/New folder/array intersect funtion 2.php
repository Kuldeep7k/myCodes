<?php
$fruits1=array("Apple","Grapes","Grapes","Cherry");
$fruits2=array("Wattermeleon","Apple","Grapes");
echo "The elements of fruits1: <br>";
print_r($fruits1);
echo "<br>The elements of fruits2: <br>";
print_r($fruits2);
$common=array_intersect($fruits1,$fruits2);
echo "<br> The Common elements are: <br>";
print_r($common);
?>