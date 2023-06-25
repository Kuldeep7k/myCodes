<html>
<head><title>DB connect</title></head>
<body>
<?php
//$con=mysqli_connect("localhost","root","","BCA");
if(mysqli_connect_errno())
{
echo "Faild conncect to connect :".mysqli_connect_error();
}
else
{
echo "Connected Successfully";
}
if($_POST)
{
$txtName=$_POST['uname'];
$txtemail=$_POST['email'];
$txtGender=$_POST['gender'];
$txtAddress=$_POST['tname'];
$txtCity=$_POST['city'];
$txtDob=$_POST['dob'];
$txtPhone=$_POST['pname'];


mysqli_query($con,"insert into form(Name,Father_name,Mother_name,Rollno,Gender,City,
Address,dob,College,Stream,Phone_no,Marks1,Marks2,Email) 
values ('$txtName','$txtFather','$txtMother','$txtRollno','$txtGender','$txtCity','$txtAddress','$txtDob','$txtCollege'
,'$txtStream','$txtPhone','$txtMarks1','$txtMarks2','$txtemail')");

mysqli_close($con);

echo "<br>Data inserted in database ";



echo "<br>Cokkiees set<br>";

setcookie("Username",$txtName,time()+86400*30);
setcookie("Father's_Name",$txtFather,time()+86400*30);
setcookie("Mother's_Name",$txtMother,time()+86400*30);
setcookie("Rollno",$txtRollno,time()+86400*30);
setcookie("Gender",$txtGender,time()+86400*30);
setcookie("City",$txtCity,time()+86400*30);
setcookie("Address",$txtAddress,time()+86400*30);
setcookie("Dob",$txtDob,time()+86400*30);
setcookie("College",$txtCollege,time()+86400*30);
setcookie("Stream",$txtStream,time()+86400*30);
setcookie("Phone",$txtPhone,time()+86400*30);
setcookie("10th_Marks",$txtMarks1,time()+86400*30);
setcookie("12th_Marks",$txtMarks2,time()+86400*30);
setcookie("Email",$txtemail,time()+86400*30);


echo "<br> <br>Session is now Set:"."<br>";

session_start();

$_SESSION["Username"]=$txtName;
$_SESSION["Father's Name"]=$txtFather;
$_SESSION["Mother's Name"]=$txtMother;
$_SESSION["Rollno"]=$txtRollno;
$_SESSION["Gender"]=$txtGender;
$_SESSION["City"]=$txtCity;
$_SESSION["Address"]=$txtAddress;
$_SESSION["Dob"]=$txtDob;
$_SESSION["College"]=$txtCollege;
$_SESSION["Stream"]=$txtStream;
$_SESSION["Phone"]=$txtPhone;
$_SESSION["10th_Marks"]=$txtMarks1;
$_SESSION["12th_Marks"]=$txtMarks2;
$_SESSION["Email"]=$txtemail;


?>
</body>
</html>


