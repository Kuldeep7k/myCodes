<?php
$cookie_name="11";
$cookie_value="op";
$cookie_expire=time()+60*60*24*30;

setcookie($cookie_name,$cookie_value,$cookie_expire);

if(isset($_cookie[$cookie_name]))
{
echo "NOT SET";
}
else
{
echo $cookie_name;
echo "<br>";
echo $cookie_value;
}
?>