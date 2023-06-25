<?php
$YourName=$_POST['yname'];
$Email=$_POST['email'];
$Password=$_POST['pname'];

if($_POST["pname"]=="12345678")
{
echo "Password Accepted";
}
else
{
echo "Password Denied";
}

$Gender=$_POST['gender'];
$Address=$_POST['tname'];
echo "Your Name=$YourName<br>
	Your Email=$Email <br>
	Your Password=$Password<br>
	Your Gender=$Gender<br>
	Your Address=$Address<br>";
if(isset($_REQUEST["check1"]))
echo $_REQUEST["check1"],"<br> ";
if(isset($_POST["check2"]))
echo $_POST["check2"],"<br>";
if(isset($_POST["check3"]))
echo $_POST["check3"],"<br>";

if(isset($_REQUEST["radio1"]))
echo $_REQUEST["radio1"],"<br>";
if(isset($_POST["radio2"]))
echo $_POST["radio2"],"<br>";

if(isset($_POST["credit_card"]))
echo $_POST["credit_card"],"<br>";

?>