public class Main
{
	public static void main(String args[])
	{
		Main m = new Main();
		m.go();	
	}

	private void go()
	{
		int i = 10;
		changeInt(i);
		System.out.println(i);

		MyInt mi = new MyInt(10);
		changeMyInt(mi);
		System.out.println(mi);

		String s = "Run";
		changeString(s);
		System.out.println(s);

		StringBuffer sb = new StringBuffer("Run");
		changeStringBuffer(sb);
		System.out.println(sb);
	}

	private void changeInt(int i )
	{
		i = 100;
	}

	private void changeMyInt(MyInt i)
	{
		i.setInt(100);
	}

	private void changeString(String s)
	{
		s = s + " fast!";
	}

	private void changeStringBuffer(StringBuffer sb)
	{
		sb.append(" fast!");
	}

	private static class MyInt
	{
		private int m_i;

		MyInt(int i)
		{
			setInt(i);
		}

		public int getInt()
		{
			return m_i;
		}

		public void setInt(int i)
		{
			m_i = i;
		}

		@Override
		public String toString()
		{
			return m_i+"";
		}
	}
}