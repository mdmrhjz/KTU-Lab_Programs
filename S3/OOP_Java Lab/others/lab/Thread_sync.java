import java.util.*;
import java.io.*;

class display
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
    public display d;
    public String msg;

    public Threading(display d, String msg)
    {
        this.d=d;
        this.msg=msg;
    }

    public void run()
    {
        d.print(msg);
    }
}

public class Thread_sync
{
    public static void main(String []args)
    {
        display d=new display();
        Threading obj1=new Threading(d, "Hello");
        Threading obj2=new Threading(d, "World!");
        obj1.start();
        obj2.start();
    }
}