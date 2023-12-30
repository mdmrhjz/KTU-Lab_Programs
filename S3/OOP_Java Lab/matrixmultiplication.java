import java.util.*;
//CSE S3 33 MDMR
class matrixmultiplication
{
        public static void main(String []args)
        {
                int i, j, k, indexi, indexj;
                System.out.println("");
                System.out.println("MATRIX MULTIPLICATION");
                System.out.println("");

                System.out.print("Enter the no. of rows in Matrix 1: ");
                Scanner sc=new Scanner(System.in);
                int r1=sc.nextInt();

                System.out.print("Enter the no. of columns in Matrix 1: ");
                int c1=sc.nextInt();
                System.out.println("");

                System.out.print("Enter the no. of rows in Matrix 2: ");
                int r2=sc.nextInt();

                System.out.print("Enter the no. of columns in Matrix 2: ");
                int c2=sc.nextInt();
                System.out.println("");

                if(c1!=r2)
                {
                        System.out.println("-- ERROR: Matrix multiplication is not possible");
                        System.out.println("--> No. of columns in Matrix 1 should be same as no. of rows in matrix 2!");
                        System.out.println("");
                        return;
                }

                int a[][]=new int[r1][c1];
                int b[][]=new int[r2][c2];
                int c[][]=new int[r1][c2];

                System.out.println("- Input the values of 1st matrix");
                for(i=0;i<r1;i++)
                {
                        for(j=0;j<c1;j++)
                        {
                                indexi=i+1;
                                indexj=j+1;
                                System.out.print("row "+indexi+", column "+indexj+" : ");
                                a[i][j]=sc.nextInt();
                        }
                }
                System.out.println("");

                System.out.println("- Input the values of 2nd matrix");
                for(i=0;i<r2;i++)
                {
                        for(j=0;j<c2;j++)
                        {
                                indexi=i+1;
                                indexj=j+1;
                                System.out.print("row "+indexi+", column "+indexj+" : ");
                                b[i][j]=sc.nextInt();
                        }
                }
                System.out.println("");

                for(i=0;i<r1;i++)
                {
                        for(j=0;j<c2;j++)
                        {
                                c[i][j]=0;
                                for(k=0;k<c1;k++)
                                        c[i][j]=c[i][j]+a[i][k]*b[k][j];
                        }
                }

                System.out.println("");
                System.out.println("------- OUTPUT -------");

                //MATRIX 1 PRINT
                System.out.println("MATRIX 1");
                for(i=0;i<r1;i++)
                {
                        System.out.print("\t[");
                        for(j=0;j<c1;j++)
                        {
                                System.out.print("  "+a[i][j]);
                        }
                        System.out.print("  ]");
                        System.out.println("");
                }
                System.out.println("");

                //MATRIX 2 PRINT
                System.out.println("MATRIX 2");
                for(i=0;i<r2;i++)
                {
                        System.out.print("\t[");
                        for(j=0;j<c2;j++)
                        {
                                System.out.print("  "+b[i][j]);
                        }
                        System.out.print("  ]");
                        System.out.println("");
                }
                System.out.println("");

                //MATRIX 3 - RESULT
                System.out.println("MATRIX 3 - RESULT");
                for(i=0;i<r1;i++)
                {
                        System.out.print("\t[");
                        for(j=0;j<c2;j++)
                        {
                                System.out.print("  "+c[i][j]);
                        }
                        System.out.print("  ]");
                        System.out.println("");
                }
                System.out.println("");
        }
}