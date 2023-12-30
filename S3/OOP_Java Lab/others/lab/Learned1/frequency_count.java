import java.io.*;
import java.util.*;

public class frequency_count
{
    public static void main(String []args)
    {
        int i, count=0;
        System.out.println("\n\tFREQUENCY COUNT\n");
        System.out.print("Enter a word: ");
        Scanner sc=new Scanner(System.in);
        String word=sc.nextLine();

        System.out.print("Enter a character to find its no. of occurence: ");
        char ch=sc.nextLine().charAt(0);

        for(i=0;i<word.length();i++)
        {
            if(word.charAt(i)==ch)
            {
                count++;
            }
        }

        System.out.println(" --> No. of "+ch+" = "+count+"\n");
    }
}