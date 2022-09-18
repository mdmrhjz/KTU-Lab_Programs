import java.util.*;
import java.io.*;

public class bubble_sort
{
    public static void main(String []args)
    {
        int i, j, temp, n;

        System.out.println("\n\n\tBUBBLE SORT\n");
        System.out.print("Enter the number of elements: ");
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();

        System.out.println("");
        System.out.println("Enter the elements: ");

        int A[] = new int[n];
        for(i=0;i<n;i++)
        {
            A[i]=sc.nextInt();
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<n-1;j++)
            {
                if(A[j]>A[j+1])
                {
                    temp=A[j];
                    A[j]=A[j+1];
                    A[j+1]=temp;
                }
            }
        }

        System.out.println("\n --- SORTED ARRAY ---");
        for(i=0;i<n;i++)
        {
            System.out.print("\t"+A[i]);
        }
        System.out.println("");

    }
}