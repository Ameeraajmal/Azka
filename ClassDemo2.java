class box
{
double width;
double height;
double depth;
double volume()
{
return width*height*depth;
}
}
class ClassDemo2
{
public static void main(String[]args)
{
double vol;
box obj=new box();
obj.width=10;
obj.height=12;
obj.depth=15;
vol=obj.volume();
System.out.println("volume is"+vol);
}
}
