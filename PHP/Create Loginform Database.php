<html>
<head><title>DB connect</title></head>
<body>
<?php
$con=mysqli_connect("localhost","root","","BCA");
if(mysqli_connect_errno())
{
echo "Faild conncect to connect :".mysqli_connect_error();
}
else
{
echo "Connected Successfully";
}

//creating table emp
$sql= "Create table form(Name char(30),Father_name char(30),Mother_name char(30),Rollno int,Gender char(8),City char(20),Address char(30),dob char(30),
College char(30),Stream char(20),Phone_no int,Marks1 int,Marks2 int,Email char(20))";
if(mysqli_query($con,$sql))
{
echo "<br>Table form created Successfull";
}
else 
{
echo "Table not created ".mysqli_error($con);
}
mysqli_close($con);
?>
</body>
</html>