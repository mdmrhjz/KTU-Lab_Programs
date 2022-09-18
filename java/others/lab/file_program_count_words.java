import java.util.*;
import java.io.*;

public class file_program_count_words
{
    public static void main(String []args) throws IOException
    {
        int count=0;
        System.out.println("\n\n\tCOUNT WORDS\n");

        FileReader fr=new FileReader("a.txt");
        int ch;
        while((ch=fr.read())!=-1)
        {
            char val=(char)ch;
            if(val==' ')
            {
                count++;
            }
        }

        System.out.println("No. of words: "+(count+1)+"\n");
        fr.close();
    }
}