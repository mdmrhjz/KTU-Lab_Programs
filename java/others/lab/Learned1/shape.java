import java.util.*;
import java.io.*;

abstract class Shapes
{
    public abstract void no_of_sides();
}

class Rectangle extends Shapes
{
    public void no_of_sides()
    {
        System.out.println("No. of sides of Rectangle: 4");
    }
}

class Triangle extends Shapes
{
    public void no_of_sides()
    {
        System.out.println("No. of sides of Triangle: 3");
    }
}

class Pentagon extends Shapes
{
    public void no_of_sides()
    {
        System.out.println("No. of sides of Pentagon: 5");
    }
}

public class shape
{
    public static void main(String []args)
    {
        Rectangle r=new Rectangle();
        Triangle t=new Triangle();
        Pentagon p=new Pentagon();
        r.no_of_sides();
        t.no_of_sides();
        p.no_of_sides();
    }
}