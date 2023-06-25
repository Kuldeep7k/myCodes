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

//creating table DEPT
$sql="Create table Dept(Deptno int,Dname char(25),Loc char(25))";
if(mysqli_query($con,$sql))
{
echo "<br>Table DEPT created successfull";
}
else 
{
echo "Table not created ".mysqli_error($con);
}
mysqli_close($con);
?>
</body>
</html>