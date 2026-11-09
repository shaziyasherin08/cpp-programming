#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;


int main() {
    
//   int n;
//   cout<<"Elements Count ? = ";
//   cin>>n;

//   int arr[n];

//   int xl=0;

//   for(int i=0;i<n;i++)
//   {
//     cin>>arr[i];
//     xl=xl+arr[i];

//   }

//   int bit=xl&(-xl);

//   int a=0;
//   int b=0;

//   for(int i=0;i<n;i++)
//   {
//     if(arr[i]&bit)
//     {
//         a=a^arr[i];
//     }
//     else
//     {
//         b=b^arr[i];
//     }
//   }

//   if(a>b)
//   {
//      cout<<b<<" "<<a;
//   }
//   else
//   {
//     cout<<a<<" "<<b;
//   }
//=================================================================================================
   

//    int n;
//    cout<<"Enter the Elements count = ";
//    cin>>n;

//    int arr[n];

//    for(int i=0;i<n;i++)
//    {
//     cin>>arr[i];
//    }

//    int csum=0;
//    int maxsum=arr[0];

//    for(int i=0;i<n;i++)
//    {

//     csum=csum+arr[i];

//     if(maxsum<csum)

//     {
//         maxsum=csum;
//     }

//     if(csum<0)
//     {
//         csum=0;
//     }
//    }  

//    cout<<"The Maximum Sum = " <<maxsum<<endl;

//===============================================================================================

//   int n;
//   cin>>n;
//   int arr[n];

//   for(int i=0;i<n;i++)
//   {
//     cin>>arr[i];
//   }

//   int *left=&arr[0];
//   int *right=&arr[n-1];

//   while(left<right)
//   {
//     int temp=*left;
//     *left=*right;
//     *right=temp;

//     left++;
//     right--;
//   }

//   for(int i=0;i<n;i++)
//   {
//   cout<<arr[i]<<" ";
//   }

//======================================================================================================

  
//   int n;
//    cout<<"Enter the Elements count = ";
//   cin>>n;

//  int arr[n];

// for(int i=0;i<n;i++)
// {
//        cin>>arr[i];    
       
// }



// for(int i=0;i<n;i++)
// {
//    bool found=true;
    
//     for(int j=i+1;j<n;j++)
//     {
//         if(arr[j]>arr[i])
//         {
//             found=false;
//             break;
//         }
//     }

//     if(found)
// {
//     cout<<arr[i]<<" ";
// }
// }


//==========================================================================================

int arr[3][3]={{4,5,6},{7,8,9},{10,11,12}};
int top=0,bottom=2,left=0,right=2;
while(top<=bottom&&left<=right)
{
    for(int j=left;j<=right;j++)
        cout<<arr[top][j]<<" ";
    top++;
    for(int i=top;i<=bottom;i++)
        cout<<arr[i][right]<<" ";
    right--;
    if(top<=bottom)
    {
        for(int j=right;j>=left;j--)
            cout<<arr[bottom][j]<<" ";
        bottom--;
    }
    if(left<=right)
    {
        for(int i=bottom;i>=top;i--)
            cout<<arr[i][left]<<" ";
        left++;
    }
}
    return 0;
    
    
}