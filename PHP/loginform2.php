<html>
<head><title>Sign up</title></head>
<body>
<form align="Center" action="connect with cokkie and session.php" method="post">
<fieldset align"Center">
<table align="Center">  

<legend align="Center"><h1>Admission Form</h1></legend>

<tr><td>Name  : </td> <td><input type="text" name="name" required autofocus></td></tr>
<tr><td>Father's Name   :</td> <td><input type="text" name="fname" required autofocus> </td></tr>
<tr><td>Mother's Name   : </td> <td><input type="text" name="mname" required autofocus> </td></tr>
<tr><td>Rollno   : </td> <td><input type="text" name="rollno" required autofocus></td></tr>
<tr><td>Gender :</td>
	<td><input type="radio" name="gender" autofocus value="Male" checked> Male         
       <input type="radio" name="gender" value="Female"> Female
       <input type="radio" name="gender" value="Other"> Other </td> </tr>
	  
<tr><td>Nationality   : </td> <td><input type="text" name="nat" required autofocus> </td></tr>
<tr><td>City   : </td> <td><input type="text" name="city" required autofocus> </td></tr>
<tr><td>Address : </td> <td><textarea type="text" name="tname" rows="5" cols="25" required></textarea></td></tr>
<tr><td>Date Of Birth :  </td> <td><input type="date" name="dob" required> <br></tr>
<tr><td>Select your College :</td>
<td>
<input name="check1" type="checkbox" value="DAV">DAV
<input name="check2" type="checkbox" value="Sector 11">Sector 11
<input name="check3" type="checkbox" value="Sector 33">Sector 33
<input name="check4" type="checkbox" value="MCM">MCM DAV
</td></tr>
<tr><td>Select Your Stream :</td>
<td><select name="stream" mutiple>
<option>BCA</option>
<option>BBA</option>
<option>B.sc</option>
<option>B.tech</option>
<option>B.A</option>
</select></td> </tr>
<tr><td>Phone No. :  </td> <td> <input type="text" value="+91" name="kk" required></td></tr>
<tr><td>Class 10 Percentage :  </td> <td><input type="text" name="10marks" required autofocus></td></tr>
<tr><td>Email : </td> <td> <input type="email" name="email" required></td></tr>
<tr><td>Hostel Facility required ? :    </td>
	<td><input type="radio" name="hostel" autofocus value="YES" checked> YES         
       <input type="radio" name="hostel" value="NO">NO</td> </tr>


<tr><td><input type="submit" value="Submit" /></td>
<td><input type="reset" value="Reset" /></td></tr>
</table>
</fieldset>
</form>

</body>
</html>
