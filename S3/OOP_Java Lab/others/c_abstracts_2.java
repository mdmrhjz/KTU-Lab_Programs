import java.util.*;

abstract class abc
{
    public abstract void print();
} 

public class c_abstracts_2 extends abc 
{
    public void print()
    {
        System.out.println("Hey man");
    }

    public static void main(String []args)
    {
        //make object of class c_abstracts_2
        c_abstracts_2 p=new c_abstracts_2();
        //run the method
        p.print();
    }   
}
