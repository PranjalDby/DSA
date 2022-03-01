import java.util.Scanner;

public class Arrays_in {
    public static void main(String[] args) {
        int[] Marks = new int[5];
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the marks:");
        for (int i = 0; i < Marks.length; i++) {
            Marks[i] = sc.nextInt();
        }
        for (int i = 0; i < Marks.length; i++) {
            System.out.println("  " + Marks[i]);
        }
        // another way to declare array
        int min[] = new int[6];
        for (int i = 0; i < Marks.length - 1; i++) {
            for (int j = 0; j < Marks.length - i - 1; j++) {
                /*
                 * if (Marks[j]>Marks[j+1]) {
                 * int temp=Marks[j+1];
                 * Marks[j+1]=Marks[j];
                 * Marks[j]=temp;
                 * 
                 * }
                 */
                if (Marks[j] < Marks[j + 1]) {
                    int temp = Marks[j];
                    Marks[j] = Marks[j + 1];
                    Marks[j + 1] = temp;
                }
            }
        }
        System.out.println("Marks in highest-lowest" + "");
        for (int i = 0; i < Marks.length; i++) {
            System.out.println(Marks[i]);
        }
        // two dimensional array
        int arr[][] = new int[2][3];
        int i;
        System.out.println("enter the element in array:");
        for (i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr.length; j++) {
                arr[i][j] = sc.nextInt();
            }
        }
        for(i=0;i<arr.length;i++)
        {
            for(int j=0;j<arr.length;j++)
            {
                System.out.println(arr[i][j]);
            }
        }

    }
}
