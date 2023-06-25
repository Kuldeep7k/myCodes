<html>
<head><title>p</title></head>
<body>
<form align="left" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]); ?>" 
method="post">
a :<input type="text" name="k"> <br>
b :<input type="text" name="d"> <br>
<input type="submit" value="Submit" />
</form>
<?php
if($_POST)
{
$str1=$_POST['k'];
$str2=$_POST['d'];
echo $str1." ".$str2;
}
?>
</body>
</html>