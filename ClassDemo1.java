class Box
{
double width;
double height;
double depth;

}
public class ClassDemo1

{
public static void main(String args[])
{
Box boxobj1=new Box();
boxobj1.width=10;
boxobj1.height=20;
boxobj1.depth=15;
Box boxobj2=new Box();
boxobj2.width=5;
boxobj2.height=7;
boxobj2.depth=10;
double vol1=boxobj1.width*boxobj1.height*boxobj1.depth;
System.out.println("volume:"+vol1);
double vol2=boxobj2.width*boxobj2.height*boxobj2.depth;
System.out.println("volume:"+vol2);
}
}
