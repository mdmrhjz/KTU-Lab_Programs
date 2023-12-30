import java.util.*;
import java.io.*;

public class palindrome
{
    public static void main(String []args)
    {
        int i, flag=0;

        System.out.println("\n\n\tPALINDROME CHECK\n");
        System.out.print("Enter a word: ");
        Scanner sc=new Scanner(System.in);
        String word=sc.nextLine();
        String check;

        int len=word.length();
        for(i=0;i<=len/2;i++)
        {
            if(word.charAt(i)!=word.charAt(len-i-1))
            {
                flag=1;
                break;
            }
        }

        if(flag==0)
        {
            System.out.println("\n--> Entered word is a palindrome\n");
        }
        else
        {
            System.out.println("\n--> Entered word is not a palindrome\n");
        }

    }
}