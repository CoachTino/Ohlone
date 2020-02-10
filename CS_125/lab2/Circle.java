package lab2;

public class Circle {
	
	double radius;
	final double PI = 3.14159;
	
	public Circle(double r)
	{
		radius = r;
	}
	
	public void setRadius(double r)
	{
		radius = r;
	}
	
	public double getRadius()
	{
		return radius;
	}
	
	public double getArea()
	{
		double area = PI * radius * radius;
		return area;
	}
	
	public double getDiameter()
	{
		double diameter = radius * 2;
		return diameter;
	}
	
	public double getCircumference()
	{
		double circumference = 2 * PI * radius;
		return circumference;
	}
	

}
