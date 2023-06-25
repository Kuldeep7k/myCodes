<?php  
function Fib($n)
{ 
// if and else if to generate first two numbers 
if ($n==0) 
return 0;     
else if ($n==1) 
return 1;     
      
// Recursive Call to get the upcoming numbers 
else
return (Fib($n-1)+Fib($n-2)); 
} 
$n=10; 
for ($i=0; $i< $n; $i++)
{   
echo Fib($i),' '; 
} 
?>