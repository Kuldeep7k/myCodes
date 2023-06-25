 <?php  
 
 $con=mysqli_connect("localhost","root","","WinISO");
	if(mysqli_connect_errno())
	{
	echo "Faild conncect to connect :".mysqli_connect_error();
	}
	else
	{
	echo "Connected Successfully";
	} 
$username = trim($_POST['emailid']);
$password = trim($_POST['password']);
echo $username;
echo $password;

if($_POST)
{

$query = "SELECT email,password FROM signupdata WHERE email='$username' 
AND password='$password' ";

$result = mysqli_query($con,$query);
if(mysqli_num_rows($result)>0)
{
	date_default_timezone_set("Asia/Kolkata");
 echo 'hi there';
 $txtdate=date('Y/m/d');
$txttime=date('h:i:sa');

mysqli_query($con,"insert into logindata(email,password,signupdate,signuptime) 
values ('$username','$password','$txtdate','$txttime')");

 
 exit;
  }
  else
     {
 echo 'oops  can not do it';
  }
 }

mysqli_close($con);
?>