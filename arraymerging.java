public class arraymerging {
    public static void divide(int arr[],int si,int ei) {
        int mid=si+(ei-si)/2;
        if (si>=ei) {
            return;
        }
        divide(arr, si,mid);
        divide(arr,mid+1,ei);
        conquer(arr,si,ei,mid);

    }
    public static void conquer(int arr[],int si,int ei,int mid) {
        int merged[]=new int[ei-si+1];
        int indx1=si;
        int indx2=mid+1;
        int j=0;
        while (indx1<=mid&&indx2<=ei)
        {
            if(arr[indx1]<=arr[indx2])
            {
                merged[j++]=arr[indx1++];
            }
            else
            {
                merged[j++]=arr[indx2++];
            }
        }
        while (indx1<=mid)
        {
            merged[j++]=arr[indx1++];
        }
        while (indx2<=ei)
        {
            merged[j++]=arr[indx2++];
        }
        for(int i=0,k=si;i<merged.length;i++,k++)
        {
            arr[k]=merged[i];
        }
        
    }
    public static void printarray(int arr[])
    {
        for(int i=0;i<arr.length;i++)
        {
            System.out.println(arr[i]);
        }
    }

        public static void main(String[] args) {
        int arr[]={1,2,3,0,0,0};
        int arr2[]={2,5,6};
        int m=3,n=3;
        int arr3[]=new int[m+n];
        int i,j,k=0;
        for (i = 0;i<m;i++) {
            arr3[k]=arr[i];
            k++;
        }
        for (i = 0;i<n;i++) {
            arr3[k]=arr2[i];
            k++;
        }
        int len=arr3.length;
        divide(arr3,0,len-1);
        printarray(arr3);

    }
}
