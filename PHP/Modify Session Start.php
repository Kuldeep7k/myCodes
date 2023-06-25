<?php
session_start();
?>
<html><head><title> SEssion variables </title></head>
<body>
<h1> Modify Session variables</h1>
<?php
echo "Before Session Update Author <br>";
echo "Author :".$_SESSION["Author"]."<br>";
$_SESSION["Author"]="Kuldeep";
echo "Title :".$_SESSION["Title"]."<br>";
echo "Author :".$_SESSION["Author"]."<br>";
echo "Session variables Updated";
?>
</body>
</html>