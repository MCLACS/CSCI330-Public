public class Box
{
	private static final int MAX_SIZE = 10;
	private int m_size;
	private String m_contents[];

	// default constructor
	public Box()
	{
		m_size = 0;
		m_contents = new String[MAX_SIZE];
	}

	// copy constructor
	public Box(Box other)
	{
		m_size = other.m_size;
		m_contents = other.m_contents;

		/*
		m_contents = new String[MAX_SIZE];
		for (int i = 0; i < other.m_size; i++)
			m_contents[i] = other.m_contents[i];
		*/
	}

	public void add(String item) throws Exception
	{
		if (m_size < MAX_SIZE)
		{
			m_contents[m_size] = item;
			m_size++;
		}
		else
		{
			throw new Exception("Box is full!");
		}
	}

	@Override
	public String toString()
	{
		String ret = "Size: " + m_size + "\njava";
		for (String s : m_contents)
		{
			if (s != null)
				ret = ret + s+"\n";
		}
		return ret;
	}
}
