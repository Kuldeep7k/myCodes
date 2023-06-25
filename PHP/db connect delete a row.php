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

//del sec row in record

mysqli_query($con,"DELETE FROM Student WHERE age=22");
mysqli_close($con);
?>
</body>
</html>