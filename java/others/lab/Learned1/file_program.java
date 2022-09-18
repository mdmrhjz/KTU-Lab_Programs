import java.util.*;
import java.io.*;

public class file_program
{
    public static void main(String []args) throws IOException
    {
        System.out.println("\n\n\tCOPY CONTENTS FROM ONE FILE TO ANOTHER\n");
        FileReader fr=new FileReader("a.txt");
        FileWriter fw=new FileWriter("b.txt");

        int ch;

        while((ch=fr.read())!=-1)
        {
            char val=(char)ch;
            System.out.print(val);
            fw.write(val);
        }
        fr.close();
        fw.close();

    }
}