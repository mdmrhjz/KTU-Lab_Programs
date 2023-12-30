import java.util.*;
import java.io.*;

public class linear_search
{
    public static void main(String []args)
    {
        int i, flag=0, n;

        System.out.println("\n\nLINEAR SEARCH\n");
        System.out.print("Enter the number of elements: ");
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();

        System.out.println("\nEnter the elements: ");

        int A[] = new int[n];
        for(i=0;i<n;i++)
        {
            A[i]=sc.nextInt();
        }

        System.out.print("\nEnter the element to be searched: ");
        int key=sc.nextInt();

        for(i=0;i<n;i++)
        {
            if(A[i]==key)
            {
                flag=1;
                break;
            }
        }

        if(flag==0)
        {
            System.out.print("\n --> Element not found!\n");
        }
        else
        {
            System.out.print("\n --> Element found at index "+i+"\n");
        }
        
    }

}