<html>
<head><title>Connect</title></head>
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
if($_POST)
{
$txtName=$_POST['name'];
$txtGender=$_POST['gender'];
$txtCity=$_POST['city'];
$txtDob=$_POST['dob'];
$txtPhone=$_POST['kk'];
$txtemail=$_POST['email'];
}
//inseting in records

mysqli_query($con,"insert into form(Name,Gender,City,
Address,dob,Phone_no,Email) 
values ('$txtName','$txtGender','$txtCity','$txtDob','$txtPhone','$txtemail')");

mysqli_close($con);

echo "<br>Data inserted in database ";

?>
</body>
</html>


