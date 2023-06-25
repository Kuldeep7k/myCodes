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

mysqli_query($con,"insert into Client_master(Client_no,Name,Address,City,State,Pincode,Remarks,Bal_due) values (101,'Paul','#135 Sector 36','Ambala','Haryana',160041,'Angry',2000)");
mysqli_query($con,"insert into Client_master(Client_no,Name,Address,City,State,Pincode,Remarks,Bal_due) values (107,'Sarah','#77 Sector 6','Gurgaon','Haryana',160001,'Good',1000)");
mysqli_query($con,"insert into Client_master(Client_no,Name,Address,City,State,Pincode,Remarks,Bal_due) values (99,'Mary','#99 Sector 16','Mohali','Chandigarh',160034,'Polite',7000)");
mysqli_query($con,"insert into Client_master(Client_no,Name,Address,City,State,Pincode,Remarks,Bal_due) values (104,'Valery','#13 Sector 13','Jalandhar','Punjab',140001,'Hardwork',500)");
mysqli_query($con,"insert into Client_master(Client_no,Name,Address,City,State,Pincode,Remarks,Bal_due) values (110,'Alice','#19 Sector 77','Chandigarh','Chandigarh',160077,'Lazy',700)");

mysqli_close($con);
?>
</body>
</html>