#include<iostream>

using namespace std;

int main()
{
         int n;
         cout<<"Enter the number ";
         cin>>n;
         int i =1;

         int fact =1;
         while(i <=n)
         {
                  fact *= i;
                  
                  i++;
         }
         cout<<fact<<endl;
}