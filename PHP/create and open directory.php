<?php
$a="./test2/";
if (is_dir($a))
{
echo "Folder Found!!<br><br>";
if ($dh = opendir($a))
{
while (($file = readdir($dh)) !== false)
{
echo "filename : " . $file . "<br>";
}
closedir($dh);
}
}
else
{
mkdir("test2",3);	
echo "Folder Created";
}
?>