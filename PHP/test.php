<?php

echo "Array<br>";

$a = array("one","two","three","four","five");
$arrlength = count($a);

for($x = 0; $x < $arrlength; $x++) 
{
  echo $a[$x];
  echo "<br>";
}

echo "Two Dimensional array<br>";

$fruits= array (array("apple",220),
  array("banana",153),
  array("Oranges",170),
  array("Mango",300)
);
for($row=0;$row<4;$row++) 
{
for($col=0;$col<2;$col++) 
{
echo $fruits[$row][$col]." "; 
}
echo "<br>";
}

echo "Associative array<br>";

$company=array("GOOGLE"=>"1","FACEBOOK"=>"2","JIO"=>"3","oracle"=>"4","Yahoo"=>"5");
foreach ($company as $x)
{
echo "$x";
echo "<br>";
}


$ar=array("one","two","three","four","five");
echo is_array($ar);
echo "<br>".count($ar);
echo "<br>".in_array($ar[1],$ar);
echo "<br>".sizeof($ar);


?>
