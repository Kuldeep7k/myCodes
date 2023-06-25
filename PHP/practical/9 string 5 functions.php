<?php
//1
$a="Have a nice day";
$find="nice";
echo"original string:".$a."<br>";
echo "Result for looking \"$find\" :  ".strstr($a,$find)."<br>";

//2
echo strpos("Hello world to You","Hello");
echo"<br>";
//3
$l=strlen($a);
echo"$a has $l character";
echo"<br>";
//4
$str="You are looking str_replace final year";
echo"$str<br> after replace function :- ";
echo str_replace("str_replace","BCA",$str);
echo"<br>";
//5
$u=strtoupper($a);
echo"$a to upper $u character";
?>