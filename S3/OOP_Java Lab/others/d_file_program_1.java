import java.util.*;
import java.io.*;

class d_file_program_1
{
    public static void main(String []args)
    {

        // Creaing a file using object

        try
        {
            File f0=new File("sample.txt");
            if(f0.createNewFile())
            {
                System.out.println("File "+f0.getName()+" is created successfully");
            }
        }
        catch(IOException e)
        {
            System.out.println("File cant be created due to some unknown error");
        }
    }
}