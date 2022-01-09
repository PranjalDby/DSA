import java.util.Scanner;

public class javaprogram {
    public static void main(String[] args) {
        int op;
        float result;
        float num1, nm2;
        do {
            System.out.println("1 for sum");
            System.out.println("2 for difference");
            System.out.println("3 for divide");
            System.out.println("enter the op:");
            Scanner sc = new Scanner(System.in);
            op = sc.nextInt();
            switch (op) {
                case 1:
                    System.out.println("enter the 1number for exit");
                    num1 = sc.nextInt();
                    System.out.println("second number:");
                    nm2 = sc.nextInt();
                    System.out.println("sum of two number:\n");
                    result = nm2 + num1;
                    System.out.println(result);
                    break;
                case 2:
                    System.out.println("enter the first:");
                    num1 = sc.nextInt();
                    System.out.println("entre the second:");
                    nm2 = sc.nextInt();
                    System.out.println("diffrence of two number is");
                    if (nm2 > num1) {
                        result = nm2 - num1;
                        System.out.println(result);
                    } else {
                        result = num1 - nm2;
                        System.out.println(result);
                    }
                    break;
                case 3:
                    System.out.println("enter the first:");
                    num1 = sc.nextInt();
                    System.out.println("entre the second:");
                    nm2 = sc.nextInt();
                    System.out.println("divide:");
                    result = num1 / nm2;
                    System.out.println(result);
                    break;
            }

        } while (op != 4);
    }
}
