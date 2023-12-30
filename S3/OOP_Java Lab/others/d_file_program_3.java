import java.util.*;
import java.io.*;

class d_file_program_3
{
    public static void main(String []args)throws IOException
    {
        File a=new File("sample.txt");
        FileWriter b=new FileWriter("sample.txt");
        if(!a.exists())
        {
            a.createNewFile();
            System.out.println("New file created");
        }
        b.write("Hello World");
        b.close();
        System.out.println("Writing to file done");
    }
}