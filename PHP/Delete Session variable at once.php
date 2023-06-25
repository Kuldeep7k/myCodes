<?php
session_start();
?>
<html><head><title> SEssion variables </title></head>
<body>
<h1>destroy variables</h1>
<?php

session_unset();
echo " ALL Session variables deleted at once";
?>
</body>
</html>