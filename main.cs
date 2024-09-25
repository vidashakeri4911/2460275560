using System;
namespace First_Program
{
class circel
{
	public float p= 3.14f;
	public int r;
	public float masahat() {
		return p*r*r;
	}
	public float mohit() {
		return 2*(p*r);
	}
}
class Program
{
	static void Main(string[] args)
	{
		circel a=new circel();
		a.r=int.Parse(Console.ReadLine());
		Console.WriteLine("masahat is{0},mohit is={1}",a.masahat(),a.mohit());
	}
}
}