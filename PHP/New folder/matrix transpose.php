<?php
// transpose matrix
function transpose(&$A,&$B)
{
$M=2;
$N=3;
for($i=0; $i<$N;$i++)
{
for($j=0; $j<$M;$j++)
{
$B[$i][$j]=$A[$j][$i];
}
}
}

$A=array(array(1,2,3),
	array(4,5,6),
	array(7,8,9));
$N=3;
$M=2;

transpose($A,$B);

echo "Result matrix is <br>";
for($i=0; $i<$N;$i++)
{
for($j=0; $j<$M;$j++)
{
echo $B[$i][$j];
echo " ";
}
echo "<br>";
}

?>