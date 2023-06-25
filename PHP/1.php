<html><head></head>
<body>
<form action="<?php echo $_SERVER["PHP_SELF"];?>" method="post">
Enter First value <input type="text" name="one" ><br>
Enter Second value <input type="text" name="two"><br>
<input type="Submit" name="submit"><br>
</form>
</body>
</html>
<?php
$arr=array("One","Two","Three","four","five","Six","Seven","Eight");
if ($_POST)
{
$a=$_POST['one'];
$b=$_POST['two'];
echo "First Number :".$a."<br>";
echo "Second Number :".$b."<br>";
echo "<br>Before Delete <br>"; 
print_r($arr);
echo "<br>After Delete <br>";
array_splice($arr,$a,$b);
print_r($arr);
}
?>

