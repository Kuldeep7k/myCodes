<?php
function dis($num)
{
if($num<=5)
{
echo "$num <br>";
dis($num+1);
}
}
dis(1);
?>