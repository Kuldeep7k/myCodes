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

//inseting in records

mysqli_query($con,"insert into Sales_order(Order_no,order_date,Client_no,Salesman_no,delay_date,date_order_status) values (1,'9-Jan-20',135, 3453463,'19-Jan-20','confirmed')");
mysqli_query($con,"insert into Sales_order(Order_no,order_date,Client_no,Salesman_no,delay_date,date_order_status) values (2,'1-FEB-20',77,3456346,'11-FEB-20','Pending')");
mysqli_query($con,"insert into Sales_order(Order_no,order_date,Client_no,Salesman_no,delay_date,date_order_status) values (5,'8-SEP-20',99,457743,'18-SEP-20','Pending')");
mysqli_query($con,"insert into Sales_order(Order_no,order_date,Client_no,Salesman_no,delay_date,date_order_status) values (7,'13-Jun-20',13,157745,'23-Jun-20','Shipped')");
mysqli_query($con,"insert into Sales_order(Order_no,order_date,Client_no,Salesman_no,delay_date,date_order_status) values (9,'19-DEC-20',19,111117,'29-DEC-20','Shipped')");

mysqli_close($con);
?>
</body>
</html>

ALTER TABLE Sales_order
ADD PRIMARY KEY(Order_no);