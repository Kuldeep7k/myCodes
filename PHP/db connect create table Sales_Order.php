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

//creating table Sales_order
$sql="Create table Sales_order(Order_no int primary key,order_date char(30),Client_no int unique key,Salesman_no int,delay_date char(30),date_order_status char(30))";
if(mysqli_query($con,$sql))
{
echo "<br>Table Sales_order created successfull";
}
else 
{
echo "Table not created ".mysqli_error($con);
}
mysqli_close($con);
?>
</body>
</html>