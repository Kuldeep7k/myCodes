<html>
<head><title>p</title></head>
<body>
<form align="left" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]); ?>" 
method="post">
Name   :<input type="text" name="k"> <br>
<input type="submit" value="Submit" />
</form>

<?php
$a=($_POST["k"]);
if($a>=0)
{
echo "$a is positive";
}
else
{
echo "$a is negative";
}
?>
</body>
</html>