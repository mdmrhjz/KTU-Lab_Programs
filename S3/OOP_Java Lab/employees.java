import java.util.*;
class Employee
{
        int age, phone, salary;
        String name, address;

        Scanner sc1=new Scanner(System.in);
        Scanner sc2=new Scanner(System.in);

        //SCAN
        public void getname()
        {
                System.out.print("Name: ");
                name=sc2.nextLine();
        }

        public void getage()
        {
                System.out.print("Age: ");
                age=sc1.nextInt();
        }

        public void getphone()
        {
                System.out.print("Phone no.: ");
                phone=sc1.nextInt();
        }

        public void getSalary()
        {
                System.out.print("Salary: ");
                salary=sc1.nextInt();
        }

        //Scanner sc2=new Scanner(System.in);
        public void getaddress()
        {
                System.out.print("Address: ");
                address=sc2.nextLine();
        }


        //PRINT
        public void printname()
        {
                System.out.println("Name: "+name);
        }

        public void printage()
        {
                System.out.println("Age: "+age);
        }

        public void printphone()
        {
                System.out.println("Phone: "+phone);
        }

        public void printSalary()
        {
                System.out.println("Salary: "+salary);
        }

        public void printaddress()
        {
                System.out.println("Address: "+address);
        }


}

class Officer extends Employee
{
        String department, specialization;
        Scanner sc3=new Scanner(System.in);

        public void getspecialization()
        {
                System.out.print("Specialization: ");
                specialization=sc3.nextLine();
        }
        public void getdepartment()
        {
                System.out.print("Department: ");
                department=sc3.nextLine();
        }

        public void printspecialization()
        {
                System.out.println("Specialization: "+specialization);
        }
        public void printdepartment()
        {
                System.out.println("Department: "+department);
        }
}


class Manager extends Employee
{
        String department, specialization;
        Scanner sc4=new Scanner(System.in);

        public void getspecialization()
        {
                System.out.print("Specialization: ");
                specialization=sc4.nextLine();
        }
        public void getdepartment()
        {
                System.out.print("Department: ");
                department=sc4.nextLine();
        }

        public void printspecialization()
        {
                System.out.println("Specialization: "+specialization);
        }
        public void printdepartment()
        {
                System.out.println("Department: "+department);
        }
}

public class employees
{
        public static void main(String []args)
        {
                int offno, i, manno;
                Scanner sc=new Scanner(System.in);

                //OBJECTS
                Officer off1=new Officer();


                System.out.println();
                System.out.println();
                System.out.println("------ EMPLOYEE PROGRAM ------");
                System.out.println();
                //System.out.print("Enter the no. of officers: ");
                //offno=sc.nextInt();
                //System.out.print("Enter the no. of managers: ");
                //manno=sc.nextInt();


                //READ
                System.out.println("--> Enter the details of officer");
                off1.getname();
                off1.getage();
                off1.getphone();
                off1.getSalary();
                off1.getaddress();
                off1.getdepartment();
                off1.getspecialization();
                System.out.println();
                System.out.println();

                Manager man1=new Manager();
                System.out.println("--> Enter the details of manager");
                man1.getname();
                man1.getage();
                man1.getphone();
                man1.getSalary();
                man1.getaddress();
                man1.getdepartment();
                man1.getspecialization();

                //PRINT
                System.out.println();
                System.out.println();
                System.out.println("----- Officer 1-----");
                off1.printname();
                off1.printage();
                off1.printphone();
                off1.printSalary();
                off1.printaddress();
                off1.printdepartment();
                off1.printspecialization();

                System.out.println();
                System.out.println();
                man1.printname();
                man1.printage();
                man1.printphone();
                man1.printSalary();
                man1.printaddress();
                man1.printdepartment();
                man1.printspecialization();
                System.out.println();
                System.out.println();

        }
}