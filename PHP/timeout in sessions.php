<?php
session_start();
$_SESSION['name']="kuldeep";
echo "<pre>";
print_r ($_SESSION);
echo "</pre>";
if (isset($_SESSION['name']))
{
time()+300;
}
?>
