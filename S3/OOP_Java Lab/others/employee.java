import java.util.*;

class employ
{
    private String name;
    private int age, phone;

    public void set_details(String name, int age, int phone)
    {
        this.name=name;
        this.age=age;
        this.phone=phone;
    }

    public void print_details()
    {
        System.out.println("-> Details");
        System.out.println("Name: "+name);
        System.out.println("Age: "+age);
        System.out.println("Phone no: "+phone);
    }

    public String fetch_name()
    {
        return name;
    }
    public int fetch_age()
    {
        return age;
    }
    public int fetch_phone()
    {
        return phone;
    }

}

class officer extends employ
{
    String specialization;

    public void set_spec(String specialization)
    {
    this.specialization=specialization;
    }

    public void print_specialization()
    {
        System.out.println("Specialization: "+specialization);
    }

    public String fetch_specialization()
    {
        return specialization;
    }
}

class manager extends employ
{
    String department;

    public void set_depart(String department)
    {
    this.department=department;
    }

    public void print_department()
    {
        System.out.println("Department: "+department);
    }

    public String fetch_department()
    {
        return department;
    }
}

public class employee
{
    public static void main(String [] args)
    {
        Scanner sc1=new Scanner(System.in);
        Scanner sc2=new Scanner(System.in);
        officer off1=new officer();

        System.out.print("\n\n");
        System.out.print("----- Employee Program -----");
        System.out.print("\n\n");
        System.out.println("- Enter the details of officer");
        System.out.print("Enter the name, age, phone number, specialization:- \n");
        off1.set_details(sc1.nextLine(), sc2.nextInt(), sc2.nextInt());
        off1.set_spec(sc1.nextLine());

        manager man1=new manager();
        System.out.println();
        System.out.println("- Enter the details of manager");
        System.out.print("Enter the name, age, phone number, department:- \n");
        man1.set_details(sc1.nextLine(), sc2.nextInt(), sc2.nextInt());
        man1.set_depart(sc1.nextLine());

        System.out.print("\n\n-- Officer\n");
        off1.print_details();
        off1.print_specialization();

        System.out.print("\n\n-- Manager\n");
        man1.print_details();
        man1.print_department();

    }
}