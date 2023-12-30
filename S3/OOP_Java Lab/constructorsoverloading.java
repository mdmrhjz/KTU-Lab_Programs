//BASIC CONSTRUCTORS OVERLOADING PROGRAM
class xy
{
        int x, y;
        xy()
        {
                x=0;
                y=0;
        }
        xy(int a)
        {
                x=a;
                y=0;
        }
        xy(int a, int b)
        {
                x=a;
                y=b;
        }
        void display()
        {
                System.out.println(x);
                System.out.println(y);
                System.out.println(" ");
        }
}

public class constructorsoverloading
{
        public static void main(String []args)
        {
                xy obj1=new xy(1);
                obj1.display();
                xy obj2=new xy(10, 20);
                obj2.display();
                xy obj3=new xy();
                obj3.display();
        }
}