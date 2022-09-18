import java.util.*;
//CSE SE 33 MDMR
class frequencycount
{
        public static void main(String []args)
        {
                int i, j, count=0;
                System.out.println("");
                System.out.println("FREQUENCY COUNT");
                System.out.println("");
                System.out.print("Enter a word: ");
                Scanner sc=new Scanner(System.in);
                String word=sc.nextLine();
                System.out.println("");

                System.out.print("Enter a letter: ");
                char letter=sc.nextLine().charAt(0);
                System.out.println("");

                for(i=0;i<word.length();i++)
                {
                        if(word.charAt(i)==letter)
                        {
                                count++;
                        }
                }

                System.out.println("------ OUTPUT ------");
                System.out.println("No. of entered letter in the given word = "+count);
                System.out.println("");
        }
}