int rotate(int arr[],int s,int k)
{
   int j=0;
    while(j<k)
    {
       int temp=arr[0];
       int i=0;
        for(;i<s-1;i++)
        {
            arr[i]=arr[i+1];
        }
        arr[i]=temp;
        j++;

    }
    for(int i=0;i<s;i++)
    {
        cout<< arr[i]<<" ";

    }
    
}