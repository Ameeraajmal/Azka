class box
{
double width;
double height;
double depth;
double volume()
{
return width*height*depth;
}
void setDim(double w,double h,double d)
{
width=w;
height=h;
depth=d;
}
}
public class Areabox
{
public static void main(String[]args)
{
double vol;
box box1=new box();
box1.setDim(10,15,20);
vol=box1.volume();
System.out.println("volume="+vol);
}
}
