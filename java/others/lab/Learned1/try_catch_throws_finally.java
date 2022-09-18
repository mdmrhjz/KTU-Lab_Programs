import java.util.*;
import java.io.*;

public class try_catch_throws_finally
{
    public static void main(String []args)
    {
        int a, b, d;
        Scanner sc=new Scanner(System.in);

        System.out.println("\n\n\tTRY CATCH THROWS FINALLY USE");
        System.out.println("\tDivision Of 2 numbers\n");
        System.out.print("Input A: ");
        a=sc.nextInt();
        System.out.print("Input B: ");
        b=sc.nextInt();

        System.out.println();
        try
        {
            d=a/b;
            System.out.println("Result: "+d);
        }
        catch(Exception e)
        {
            System.out.println(e.getMessage());
        }
        finally
        {
            System.out.println("End Of Operation");
        }

    }
}