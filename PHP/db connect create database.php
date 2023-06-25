<html>
<head><title>DB connect</title></head>
<body>
<?php
$con=mysqli_connect("localhost","root","","MYSQL");
if(mysqli_connect_errno())
{
echo "Faild conncect to connect :".mysqli_connect_error();
}
else
{
echo "Connected Successfully";
}
$sql= "Create Database BCA";
if(mysqli_query($con,$sql))
{
echo "<br> Database BCa created successfull";
}
else 
{
echo "Database not created ".mysqli_error($con);
}
mysqli_close($con);
?>
</body>
</html>