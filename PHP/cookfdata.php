<?php
session_start();
?>
<?php
$Yourname=$_POST['yname'];
$mail=$_POST['email'];
$passcode=$_POST['pwd'];
$gen=$_POST['gender'];
echo "<br>Name is ".$Yourname;
echo "<br>Email is ".$mail;
echo "<br>code is ".$passcode;
echo "<br>Gender is ".$gen;

setcookie("Username",$Yourname,time()+86400*30);
setcookie("Email",$mail,time()+86400*30);
setcookie("Password",$passcode,time()+86400*30);
setcookie("Gender",$gen,time()+86400*30);

$_SESSION["Uname"]=$Yourname;
$_SESSION["Mail"]=$mail;
$_SESSION["Password"]=$passcode;
$_SESSION["Gender"]=$gen;

echo "<br> <br>Session Data :"."<br>";
echo "Session Name :".$_SESSION["Uname"]."<br>";
echo "Session Email :".$_SESSION["Mail"]."<br>";
echo "Session Password :".$_SESSION["Password"]."<br>";
echo "Session Gender :".$_SESSION["Gender"]."<br>";
?>
