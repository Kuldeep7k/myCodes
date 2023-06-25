<?php
$cookie_name="user";
echo $cookie_name;
echo "<br>";
$cookie_value="Kuldeep";
echo $cookie_value;
echo "<br>";
$cookie_expire=time()+60*60*24*30;

setcookie($cookie_name,$cookie_value,$cookie_expire);

if(!isset($_COOKIE["user"])) {  
    echo "Sorry, cookie is not found!";  
} else {  
    echo "<br/>Cookie Value: " . $_COOKIE["user"];  
}  
?>