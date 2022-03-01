public class quickSort {
    public static int partition(int arr[],int low,int high)
    {
        int pivot=arr[high];
        int i=low-1;
        for (int j=low;j<high;j++)
        {
            if (arr[j]<pivot) {
                i++;
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        i++;
        int temp=arr[i];
        arr[i]=arr[high];
        arr[high]=temp;
        return i;
    }

    public static void quick(int arr[],int low,int high)
    {
        if(low<high)
        {
            int pindx=partition(arr,low,high);
            quick(arr,low,pindx-1);
            quick(arr, pindx+1, high);
        }
    }
       public static void main(String[] args) {
        int arr[]={6,3,9,5,2,8};
        int high=arr.length;
        quick(arr,0,high-1);
        for(int i=0;i<high;i++)
        {
            System.out.println(arr[i]);
        }

    }
}
