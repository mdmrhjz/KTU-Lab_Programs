import java.util.*;

class b_complex_number_in_1_class
{
        int real, image;
        b_complex_number_in_1_class(int a, int b)
        {
                real=a;
                image=b;
        }

        b_complex_number_in_1_class(int a)
        {
                real=a;
                image=0;
        }

        b_complex_number_in_1_class()
        {
                real=0;
                image=0;
        }

        b_complex_number_in_1_class add(b_complex_number_in_1_class c1, b_complex_number_in_1_class c2)
        {
                b_complex_number_in_1_class c3=new b_complex_number_in_1_class();
                c3.real=c1.real+c2.real;
                c3.image=c1.image+c2.image;
                return c3;
        }

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

                b_complex_number_in_1_class c1=new b_complex_number_in_1_class(cr1, ci1);
                b_complex_number_in_1_class c2=new b_complex_number_in_1_class(cr2, ci2);
                b_complex_number_in_1_class result;
                result=c1.add(c1, c2);
                System.out.print("Result: "+result.real+" + "+result.image+" i \n");
        }
}