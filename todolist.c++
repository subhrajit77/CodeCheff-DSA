#include <iostream>
using namespace std;
 
int main()
{
    int n,t,count=0,num;
    int arr[50];
    cout<<"enter the number of test cases = "<<endl;
    cin>>n;     //n= number of test cases
    for (int i = 0; i < n; i++)
    {   cout<<"Enter the number of problems in list = "<<endl;
       cin>>num;            //num= number of problems in todo list
       for (int i = 0; i < num; i++)
       {    cout<<"enter difficulty rating of problem no "<<i+1<<"= "<<endl;
            cin>>arr[i];    //arr[] is used to store the problem difficulty ratings
       }
         if(arr[i]>1000)
         {
            count++;
         }
         cout<<"no of problems with difficulty rating higher than 1K = "<<count<<endl;              
    }

     


return 0;
}