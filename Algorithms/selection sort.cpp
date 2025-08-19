using namespace std;
int main()
{
    int arr[]= {3,5,2,4,1};
    int a=5;
    for(int i=0; i<a-1; i++)
    {
        int si= i;
        for(int j=i; j<a; j++)
        {
            if(arr[j]<arr[si])
            {
                si=j;
            }
        }
        swap(arr[i],arr[si]);
    }
    for(int i=0; i<a; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
