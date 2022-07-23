int search(int* arr, int n, int key) {
    // Write your code here.
   int lo=0,h=n-1;
   while(lo<=h)
   { int mid=lo+(h-lo)/2;
       if(arr[mid]==key)
           return mid;
       else if(arr[mid]>=arr[lo])
       {
           if(arr[lo]<=key && key<=arr[mid]) h=mid-1;
           else lo=mid+1;
               
       }
       else
       {
           if(arr[h]>=key && key>=arr[mid])
               lo=mid+1;
           else
               h=mid-1;
       }
   }
    return -1;
}