<?php 
date_default_timezone_set("Asia/Kolkata");
$con=mysqli_connect("localhost","root","","WinISO");
if(mysqli_connect_errno())
{
echo "Faild conncect to connect :".mysqli_connect_error();
}
else
{
echo "";
}
if($_POST)
{
if($_POST['pd']!=$_POST['cpd'])
      {
   die('Password and Confirm Password Should Match!!. Please Try Again...');   
}

$txtName=$_POST['uname'];
$txtGender=$_POST['gender'];
$txtEmail=$_POST['emailid'];
$txtCompany=$_POST['company'];
$txtCity=$_POST['city'];
$txtPhone=$_POST['k'];
$txtDob=$_POST['dob'];
$txtPass=$_POST['pd'];
$txtCpass=$_POST['cpd'];
$txtdate=date('Y/m/d');
$txttime=date('h:i:sa');


mysqli_query($con,"insert into signupdata(name,gender,email,company,city,phone,dob,password,signupdate,signuptime) 
values ('$txtName','$txtGender','$txtEmail','$txtCompany','$txtCity','$txtPhone','$txtDob','$txtPass','$txtdate','$txttime')");

mysqli_close($con);

setcookie("Username",$txtName,time()+86400*30);
setcookie("Gender",$txtGender,time()+86400*30);
setcookie("Address",$txtAddress,time()+86400*30);
setcookie("City",$txtCity,time()+86400*30);
setcookie("Company",$txtCompany,time()+86400*30);
setcookie("Phone",$txtPhone,time()+86400*30);
setcookie("Dob",$txtDob,time()+86400*30);

echo '<script type="text/JavaScript">  
     alert("Account Created Successfully!!")
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


?>
<html>
<head>
<title>Account Created
</title>
<script>
function a()
{
 window.location.href="Signup.php";
}
</script>

<link rel="stylesheet" href="allstyle.css"> 
</head>
<body bgcolor="Skyblue">
<div class="outmain">
<div class="main">
<div class="F" align="center"> <img src="logo.png" lenght="500" width="400" align="center"></div>
<div class="Header"><hr>
<a href="WinISO - home.php">| Home |</a>
<a href="index.php"> Login  |</a>
<a href="Signup.php"> Signup |</a>
<a href="dmca.php"> DMCA |</a><br><hr>
</div>
<div class="Content">
<h2>Account Created Successfully </h2>
<button onclick="location.href='Home.php'" class="w3-btn w3-white w3-border w3-border-red w3-round-large" >Click Here to Continue</button>

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