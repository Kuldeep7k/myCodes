<html>
<body>
<form action="send.php" method="post">
Name :<input type="text" name="yname"><br>
Email:<input type="text" name="email"><br>
Password: <input type="password" name="pname">

<br>
Gender:<input type="radio" name="gender" value="M"> Male 
	<input type="radio" name="gender" value="F"> Female <br>

Address : <br><textarea type="text" name="tname" rows="5" cols="30"></textarea><br>

<h2>Checkbox </h1>
Click The subject you want to study?<br>
<input name="check1" type="checkbox" value="Java">Java <br>
<input name="check2" type="checkbox" value="Php">Php <br>
<input name="check3" type="checkbox" value="C">C <br>

<h2>Radio </h1>
Select one?<br>
<input name="radio1" type="radio" value="NCC">Java<br>
<input name="radio2" type="radio" value="NSS">Php<br>

<h2>Select </h1>
Select at least one?<br>
<select name="hobbies[]" mutiple>
<option>Reading</option>
<option>Playing</option>
<option>Gaming</option>
</select>
<br>

<input name="credit_card" type="hidden" value="good">
Click the buttion to know your credit
<input type="submit" value="submit">

<br><br>
<input type="submit"/> <input type="reset"/>

</form>
</body>
</html>