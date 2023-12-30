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
        System.out.println("Even Thread, Square of "+num+" = "+num*num);
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
        System.out.println("Odd Thread, Cube of "+num+" = "+num*num*num);
    }
}

class RandomThread extends Thread
{
    Random r=new Random();
    int num;
    
    public void run()
    {
        for(int i=0;i<10;i++)
        {
            num=r.nextInt(100);

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
        System.out.println("\n\n\tMULTI THREADING");
        RandomThread obj=new RandomThread();
        obj.start();
        System.out.println();
    }
}