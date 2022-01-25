
public class java_jan
{
  public static void main(String[] args) {
      System.out.println("hello world\n");
      System.out.println("data types in java are:\n");
      int num=34;
      float y=3.4f;
      char x='a';
      String name;
      name="aryan";
      double n=3.2222233444;
      System.out.println("Num Is"+num);
      System.out.println("float Num Is"+y);
      System.out.println("char Is"+x);
      System.out.println("string Is"+name);
      System.out.println("boolean Is"+ n);
      int a=10,b=10;
      boolean s;
      if (a>b) {
          /* System.out.println(a+"is"+">"+b); */
            s=true;
      }
      else if(a==b)
      {
          s=true;
        System.out.println(s);
      }
      else
      {
        System.out.println(b + ">" + a);
      }
  }
}