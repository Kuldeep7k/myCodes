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

//creating table
$sql= "Create table STUDENT(FirstName char(30),LastName char(30),Age int)";
if(mysqli_query($con,$sql))
{
echo "<br> table Student created successfull";
}
else 
{
echo "table not created ".mysqli_error($con);
}
mysqli_close($con);
?>
</body>
</html>