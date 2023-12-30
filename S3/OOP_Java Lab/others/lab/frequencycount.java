import java.util.*;
import java.io.*;

public class frequencycount
{
    public static void main(String []args)
    {
        int i, count=0;

        System.out.print("Enter a word: ");
        Scanner sc=new Scanner(System.in);
        String word=sc.nextLine();

        System.out.print("Enter the letter to count: ");
        char key=sc.nextLine().charAt(0);

        int len=word.length();
        for(i=0;i<len;i++)
        {
            if(key==word.charAt(i))
            {
                count++;
            }
        }

        System.out.println("No. of entered letter in the word = "+count);
    }
}