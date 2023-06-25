<?php
$sal=array("emp1"=>7000,"emp2"=>8000,"emp3"=>4000);
foreach($sal as $key=>$value)
echo "Salary $key of  is $value <br>";

if($sal["emp1"]>=$sal["emp2"] && $sal["emp1"]>=$sal["emp3"])
{
echo "<br>Emp1 is high ".$sal["emp1"];
}
if($sal["emp2"]>=$sal["emp1"] && $sal["emp2"]>=$sal["emp3"])
{
echo "<br>Emp2 is high ".$sal["emp2"];
}
else
{
echo "<br>Emp3 is high ".$sal["emp3"];
}


if($sal["emp1"]<=$sal["emp2"] && $sal["emp1"]<=$sal["emp3"])
{
echo "<br>Emp1 is less ".$sal["emp1"];
}
if($sal["emp2"]<=$sal["emp1"] && $sal["emp2"]<=$sal["emp3"])
{
echo "<br>Emp2 is less ".$sal["emp2"];
}
else
{
echo "<br>Emp3 is less ".$sal["emp3"];
}
?>