import java.io.*;
import java.util.*;

public class file_handling
{
    public static void main(String []args) throws IOException
    {
        int count=0;
        FileReader fr=new FileReader("abc.txt");
        int ch;
        char chr;
        while((ch=fr.read())!=-1)
        {
            chr=(char)ch;
            if(chr=='A' || chr=='a' || chr=='E' || chr=='e' || chr=='I' || chr=='i' || chr=='O' || chr=='o' || chr=='U' || chr=='u')
            {
                count++;
            }
        }

        System.out.println("No. of vowels = "+count);
        fr.close();
    }
}