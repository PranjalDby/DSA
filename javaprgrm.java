
public class javaprgrm {
    public static void main(String[] args) {
        int a=44;
        Float fld=4.5f;
        char x='a';
        String name="pranjal";
        System.out.println("int \t" + a );
        System.out.println("dloat \t" + fld );
        //typecasting
        System.out.println("char:string:"+x+"\t"+name);
        //loops
       /*  int i=0,sum=0;
        while (i<10) {
            System.out.println(i+"\n");
            System.out.println("\n");
            sum=sum+i;
            System.out.println(sum+"\n");
            i++;
        } */
        int i;
        for(i=0;i<10;i++)
        {
            if(i==8)
            {
                continue;
            }
            System.out.println(i);
        }
        //statements
 
    }
 }
 