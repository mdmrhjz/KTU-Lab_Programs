import java.util.*;
//CSE S3 33 MDMR
class palindrome
{
        public static void main(String []args)
        {
                int i, j, len, flag=0;
                System.out.println("");
                System.out.println("CHECK WHETHER A WORD IS PALINDROME");
                System.out.println("");
                System.out.print("Enter a word: ");
                Scanner sc=new Scanner(System.in);
                String word=sc.nextLine();
                System.out.println("");
                len=word.length();
                for(i=0,j=len-1;i<len/2;i++,j--)
                {
                        if(word.charAt(i)!=word.charAt(j))
                        {
                                flag=1;
                                break;
                        }
                }

                System.out.println("------ OUTPUT ------");
                if(flag==0)
                        System.out.println("The entered word is a palindrome");
                else
                        System.out.println("The entered word is a NOT a palindrome");
                System.out.println("");
        }
}