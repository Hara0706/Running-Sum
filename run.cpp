#include <iostream>

using namespace std;


int main() {


   int n;

   cin>>n;

   int a[n];

   int i,j;

   for(i=0; i<n; i++)

   {

       cin>>a[i];

   }


   for(i=0; i<n; i++)

   {

       int sum=0;

       for(j=0; j<=i; j++)

       {

           sum+=a[j];


       }

       cout<<sum<<" ";

   }

   return 0;

}

