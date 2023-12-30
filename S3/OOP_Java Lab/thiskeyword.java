class sample
{
        int a, b;
        sample(int a, int b)
        {
                this.a=a;
                this.b=b;
        }
        void display()
        {
                System.out.println(a);
                System.out.println(b);
        }
}
public class thiskeyword
{
        public static void main(String []args)
        {
                sample sm=new sample(2, 6);
                sm.display();
        }
}