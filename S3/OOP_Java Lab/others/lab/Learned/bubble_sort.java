import java.util.*;
import java.io.*;

public class bubble_sort
{
    public static void main(String []args)
    {
        int i, j, n;
        int a[]=new int[10];

        System.out.println();
        System.out.print("Enter the no. of elements: ");
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();

        System.out.println("Enter the elements");
        for(i=0;i<n;i++)
        {
            a[i]=sc.nextInt();
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<n-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    int temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }

        System.out.println();
        //print
        for(i=0;i<n;i++)
        {
            System.out.print("\t"+a[i]);
        }

    }
}