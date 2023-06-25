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
mysqli_query($con,"insert into student(FirstName,LastName,Age) values ('Mohit','Kumar',19)");
mysqli_query($con,"insert into student(FirstName,LastName,Age) values ('Kuldeep','Singh',22)");
mysqli_query($con,"insert into student(FirstName,LastName,Age) values ('Pawan','Singh',15)");
mysqli_query($con,"insert into student(FirstName,LastName,Age) values ('Ram','Kumar',15)");
mysqli_query($con,"insert into student(FirstName,LastName,Age) values ('Suraj','Kumar',18)");
mysqli_query($con,"insert into student(FirstName,LastName,Age) values ('Virat','Kohli',19)");
mysqli_query($con,"insert into student(FirstName,LastName,Age) values ('MS','Dhoni',20)");
mysqli_query($con,"insert into student(FirstName,LastName,Age) values ('SAM','S',21)");

mysqli_close($con);
?>
</body>
</html>