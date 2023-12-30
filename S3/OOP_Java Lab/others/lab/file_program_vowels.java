import java.util.*;
import java.io.*;

public class file_program_vowels
{
    public static void main(String []args) throws IOException
    {
        int count=0;
        System.out.println("\n\n\tCOUNT VOWELS\n");
        FileReader fr=new FileReader("a.txt");

        int ch;
        char val;
        while((ch=fr.read())!=-1)
        {
            val=(char)ch;
            if(val=='a' || val=='e' || val=='i' || val=='o' || val=='u' || val=='A' || val=='E' || val=='I' || val=='O' || val=='U')
            {
                count++;
            }
        }

        System.out.println("No. of vowels: "+count+"\n");
        fr.close();

    }
}