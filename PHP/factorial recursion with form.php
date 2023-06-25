<html>
<head><title>p</title></head>
<body>
<form align="left" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]); ?>" 
method="post">
Name   :<input type="text" name="k"> <br>
<input type="submit" value="Submit" />
</form>

<?php
if($_POST)
{
$fact=1;
$a=($_POST["k"]);
for($x=$a;$x>=1;$x--)
{
$fact=$fact * $x;
}
echo "factorial of $a is $fact";
}
?>
</body>
</html>
