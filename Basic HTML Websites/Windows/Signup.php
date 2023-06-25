<html>
<head>
<title>WinISO - Signup
</title>

<script>
function myFunction()
{
 window.location.href="WinISO - index.php";
}
</script>

<link rel="stylesheet" href="allstyle.css">

</head>
<body bgcolor="Skyblue">
<div class="outmain" >
<div class="main">
<div class="F" align="center"> <img src="logo.png" lenght="500" width="400" align="center"></div>
<div class="Header"><hr>
<a href="WinISO - index.php">| Login  |</a>
<hr>
</div>
<div class="Content">

<h1 align="center" color="black">Signup</h1>
<table  align="Center" font= "Verdana" style="font-size: 1.2rem" color="blue" cellpadding="7%" > 
<form name="frmlgn" onsubmit="return val()" action="signupval.php" method="post" >
<tr><td>Name: </td> <td><input type="text" size="30" style="font-size: 1.1rem" placeholder="Name" name="uname" required autofocus></td></tr>
<tr><td>Gender :</td>
	<td><input type="radio" name="gender" autofocus value="Male" checked> Male         
       <input type="radio" name="gender" value="Female"> Female
       <input type="radio" name="gender" value="Other"> Other </td> </tr>
<tr><td>Email id: </td> <td><input type="text" placeholder="abc@example.com" pattern="[a-z0-9._%+-]+@[a-z0-9.-]+\.[a-z]{2,4}$" size="28" style="font-size: 1.1rem" name="emailid" required autofocus></td></tr>
<tr><td>City :  </td> <td><input type="text" size="28" placeholder="City" style="font-size: 1.1rem" name="city" required autofocus></td></tr>
<tr><td>Company :  </td> <td><input type="text" size="28" placeholder="Company" style="font-size: 1.1rem" name="company" required autofocus></td></tr>
<tr><td>Phone No. :</td> <td><input type="text" size="28" placeholder="+91" style="font-size: 1.1rem" name="k" required autofocus></td></tr>
<tr><td>Date of Birth :  </td><td><input type="date" size="28" style="font-size: 1.1rem" style="width:480px;" name="dob" required autofocus></td></tr>
<tr><td>Password:  </td> <td><input type="password" size="28" placeholder="Password" style="font-size: 1.1rem"  name="pd" pattern=".{8,}" title="Eight or more characters" autofocus required></td></tr>
<tr><td>Confirm Password:  </td> <td><input type="password" size="28" placeholder="Confirm Password" style="font-size: 1.1rem"  name="cpd" required autofocus></td></tr>
<tr><td><input type="submit" value="Signup" ></td>
<td><input type="button" value="Login" onclick="myFunction()"></td></tr>
</table>
<br>

</div>
<hr>
<div class="footer">
 <img src="logo.png" align="center" lenght="400" width="300">
Copyright 2021 (c)
</div>
<hr>
</div>
</div>
</body>
</html>