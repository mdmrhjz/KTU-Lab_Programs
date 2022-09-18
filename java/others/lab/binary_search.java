import java.util.*;
import java.io.*;

public class binary_search
{
    public static void main(String []args)
    {
        int i, flag=0, n;

        System.out.println("\n\nBINARY SEARCH\n");
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

        int first=0;
        int last=n-1;
        int mid=(first+last)/2;

        while(first<=last)
        {
            if(A[mid] == key)
            {
                flag=1;
                break;
            }
            else if(key < A[mid])
            {
                last=mid-1;
            }
            else if(key > A[mid])
            {
                first=mid+1;
            }

            mid=(first+last)/2;
        }

        if(flag==0)
        {
            System.out.print("\n --> Element not found!\n");
        }
        else
        {
            System.out.print("\n --> Element found at index "+mid+"\n");
        }

    }
}