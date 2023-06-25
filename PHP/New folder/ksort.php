<?php
$age=array("Kk"=>7,"Gg"=>2,"Z"=>9,"A"=>1); 
echo "The elements are :<br>";
print_r($age);
echo "<br>";

ksort($age);
echo "After accending sort :";
print_r($age);
?>