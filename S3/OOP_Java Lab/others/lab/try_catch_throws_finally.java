import java.util.*;
import java.io.*;

public class try_catch_throws_finally
{
    public static void main(String []args)
    {
        int a, b, s;
        System.out.println("\n--- Divide 2 numbers ---\n");
        Scanner sc=new Scanner(System.in);

        try
        {
            System.out.print("Enter number 1: ");
            a=sc.nextInt();

            System.out.print("Enter number 2: ");
            b=sc.nextInt();

            s=a/b;
            System.out.println("Result: "+s);
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