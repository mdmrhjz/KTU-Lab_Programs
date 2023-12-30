import java.io.*;
import java.util.*;

abstract class universal
{
    abstract void no_of_sides();
}

class Rectangle extends universal
{
    void no_of_sides()
    {
        System.out.println("No. of sides = 4");
    }
}

class Triangle extends universal
{
    void no_of_sides()
        {
            System.out.println("No. of sides = 3");
        }
}

class Circle extends universal
{
    void no_of_sides()
        {
            System.out.println("No .of sides = 0");
        }
}

public class shape
{
    public static void main(String args[])
    {
        Rectangle a=new Rectangle();
        Triangle b=new Triangle();
        Circle c=new Circle();

        a.no_of_sides();
        b.no_of_sides();
        c.no_of_sides();
    }
}