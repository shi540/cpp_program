#include<iostream>
#include<climits>
using namespace std;
// int main()
// {
// //     int arr[6]={1,2,3};
//     for(int i=0;i<6;i++)
//     cout<<arr[i]<<" ";
//     return 0;
// }

 
// int arr[5]={1,2,3,4,5};
// cout<<sizeof(arr)/sizeof(arr[0])<<" ";
// return 0;
// }  

// int a;
// cout<<sizeof(a)<<endl;
// return 0;
// }


// cout<<sizeof(arr)<<endl;
// return 0;
// }
            //    Min value
// int arr[5]={2,3,1,7,8};
// int ans = INT_MAX;
// for(int i=0;i<5;i++)
// {
//     if(arr[i]<ans)
//     ans=arr[i];
// }
// cout<<ans<<endl;

// // Max value
// ans=INT_MIN;
// for(int i=0;i<5;i++)
// {
//     if(arr[i]>ans)
//     ans=arr[i];
// }
// cout<<ans<<endl;
// return 0;
// }
#include <iostream>
using namespace std;

int search(int arr[], int N, int X)
{
    for (int i = 0; i < N; i++) 
    {
        if (arr[i] == X)
            return i;
    }
    return -1;
}

int main() 
{
    int arr[] = {10, 20, 30, 40, 50};
    int N = 5;
    int X = 30;

    int result = search(arr, N, X);

    if (result != -1)
        cout << "Element found at index: " << result;
    else
        cout << "Element not found";

    return 0;
}
