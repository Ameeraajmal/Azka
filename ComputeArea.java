import java.util.Scanner;
public class ComputeArea
{
public static void main(String[]args)
{
Scanner input=new scanner(System.in);
System.out.print("enter radius:");
double radius=input.nextDouble();
double area=radius*radius*3.14159;
System.out.println("the area for the circle="+area);
}
}
