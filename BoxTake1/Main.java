public class Main
{
	public static void main(String args[]) throws Exception
	{
		Box b1 = new Box();
		b1.add("Hello-B1");
		b1.add("Jump-B1");
		System.out.println("Box1:\n" + b1);

		Box b2 = new Box(b1);
		b2.add("Yikes-B2");
		System.out.println("Box1:\n" + b1);
		System.out.println("Box2:\n" + b2);
	} 
}
