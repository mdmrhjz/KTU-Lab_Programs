import java.util.*;
import java.io.*;

public class palindrome
{
    public static void main(String []args)
    {
        int flag=0, i, j;

        System.out.print("Enter the word: ");
        Scanner sc=new Scanner(System.in);
        String word=sc.nextLine();

        int len=word.length();
        for(i=0,j=len-1;i<len/2;i++,j--)
        {
            if(word.charAt(i)==word.charAt(j))
            {
                flag=1;
            }
        }

        if(flag==1)
        {
            System.out.println("The entered word is palindrome");
        }
        else
        {
            System.out.println("The entered word is not a palindrome");
        }
    }
}