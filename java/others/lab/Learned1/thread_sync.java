import java.util.*;
import java.io.*;

class Display
{
    public synchronized void print(String msg)
    {
        System.out.print("["+msg);
        try
        {
            Thread.sleep(1000);
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
        System.out.println("]");
    }
}

class Threading extends Thread
{
    Display d;
    String msg;

    public Threading(Display d, String msg)
    {
        this.d=d;
        this.msg=msg;
    }

    public void run()
    {
        d.print(msg);
    }
}

public class thread_sync
{
    public static void main(String []args)
    {
        System.out.println("\n\n\tTHREAD SYNCHRONIZATION");

        Display d=new Display();
        Threading obj1=new Threading(d, "Hello");
        Threading obj2=new Threading(d, "World!");
        obj1.start();
        obj2.start();
        System.out.println();
    }
}