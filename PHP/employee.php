<html>
<body>
<form action="save.php" method="post">
<legend align="left"><h1>Employee form</h1></legend>
Name  :<input type="text" name="yname"><br>
Email :<input type="text" name="email"><br>
Password: <input type="password" name="pname">
<br>
Gender  :<input type="radio" name="gender" value="M"> Male 
	<input type="radio" name="gender" value="F"> Female <br>

Address : <br><textarea type="text" name="tname" rows="5" cols="30"></textarea><br>

Select Designation?<br>
<select name="lol" mutiple>
<option>Manager</option>
<option>Assistant manager</option>
<option>Executive</option>
<option>Director</option>
<option>Administrator</option>
</select>
<br>
<br>
<input type="submit"/> <input type="reset"/>

</form>
</body>
</html>