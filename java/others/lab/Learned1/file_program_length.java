import java.util.*;
import java.io.*;

public class file_program_length
{
    public static void main(String []args) throws IOException
    {
        int count=0;
        System.out.println("\n\n\tCOUNT LENGTH\n");
        FileReader fr=new FileReader("a.txt");

        int ch;
        char val;
        while((ch=fr.read())!=-1)
        {
            count++;
        }

        System.out.println("File Length: "+count+"\n");
        fr.close();

    }
}