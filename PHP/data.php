<?php
$k=1234;
if ($_POST["gg"]=="k")
{
$YourName=$_POST['name'];
echo "Your Name=$YourName<br>";

$Gender=$_POST['gender'];
echo "Your Gender=$Gender<br>";

$Address=$_POST['tname'];
echo "Your Address=$Address<br>";

$cal=$_POST['dob'];
echo "Your Date of Birth=$cal <br>";

echo "Your Subjects :";
if (isset($_REQUEST["check1"]))
echo $_REQUEST["check1"]," , ";
if(isset($_POST["check2"]))
echo $_POST["check2"]," , ";
if(isset($_POST["check3"]))
echo $_POST["check3"]," , ";
if(isset($_POST["check4"]))
echo $_POST["check4"]," , ";
if(isset($_POST["check5"]))
echo $_POST["check5"]," , ";


$Sal=$_POST['sal'];
echo "<br>Your Salary=$Sal <br>";

$Email=$_POST['email'];
echo "Your Email=$Email <br>";

$phone=$_POST['kk'];
echo "Your Phone No.=$phone <br>";

$code=$_POST['gg'];
echo "Your Password=$code<br>";

}

else
echo "Password Denied!!!. Wrong Password";



?>