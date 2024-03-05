class Employee
{
int eno;
String ename;
Employee()
{
eno=100;
ename="Ameera";
}
void show()
{
System.out.println("\n Employee no:-"+eno+"\nEmployee name-"+ename);
}
}
class Constructor1
{
public static void main(String args[])
{
Employee obj1=new Employee();
obj1.show();
}
}
