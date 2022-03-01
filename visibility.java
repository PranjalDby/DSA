public class visibility {
  private static String name="tomy";
    private static void getname()
    {
        System.out.println(name);
    }
public static void main(String[] args) {
        getname();
        System.out.println();
}
}
class tester extends visibility
{
    public static void names() {
        String n=name;

    }
}