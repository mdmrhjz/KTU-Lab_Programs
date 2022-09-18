import java.util.*;
import java.io.*;

public class matrix_multiplicaion
{
    public static void main(String []args)
    {
        Scanner sc=new Scanner(System.in);
        int i, j;

        System.out.print("Enter the number of rows in matrix 1: ");
        int r1=sc.nextInt();

        System.out.print("Enter the number of columns in matrix 1: ");
        int c1=sc.nextInt();

        System.out.print("Enter the number of rows in matrix 2: ");
        int r2=sc.nextInt();

        System.out.print("Enter the number of columns in matrix 2: "); 
        int c2=sc.nextInt();

        if(c1!=r2)
        {
            System.out.println("Multiplication not possible");
            return;
        }

        //Initialize the matrix
        int A[][]=new int[r1][c1];
        int B[][]=new int[r2][c2];
        int r3=r1;
        int c3=c2;

        //Scan
        System.out.println("-> Enter the elements of Matrix 1");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                System.out.println("\tA["+i+"]["+j+"] : ");
                A[i][j]=sc.nextInt();
            }
        }

        System.out.println("-> Enter the elements of Matrix 2");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                System.out.println("\tB["+i+"]["+j+"] : ");
                B[i][j]=sc.nextInt();
            }
        }

        //Multiply
        int C[][]=new int[r3][c3];

        for(i=0;i<r3;i++)
        {
            for(j=0;j<c3;j++)
            {
                for(k=0;k<;k++)
                {

                }
            }
        }


    }
}