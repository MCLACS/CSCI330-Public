public class Pair
{
    private int m_a;
    private int m_b;
    
    public Pair(int a, int b)
    {
        m_a = a;
        m_b = b;
    }
    
    public int sum()
    {
        return m_a + m_b;
    }
     
    public static void main(String args[])
    {
        Pair p = new Pair(10, 5);
        System.out.println(p.sum());
    }
}