import java.util.*;
import java.io.*;

class employees
{
    String name;
    int salary;

    Scanner sc1=new Scanner(System.in);
    Scanner sc2=new Scanner(System.in);

    void input_name()
    {
        name=sc1.nextLine();
    }

    void input_salary()
    {
        salary=sc2.nextInt();
    }

    String print_name()
    {
        return name;
    }

    int print_salary()
    {
        return salary;
    }
}

class officer extends employees
{
    String spec;

    void input_spec()
    {
        spec=sc1.nextLine();
    }

    String print_spec()
    {
        return spec;
    }

}

class manager extends employees
{
    String dept;

    void input_dept()
    {
        dept=sc1.nextLine();
    }

    String print_dept()
    {
        return dept;
    }
}

public class employee
{
    public static void main(String []args)
    {
        Scanner sc=new Scanner(System.in);
        officer off1=new officer();
        manager man1=new manager();

        System.out.println("\n\n\tEMPLOYEE\n");
        System.out.println("--- Enter the details\n");

        ////    Input
        //Officer
        System.out.println("-> Officer");
        System.out.print("Enter the name: ");
        off1.input_name();
        System.out.print("Enter the salary: ");
        off1.input_salary();
        System.out.print("Enter the specialization: ");
        off1.input_spec();
        System.out.println();
        //Manager
        System.out.println("-> Manager");
        System.out.print("Enter the name: ");
        man1.input_name();
        System.out.print("Enter the salary: ");
        man1.input_salary();
        System.out.print("Enter the department: ");
        man1.input_dept();

        System.out.println("\n\n--- Output\n");
        ////    Print
        //Officer
        System.out.println("-> Officer");
        System.out.println("Name: "+off1.print_name());
        System.out.println("Salary: "+off1.print_salary());
        System.out.println("Specialization: "+off1.print_spec()+"\n");
        //Manager
        System.out.println("-> Manager");
        System.out.println("Name: "+man1.print_name());
        System.out.println("Salary: "+man1.print_salary());
        System.out.println("Department: "+man1.print_dept());

    }
}