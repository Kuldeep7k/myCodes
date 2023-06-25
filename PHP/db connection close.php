<html>
<head><title>DB connect</title></head>
<body>
<?php
$con=mysqli_connect("localhost","root","","MYSQL");
if(mysqli_connect_errno()) //check connection
{
echo "Faild conncect to connect :".mysqli_connect_errno();
}
else
{
echo "Connected Successfully <br>";
}
mysqli_close($con);
echo "Connection closed";
?>
</body>
</html>