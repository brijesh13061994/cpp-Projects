#include<iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

void print_array(int arr[],int n)
{
    int i;
    for( i=0;i<n;i++)
    {
    cout<<arr[i]<<" ";
    }
}
void sort(int *arr,int n)
{
    auto start = high_resolution_clock::now();
    int i,j;
    cout<<"Inside sorting\n";
    cout<<"\n==>"<<n<<"\n";
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                arr[i]=arr[i]+arr[j];
                arr[j]=arr[i]-arr[j];
                arr[i]=arr[i]-arr[j];

            }
        }

    }
    auto stop = high_resolution_clock::now();
    //print_array(arr,n);
    auto duration = duration_cast<microseconds>(stop - start);
  
// To get the value of duration use the count()
// member function on the duration object
cout<<endl<<"Time Taken (MicroSconds)===> "<<duration.count() << endl;

}

int main()
{
    int arr[]={2,3,4,5,3,7,55,44,33,66,5510,10,23,32,23,54,66,776,765,45454,33,55,423,2332,32,3232,3231,223,332,445,534};
    
    int n = sizeof(arr)/sizeof(int);
    
    cout<<endl<<endl<<endl<<endl<<"Welcome to Sorting "<<n<<endl;
    print_array(arr,n);
    sort(arr,n);
    print_array(arr,n);
    return 0;
}