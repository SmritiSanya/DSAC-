#include<iostream>
using namespace std;
void containsDuplicates(int arr[], int size)
{
     for(int i=0;i<size;i++)
     {
          for(int j=i+1;j<size;j++)
          {
               if(arr[i]==arr[j])
               {
                    cout<<arr[i]<<" ";//return true;
               }
          }
     }
     //return false;
}


int main()
{
     int arr[6]={1,2,5,4,2,5};
     containsDuplicates(arr,6);

     //bool result=containsDuplicates(arr,6);
     /*if(result==0)
     {
          cout<<"true"<<endl;
     }
     else
     {
          cout<<"false"<<endl;
     }
     */
     

}