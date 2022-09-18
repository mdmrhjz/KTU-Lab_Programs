import java.util.*;

class complex
{
        int real, image;
        complex(int a, int b)
        {
                real=a;
                image=b;
        }

        complex(int a)
        {
                real=a;
                image=0;
        }

        complex()
        {
                real=0;
                image=0;
        }

        complex add(complex c1, complex c2)
        {
                complex c3=new complex();
                c3.real=c1.real+c2.real;
                c3.image=c1.image+c2.image;
                return c3;
        }
}

public class b_complex_number
{
        public static void main(String []args)
        {
                Scanner sc=new Scanner(System.in);
                System.out.print("\n\n");
                System.out.print("----- Complex No. Addition -----\n\n");

                System.out.print("Enter 1st complex no :\n");
                System.out.print("real = ");
                int cr1=sc.nextInt();
                System.out.print("image = ");
                int ci1=sc.nextInt();
                System.out.print("\n");

                System.out.print("Enter 2nd complex no :\n");
                System.out.print("real = ");
                int cr2=sc.nextInt();
                System.out.print("image = ");
                int ci2=sc.nextInt();
                System.out.print("\n");

                complex c1=new complex(cr1, ci1);
                complex c2=new complex(cr2, ci2);
                complex result;
                result=c1.add(c1, c2);
                System.out.print("Result: "+result.real+" + "+result.image+" i \n");
        }
}