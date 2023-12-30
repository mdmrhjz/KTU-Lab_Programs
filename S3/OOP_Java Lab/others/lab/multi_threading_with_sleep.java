import java.util.*;
import java.io.*;

class EvenThread extends Thread
{
    int num;
    public EvenThread(int num)
    {
        this.num=num;
    }

    public void run()
    {
        System.out.println(num+" - Even No. Squared: "+num*num);
    }
}

class OddThread extends Thread
{
    int num;
    public OddThread(int num)
    {
        this.num=num;
    }

    public void run()
    {
        System.out.println(num+" - Odd No. Cube: "+num*num*num);
    }
}

class RandomNumber extends Thread
{
    public void run()
    {
        Random r=new Random();
        for(int i=0;i<10;i++)
        {
            try
            {
                Thread.sleep(1000);
            }
            catch(Exception e)
            {
                System.out.println(e);
            }

            int num=r.nextInt(100);

            if(num%2==0)
            {
                new EvenThread(num).start();
            }
            else
            {
                new OddThread(num).start();
            }
        }
    }
}

public class multi_threading
{
    public static void main(String []args)
    {
        RandomNumber obj=new RandomNumber();
        obj.start();
    }
}