<?php
$n='prime';
$a=7;
$b=8;
$c=5;
$m=-5;
switch ($n) {
  case 'prime':
     $flag=0;
for ($i = 2; $i <= $a / 2; ++$i) 
{
if ($a % $i == 0) 
{
$flag = 1;
break;
}
}
if ($flag == 0)
echo "$a is a prime number.";
else
echo "$a is not a prime number.";

    break;
  case 'square':
    $s=$c*$c;
echo "$c square is $s";
    break;

  case 'oddeven':
       if($a/2==0)
{
echo "$a is PRime";
}
else 
{
echo "$a not PRime";
}

  case 'posneg':
       if($a>0)
{
echo "$a is Positive";
}
else 
{
echo "$a is Negative";
}
    break;
  default:
   echo "Wrong input";
}
?>