//METHOD OVERLOADING PROGRAM
class methodoverload
{
        static int sum(int a, int b)
        {
                return (a+b);
        }
        static float sum(float a, float b)
        {
                return (a+b);
        }
        static double sum(double a, double b)
        {
                return (a+b);
        }
}

public class methodoverloading_in_2_classes_with_static
{
        public static void main(String []args)
        {
                System.out.println("----- METHODOVERLOADING PROGRAM -----\n\n");
                int numint=methodoverload.sum(5, 10);
                double numdouble=methodoverload.sum(5.2, 2.3);
                System.out.println("Integer sum");
                System.out.println(" = " + numint);
                System.out.println("Double sum");
                System.out.println(" = " + numdouble);
        }
}