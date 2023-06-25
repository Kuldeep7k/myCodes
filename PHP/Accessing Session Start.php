<?php
session_start();
?>
<html><head><title> SEssion variables </title></head>
<body>
<h1> Accessing Session variables</h1>
<?php
echo "Title :".$_SESSION["Title"]."<br>";
echo "Author".$_SESSION["Author"]."<br>";
?>
</body>
</html>