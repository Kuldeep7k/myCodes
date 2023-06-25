<?php
$fees=array("Aman"=>400,"Ankit"=>500,"Rahul"=>600);
$a=array_keys($fees);
for($i=0; $i<count($a);$i++)
{
echo $a[$i]."=".$fees[$a[$i]]."<br>";
}
?>