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

mysqli_query($con,"insert into Dept(Deptno,Dname,Loc) values (10,'Accounting','New York')");
mysqli_query($con,"insert into Dept(Deptno,Dname,Loc) values (20,'Research','Dallas')");
mysqli_query($con,"insert into Dept(Deptno,Dname,Loc) values (30,'Sales','Chicago')");
mysqli_query($con,"insert into Dept(Deptno,Dname,Loc) values (40,'Operation','Boston')");

mysqli_close($con);
?>
</body>
</html>
