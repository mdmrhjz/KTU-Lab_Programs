//METHOD OVERLOADING PROGRAM
class methodoverloading_in_1_class_with_static
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

        public static void main(String []args)
        {
                System.out.println("----- METHODOVERLOADING PROGRAM -----\n\n");
                int numint=sum(5, 10);
                double numdouble=sum(5.2, 2.3);
                System.out.println("Integer sum");
                System.out.println(" = " + numint);
                System.out.println("Double sum");
                System.out.println(" = " + numdouble);
        }
}