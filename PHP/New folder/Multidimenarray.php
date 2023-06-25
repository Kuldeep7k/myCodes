<?php
$marks=array("Mohit"=>array("Php"=>44,"Java"=>61,"C"=>55),
"Sam"=>array("Php"=>43,"Java"=>60,"C"=>59));
echo("Mohit marks in java <br>");
echo $marks["Mohit"]["Java"]."<br>";
echo("Sam marks in php <br>");
echo $marks["Sam"]["Php"]."<br>";

if($marks["Sam"]["Php"]>=$marks["Sam"]["Java"] && $marks["Sam"]["Php"]>=$marks["Sam"]["C"])
{
echo "<br>Sam high marks in PHP ".$marks["Sam"]["Php"];
}
if($marks["Sam"]["Java"]>=$marks["Sam"]["Php"] && $marks["Sam"]["Java"]>=$marks["Sam"]["C"])
{
echo "<br>Sam high marks in JAVA ".$marks["Sam"]["Java"];
}
else
{
echo "<br>Sam high marks in C ".$marks["Sam"]["C"];
}
?>