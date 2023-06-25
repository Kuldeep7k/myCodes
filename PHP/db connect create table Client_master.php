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

//creating table Client_master
$sql= "Create table Client_master(Client_no int,Name char(30),Address char(30),City char(30),State char(30),Pincode char(30),Remarks char(30),Bal_due int)";
if(mysqli_query($con,$sql))
{
echo "<br>Table Client_master created successfull";
}
else 
{
echo "Table not created ".mysqli_error($con);
}
mysqli_close($con);
?>
</body>
</html>