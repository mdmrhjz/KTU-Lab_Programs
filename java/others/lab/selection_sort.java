import java.util.*;
import java.io.*;

public class selection_sort
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
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    int temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
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