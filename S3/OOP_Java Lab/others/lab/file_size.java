import java.io.*;
import java.util.*;

public class file_size
{
    public static void main(String []args) throws IOException
    {
        int count=0;
        FileReader fr=new FileReader("abc.txt");

        while(fr.read()!=-1)
        {
            count++;
        }

        System.out.println("Length of file = "+count);
        fr.close();
    }
}