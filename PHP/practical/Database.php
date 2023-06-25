<html>
<head><title>Sign up</title></head>
<body>
<form align="left" action="Database.php" method="post">
<fieldset align="Center">
<legend align="Left"><h1>Form</h1></legend>
Name   : <br><input type="text" name="name" required autofocus> <br>
Gender : <br> <input type="radio" name="gender" autofocus value="Male" checked> Male <br>
         <input type="radio" name="gender" value="Female"> Female<br>
         <Input type="radio" name="gender" value="Other"> Other<br>
City   : <br><input type="text" name="city" required autofocus> <br>
Date Of Birth : <br> <input type="date" name="dob" required> <br>

Phone No. : <br> <input type="text" value="+91" name="kk" required><br>
Email :<br> <input type="email" name="email" required> <br>

<input type="submit" value="Submit" />
<input type="reset" value="Reset" />
</fieldset>
</form>
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
?>

</body>
</html>
