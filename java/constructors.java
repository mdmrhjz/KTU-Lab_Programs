//BASIC CONSTRUCTORS PROGRAM
class xy
{
        int x, y;
        xy(int a, int b)
        {
                x=a;
                y=b;
        }
        void display()
        {
                System.out.println(x);
                System.out.println(y);
        }
}

public class constructors
{
        public static void main(String []args)
        {
                xy obj=new xy(3, 4);
                obj.display();
        }
}