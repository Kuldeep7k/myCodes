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
echo "Connected Successfully <br>";
}

//

$result=mysqli_query($con,"SELECT ENAME FROM EMP WHERE HIREDATE NOT BETWEEN '30-JUN-81' AND '31-DEC-81'");  

//SELECT ENAME,SAL,sal+(sal*0.2) AS NEW_SAL from EMP where sal+(sal*0.2)>3000
//SELECT ENAME,SAL,sal+(sal*0.2) AS NEW_SAL  from EMP where sal+(sal*0.2)>2000 ORDER BY NEW_SAL DESC


while($row=mysqli_fetch_array($result))
{
echo $row['ENAME'];
echo "<br>";
}

?>
</body>
</html>