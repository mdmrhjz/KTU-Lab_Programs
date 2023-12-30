import java.util.*;
//Util is imported
//Util contains class named "StringTokenizer"

public class string_tokenizer
{
    public static void main(String []args)
    {
        int n, sum=0;
        Scanner sc=new Scanner(System.in);

        System.out.println("\n\n\tSTRING TOKENIZER\n");
        System.out.print("Enter Numbers with one space gap: ");

        //giving input to string with spaces in between.
        String ip=sc.nextLine();

        //making an object of the class "StringTokenizer by passing parameters"
        //Here parameter is "ip"
        StringTokenizer stk=new StringTokenizer(ip ," ");

        //hasMoreTokens is a function/methos inside StringTokenizer class
        //Used to check if "ip" has more words/numbers after a space (in this case)
        while(stk.hasMoreTokens())
        {
            //assigning each word to String variable "temp"
            String temp=stk.nextToken();

            //assigning the above words to an integer variable
            n=Integer.parseInt(temp);

            //Printing each integers
            System.out.println(n);

            //Adding each integers
            sum=sum+n;
        }

        //Print the sum
        System.out.println("\nsum: "+sum+"\n");
    }
}