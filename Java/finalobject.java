import java.io.*;
import java.lang.*;

class student
{
String name;
public static void main(String a[])
{
final student s=new student();

s=new student(); //ERROR s object is final so it cannot be modified again
}

}