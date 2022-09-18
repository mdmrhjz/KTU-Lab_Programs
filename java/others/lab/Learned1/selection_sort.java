import java.util.*;
import java.io.*;

public class selection_sort
{
    public static void main(String []args)
    {
        int i, j, temp, n;

        System.out.println("\n\n\SELECTION SORT\n");
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
            for(j=i+1;j<n;j++)
            {
                if(A[i]>A[j])
                {
                    temp=A[i];
                    A[i]=A[j];
                    A[j]=temp;
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