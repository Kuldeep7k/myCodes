<?php
$cookie_name="user1";
$cookie_value="hello";
$cookie_expire=time()+60*60*24*30;

setcookie($cookie_name,$cookie_value,$cookie_expire);

if(isset($_COOKIE[$cookie_name]))
{
echo "Cookie ",$cookie_name,"is set.<br>";
echo "Cookie value is $_COOKIE[$cookie_name]";
}
else
{
echo "cookie",$cookie_name,"is not set.<br>";
}
?>