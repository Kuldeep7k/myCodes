<?php
$fruits1=array("Apple","Mango","Grapes","Cherry");
$fruits2=array("Wattermeleon","Apple","Grapes");
echo "The elements of fruits1: <br>";
print_r($fruits1);
echo "<br>The elements of fruits2: <br>";
print_r($fruits2);
$diff=array_diff($fruits1,$fruits2);
echo "<br> The diffs elements are: <br>";
print_r($diff);
?>