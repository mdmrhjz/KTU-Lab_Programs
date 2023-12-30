import java.util.*;
import java.io.*;

public class matrix_transpose
{
    public static void main(String []args)
    {
        Scanner sc=new Scanner(System.in);
        int i, j;

        System.out.print("Enter the number of rows in matrix: ");
        int r=sc.nextInt();

        System.out.print("Enter the number of columns in matrix: ");
        int c=sc.nextInt();

        //Initialize the matrix
        int A[][]=new int[r][c];
        int B[][]=new int[c][r];

        //Scan
        System.out.println();
        System.out.println("-> Enter the elements of Matrix");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                System.out.print("\tA["+i+"]["+j+"] : ");
                A[i][j]=sc.nextInt();
            }
        }

        //TRANSPOSE
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                B[j][i]=A[i][j];
            }
            System.out.println();
        }

        //Print
        System.out.println();
        System.out.println("\t --- MATRIX Transpose ---");
        for(i=0;i<c;i++)
        {
            for(j=0;j<r;j++)
            {
                System.out.print("\t"+B[i][j]);
            }
            System.out.println();
        }

    }
}