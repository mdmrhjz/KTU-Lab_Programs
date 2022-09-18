import java.util.*;

abstract class abc
{
    public abstract void print();
} 

class def extends abc
{
    public void print()
        {
            System.out.println("Hello");
        }
}

public class c_abstracts_1
{
    public static void main(String []args)
    {
        //object of class def
        def z=new def();
        //run the method
        z.print();
    }
}
