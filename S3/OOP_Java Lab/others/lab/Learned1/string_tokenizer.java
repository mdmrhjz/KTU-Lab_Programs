import java.util.*;
import java.io.*;

public class string_tokenizer
{
    public static void main(String []args)
    {
        int n, sum=0;

        System.out.println("\n\n\tSTRING TOKENIZER\n");
        System.out.println("Enter numbers with spaces in between: ");
        Scanner sc=new Scanner(System.in);
        String str=sc.nextLine();

        StringTokenizer tkn=new StringTokenizer(str, " ");
        while(tkn.hasMoreTokens())
        {
            String temp=tkn.nextToken();
            n=Integer.parseInt(temp);
            System.out.println(n);
            sum=sum+n;
        }

        System.out.println("Sum: "+sum+"\n");
    }
}