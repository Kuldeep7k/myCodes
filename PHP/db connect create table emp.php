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

//creating table emp
$sql= "Create table EMP(EMPNO char(30),ENAME char(30),JOB char(30),MGR int,HIREDATE char(30),SAL int,COMM int, DEPTNO int)";
if(mysqli_query($con,$sql))
{
echo "<br>Table EMP created successfull";
}
else 
{
echo "Table not created ".mysqli_error($con);
}
mysqli_close($con);
?>
</body>
</html>