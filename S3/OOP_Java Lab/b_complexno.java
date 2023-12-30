class complex
{
        int real, image;
        complex()
        {
                real=0;
                image=0;
        }
        complex(int x)
        {
                real=x;
                image=0;
        }
        complex(int x, int y)
        {
                real=x;
                image=y;
        }
        complex sum(complex c1, complex c2)
        {
                complex c3=new complex();
                c3.real=c1.real+c2.real;
                c3.image=c1.image+c2.image;
                return c3;
        }
}
public class b_complexno
{
        public static void main(String []args)
        {
                complex c1=new complex(2, 3);
                complex c2=new complex(5, 4);
                complex temp;
                temp=c1.sum(c1, c2);
                System.out.println(temp.real+" + "+temp.image+"i");
        }
}