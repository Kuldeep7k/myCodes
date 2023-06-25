<html>
<head><title>Sign up</title></head>
<body>
<form align="left" bgcolor="blue" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]); ?>" 
method="post">
<fieldset align"Center">
<legend align="left"><h1>Sign up</h1></legend>
Name   : <br><input type="text" name="name" required autofocus> <br>
Gender : <br> <input type="radio" name="gender" autofocus value="Male" checked> Male <br>
         <input type="radio" name="gender" value="Female"> Female<br>
         <input type="radio" name="gender" value="Other"> Other<br>
Address :<br><textarea type="text" name="tname" rows="5" cols="25" required></textarea></br>
Date Of Birth : <br> <input type="date" name="dob" required> <br>
Select your Subjects :<br>
<input name="check1" type="checkbox" value="Java">Java
<input name="check2" type="checkbox" value="Php">Php
<input name="check3" type="checkbox" value="Python">Python <br>
<input name="check4" type="checkbox" value="C">C
<input name="check5" type="checkbox" value="C++">C++
<input name="check6" type="checkbox" value="DBMS">DBMS <br>
Select Your Daily Salary :
<select name="sal" mutiple>
<option>Rs.500 - Rs.1000</option>
<option>Rs.1000 - Rs.2000</option>
<option>Rs.2000 - Rs.5000</option>
<option>Rs.1000 - Rs.10,000</option>
<option>None</option>
</select> <br>
Phone No. : <br> <input type="text" value="+91" name="kk" required><br>
Email :<br> <input type="email" name="email" required> <br>
Password: <br> <input type="password" name="pwd" required><br>
Confirm Password: <br> <input type="password" name="pwd2" required><br>
<br>
<input type="submit" value="Submit" />
<input type="reset" value="Reset" />
</fieldset>
</form>

<?php

if($_POST)
{
if($_POST['pwd']=="1234")
{
echo "<h2>Submitted Data :</h2>";
$YourName=$_POST['name'];

echo "Your Name = $YourName<br>";

$Gender=$_POST['gender'];
echo "Your Gender = $Gender<br>";

$Address=$_POST['tname'];
echo "Your Address = $Address<br>";

$cal=$_POST['dob'];
echo "Your Date of Birth = $cal <br>";

echo "Your Subjects : ";
if (isset($_REQUEST["check1"]))
echo $_REQUEST["check1"]," , ";
if(isset($_POST["check2"]))
echo $_POST["check2"]," , ";
if(isset($_POST["check3"]))
echo $_POST["check3"]," , ";
if(isset($_POST["check4"]))
echo $_POST["check4"]," , ";
if(isset($_POST["check5"]))
echo $_POST["check5"]," , ";

$Sal=$_POST['sal'];
echo "<br>Your Salary = $Sal <br>";

$Email=$_POST['email'];
echo "Your Email = $Email <br>";

$phone=$_POST['kk'];
{
echo "Your Phone No. = $phone <br>";
}

$code=$_POST['pwd'];
echo "Your Password = $code<br>";


$cp=$_POST['pwd2'];
if($code==$cp)
{
echo "<h3>Signup Successfull</h3>";
}
}
else
{
echo " <h1>Wrong Password Input!!!.Check both Passwords </h1>";
}
}
?>


</body>
</html>
