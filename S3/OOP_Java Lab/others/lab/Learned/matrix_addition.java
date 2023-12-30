import java.util.*;
import java.io.*;

public class matrix_addition
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

        if(r1!=r2 || c1!=c2)
        {
            System.out.println("Additon is not possible");
            return;
        }

        //Initialize the matrix
        int A[][]=new int[r1][c1];
        int B[][]=new int[r2][c2];
        int r3=r1;
        int c3=c1;

        //Scan
        System.out.println();
        System.out.println("-> Enter the elements of Matrix 1");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                System.out.print("\tA["+i+"]["+j+"] : ");
                A[i][j]=sc.nextInt();
            }
        }

        System.out.println("-> Enter the elements of Matrix 2");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                System.out.print("\tB["+i+"]["+j+"] : ");
                B[i][j]=sc.nextInt();
            }
        }

        //ADD
        int C[][]=new int[r3][c3];

        for(i=0;i<r3;i++)
        {
            for(j=0;j<c3;j++)
            {
                C[i][j]=A[i][j]+B[i][j];
            }
        }

        System.out.println();
        System.out.println("\t --- MATRIX C ---");
        for(i=0;i<r3;i++)
        {
            for(j=0;j<c3;j++)
            {
                System.out.print("\t"+C[i][j]);
            }
            System.out.println();
        }

    }
}