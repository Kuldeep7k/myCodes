<?php
echo "File name is :";
echo $_SERVER["PHP_SELF"];
echo "<br>";

echo "SERVER name is :";
echo $_SERVER["SERVER_NAME"];
echo "<br>";

echo "PATHNAME OF CURRENT SCRIPT is :";
echo $_SERVER['SCRIPT_NAME'];
echo "<br>";

echo "Post on the server is :";
echo $_SERVER['SERVER_PORT'];
echo "<br>";

echo "HTML HOST is :";
echo $_SERVER['HTTP_HOST'];
echo "<br>";

echo "HTML USER AGENT is :";
echo $_SERVER['HTTP_USER_AGENT'];
echo "<br>";

echo "SERVER_ADMIN is :";
echo $_SERVER['SERVER_ADMIN'];
echo "<br>";

echo "REMOTE_PORT is :";
echo $_SERVER['REMOTE_PORT'];
echo "<br>";

echo "REMOTE_HOST is :";
echo $_SERVER['REMOTE_HOST'];
echo "<br>";

echo "REMOTE_ADMIN is :";
echo $_SERVER['REMOTE_ADDR'];
echo "<br>";
?>