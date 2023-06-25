<html><head></head>
<body>
<form action="<?php echo $_SERVER["PHP_SELF"];?>" method="post">
Enter First value <input type="text" name="one"><br>
Enter Second value <input type="text" name="two"><br>
<input type="Submit" name="submit"><br>
</form>
</body>
</html>
<?php
if ($_SERVER["REQUEST_METHOD"] == "POST")
{
$a=$_POST['one'];
$b=$_POST['two'];
echo "First Number :".$a."<br>";
echo "Second Number :".$b."<br>";
$gcd = 0;

for($i=2; $i<=$a && $i<=$b; $i++)
{
 if(($a % $i == 0) && ($b % $i == 0))
  $gcd = $i;
}
echo "Answer is :".$gcd;
}
?>

