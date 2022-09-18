import java.util.*;
import java.io.*;

class d_file_program_2
{
    public static void main(String args[])throws IOException
    {
        File a=new File("sample.txt");
        if(a.exists())
        {
            System.out.println("File already exist");
            System.out.println("File name: "+a.getName());
            System.out.println("File path: "+a.getAbsolutePath());
            System.out.println("Is file writable? - "+a.canWrite());
            System.out.println("Is file readable? - "+a.canRead());
            System.out.println("File Length: "+a.length());
        }
        else
        {
            a.createNewFile();
            System.out.println("File created");
        }
    }
}