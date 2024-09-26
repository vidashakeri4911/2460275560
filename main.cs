
using System;

public struct Calculator
{
    public double Add(double a, double b)
    {
        return a + b;
    }

    public double Subtract(double a, double b)
    {
        return a - b;
    }

    public double Multiply(double a, double b)
    {
        return a * b;
    }

    public double Divide(double a, double b)
    {
        if (b == 0)
        {
            Console.WriteLine("You Can't Divide Number By Zero");
            return 0;
        }
else{
        return a / b;
    }}
}

class Program
{
    static void Main(string[] args)
    {
        Calculator calculator = new Calculator();

        Console.WriteLine("Enter First Number :");
        double num1 = Convert.ToDouble(Console.ReadLine());

        Console.WriteLine("Enter Second Number :");
        double num2 = Convert.ToDouble(Console.ReadLine());

        Console.WriteLine($"Addition: {calculator.Add(num1, num2)}");
        Console.WriteLine($"Subtraction: {calculator.Subtract(num1, num2)}");
        Console.WriteLine($"Multiplication: {calculator.Multiply(num1, num2)}");
        Console.WriteLine($"Division: {calculator.Divide(num1, num2)}");
    }
}
  