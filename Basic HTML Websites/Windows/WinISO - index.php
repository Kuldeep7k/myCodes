<html>
<head>
<title>WinISO - Login
</title>
<script>
function myFunction()
{
 window.location.href="Signup.php";
}
</script>

<link rel="stylesheet" href="allstyle.css">

</head>
<body bgcolor="Skyblue">
<div class="outmain" >
<div class="main">
<div class="F" align="center"> <img src="logo.png" lenght="500" width="400" align="center"></div>
<div class="Header"><hr>
<a href="Signup.php">| Signup |</a><hr>
</div>
<div class="Content">


<u><h1 align="center" color="Skyblue">Welcome to WinISO.com</h1></u>

<h2 align="center">Login to Access Website or Signup</h2>
<table  align="Center" font= "Verdana" color="blue" style="font-size: 1.2rem" cellpadding="10%" > 
<form action="Home.php" method="post"> 
<tr><td>Email id :</td><td><input type="text" placeholder="abc@example.com" pattern="[a-z0-9._%+-]+@[a-z0-9.-]+\.[a-z]{2,4}$" size="20" name="emailid" style="font-size: 1.1rem" required autofocus ></td></tr>
<tr><td>Password :</td><td><input type="password" size="20" name="password" placeholder="Password" style="font-size: 1.1rem" required autofocus></td></tr>
<tr><td><input type="submit" value="Login"></td>
<td><input type="button" value="Signup" onclick="myFunction()"></td></tr>
</form>

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