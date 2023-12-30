import java.util.*;
class main
{
    public int fact(int a)
    {
        if(a==0)
            a=1;
        else if(a>0)
            a=a*fact(a-1);
        else
            a=-1;
        return a;
    }
}

public class a_factorial
{
    public static void main(String []args)
    {
        Scanner sc=new Scanner(System.in);
        main f=new main();

        System.out.println();
        System.out.println();
        System.out.println("*** ----- Factorial calculator ----- ***");
        System.out.println();
        System.out.println();
        System.out.print("Enter a number: ");
        int num=sc.nextInt();
        int ans=f.fact(num);
        System.out.println();
        System.out.println("----- OUTPUT -----");
        System.out.println("Factorial: "+ans);
    }
}