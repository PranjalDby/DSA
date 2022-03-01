import java.util.Scanner;

/**
 * binary2
 */
public class binary2 {
    public static void binary(int arr[],int si,int ei,int key)
    {
        int mid =(ei+si)/2;
            if(key<=arr[mid])
            {
                for(int j=0;j<=mid;j++)
                {
                    if(key==arr[j])
                    {
                        System.out.println(j);
                    }
                }
            }
            else
            {
                for(int j=mid+1;j<=arr.length-1;j++)
                {
                    if(key==arr[j])
                    {
                        System.out.println(j);
                    }
                }
            }

    }
public static void main(String[] args) {
    int arr[]={2,5,8,12,16,23,33,56};
    int key;
    System.out.println("enter the element that you have to search:\n");
    Scanner sc= new Scanner(System.in);
    key=sc.nextInt();
    binary(arr, 0,arr.length,key);

}
    
}