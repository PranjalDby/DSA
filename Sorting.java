class Sorting
{
    public static void divide(int arr[],int si,int ei)
    {
        if(si>=ei)
        {
            return;
        }
        int mid=si+(ei-si)/2;
        divide(arr, si, mid);
        divide(arr, mid+1, ei);
        conquer(arr,si,ei,mid);
    }
    public static void conquer(int arr[],int si,int ei,int mid)
    {
        int merge[]=new int[ei-si+1];
        int indx1=si;
        int indx2=mid+1;
        int x=0;
        while (indx1<=mid&&indx2<=ei) {
            if(arr[indx1]<=arr[indx2])
            {
                merge[x++]=arr[indx1++];
            }
            else{
                merge[x++]=arr[indx2++];
            }
        }
        while(indx1<=mid)
        {
            merge[x++]=arr[indx1++];
        }
        while(indx2<=ei)
        {
            merge[x++]=arr[indx2++];
        }
        for (int i = 0,j=si; i < merge.length; i++,j++) {
            arr[j]=merge[i];
        }


    }
    public static void printarray(int arr[])
    {
        for(int i=0;i<arr.length;i++)
        {
            System.out.println(arr[i]);
        }
    }
    public static void main(String args[])
    {
        //bubble sort;
        //complexity=O(n^2);
        int arr[]={7,8,3,1,2};
       /* for(int i=0;i<arr.length-1;i++)
        {
            for(int j=0;j<arr.length-i-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                } 
            }

        } */
        //Selectionsort
       /*  for(int i=0;i<arr.length-1;i++)
        {
            int small=i;
            for( int j=i+1;j<arr.length;j++)
            {
                if(arr[small]>arr[j])
                {
                   small=j;
                }
            }
            int temp;
            temp=arr[small];
            arr[small]=arr[i];
            arr[i]=temp;
        } */
        //insertion sort;
        /* for (int i = 1; i < arr.length; i++)
        {
            int numbers=arr[i];
           int j=i-1;
           while(j>=0&&numbers<arr[j])
           {
                arr[j+1]=arr[j];
                j--;
           }
           arr[j+1]=numbers;
        } */
        //mergesort
        //merge sort follows divide & conquer technique
        // [4,8,1,5,6],mid=(si+(si-ei)+1/2)
        int len=arr.length;
        divide(arr,0,len-1);
        printarray(arr);
    }
}