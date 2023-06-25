<html>
<head><title>DB connect</title></head>
<body>
<?php
$con=mysqli_connect("localhost","root","","BCA");
if(mysqli_connect_errno()) //check connection
{
echo "Faild conncect to connect :".mysqli_connect_errno();
}
else
{
echo "Connected Successfully <br><br>";
}
echo "Table :-<br>";
$result=mysqli_query($con,"Select * from student");
while($row=mysqli_fetch_array($result))
{

echo $row['FirstName']." ".$row['LastName']." ".$row['Age'];
echo "<br>";

}
mysqli_close($con);
echo "<br>Connection closed";
?>
</body>
</html>