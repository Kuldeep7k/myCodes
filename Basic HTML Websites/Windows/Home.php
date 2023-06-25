<?php  

if($_POST)
{
$con=mysqli_connect("localhost","root","","WinISO");
	if(mysqli_connect_errno())
	{
	echo "Faild conncect to connect :".mysqli_connect_error();
	}
	else
	{
	
	} 
$username = trim($_POST['emailid']);
$password = trim($_POST['password']);

$query = "SELECT email,password FROM signupdata WHERE email='$username' 
AND password='$password' ";

$result = mysqli_query($con,$query);
if(mysqli_num_rows($result)>0)
{
	date_default_timezone_set("Asia/Kolkata");
 $txtdate=date('Y/m/d');
$txttime=date('h:i:sa');

mysqli_query($con,"insert into logindata(email,password,logindate,logintime) 
values ('$username','$password','$txtdate','$txttime')");

setcookie("Email",$username,time()+86400*30);
setcookie("Password",$password,time()+86400*30);


echo '<script type="text/JavaScript">  
     alert("Login Successfull!!")
     </script>' 
;

  }
  else
     {
		 
echo '<script type="text/JavaScript">  
     alert("Wrong Password!!.Please Check your Details or Create a Account.")
     </script>' 
; 
echo '<script type="text/JavaScript">  
     
function jump()
{
 window.location.href="WinISO - index.php";	
}
jump();

     </script>' 
;
  }
 }

mysqli_close($con);
?>

<html>
<head>
<title>WinISO - Home
</title>

<link rel="stylesheet" href="allstyle.css">

</head>
<body bgcolor="Skyblue">
<div class="outmain" >
<div class="main">
<div class="F" align="center"> <img src="logo.png" lenght="500" width="400" align="center"></div>
<div class="Header"><hr>
<a href="WinISO - home.php">| Home |</a>
<a href="index.php"> Login  |</a>
<a href="Signup.php"> Signup |</a>
<a href="dmca.php"> DMCA |</a><br><hr>
</div>
<div class="Content">

<?php

session_start(); 
  
$_SESSION['Email']=$username;
$_SESSION['Password']=$password;
 
$minutesBeforeSessionExpire=30;
if (isset($_SESSION['LAST_ACTIVITY']) && (time() - $_SESSION['LAST_ACTIVITY'] > ($minutesBeforeSessionExpire*60))) {
    session_unset();     // unset $_SESSION   
    session_destroy();
						// destroy session data  
}
$_SESSION['LAST_ACTIVITY'] = time();

?>


<center>
<h1>Select Window's :</h1>

<video controls autoplay muted width="852" height="480" border="112">
  <source src="video.mp4" type="video/mp4">
Your browser does not support the video tag.
</video>
</center>

<p style="font-size:150%;" align="center">

Windows 7 &nbsp &nbsp &nbsp &nbsp &nbsp&nbsp<a href="w7.php">Click Here</a><br>
Windows 8.1&nbsp &nbsp &nbsp &nbsp&nbsp<a href="w8.php">Click Here</a><br>
Windows 10 &nbsp &nbsp &nbsp &nbsp&nbsp<a href="w10.php">Click Here</a><br>
</p>

</div>
<hr>
<div class="footer">
 <img src="logo.png" align="center" lenght="400" width="300" />
Copyright 2021 (c)
</div>
<hr>
</div>
</div>
</body>
</html>