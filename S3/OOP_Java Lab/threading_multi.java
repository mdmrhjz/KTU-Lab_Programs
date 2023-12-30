import java.io.*;
import java.util.*;

class A extends Thread
{
    public void run()
    {
        System.out.println("Threadname: "+currentThread().getName());
    }
}

class B extends Thread
{
    public void run()
    {
        System.out.println("Threadname: "+currentThread().getName());
    }
}

public class threading_multi
{
    public static void main(String []agrs)
    {
        System.out.println();
        A obj1=new A();
        B obj2=new B();
        obj1.run();
        obj2.run();

        //Run using new Thread 1
        obj1.start();
        //Run using new Thread 1
        obj2.start();

    }
}