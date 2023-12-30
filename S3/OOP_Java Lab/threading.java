import java.io.*;
import java.util.*;

class A extends Thread
{
    public void run()
    {
        System.out.println("Threadname: "+currentThread().getName());
    }
}

public class threading
{
    public static void main(String []agrs)
    {
        System.out.println();
        A obj1=new A();
        obj1.run();

        //Run using new Thread
        obj1.start();

    }
}