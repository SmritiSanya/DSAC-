#include <iostream>
#include <cmath>

using namespace std;

// Find second smallest number

/*
int secondsmallest(int arr[],int size)
{
    int small=INT_MAX;
    int second_small=INT_MAX;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<small)
        {
            second_small=small;
            small=arr[i];
        }
        else if(arr[i]<second_small && arr[i]!=small)
        {
            second_small=arr[i];
        }
    }
    return second_small;
}


int main()
{
    int arr[6]={10,11,5,12,9,17};
    int result=secondsmallest(arr,6);
    cout<<result;

}

*/

// SORTED ARRAY IN NON DECREASING ORDER

/*
bool isSorted(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    if (arr[i] < arr[i - 1])
      return false;
  }

  return true;
}

int main() {

  int arr[] = {1, 2, 3, 3, 5}, n = 5;

  printf("%s", isSorted(arr, n) ? "True" : "False");

}

*/

// REMOVE DUPLICATES

/*
int removeDuplicates(int arr[], int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
}
int main()
{
    int arr[5] = {1, 2, 3, 3, 4};
    int k=removeDuplicates(arr, 5);
    for (int i = 0; i < k; i++) {
    cout << arr[i] << " ";
  }
}

*/

// MISSING NUMBERS

/*
#include <bits/stdc++.h>

using namespace std;

int missingNumber(int arr[], int N)
{
    int ans1 = 0;
    int ans2 = 0;
    
    // XOR all numbers from 1 to N
    for(int i = 1; i <= N; i++) // Include N in the range
    {
        ans1 = ans1 ^ i;
    }
    
    // XOR all elements of the given array
    for(int j = 0; j < N-1; j++)
    {
        ans2 = ans2 ^ arr[j];
    }
    
    // The missing number will be the result of XOR of ans1 and ans2
    return ans1 ^ ans2;
}

int main() {
    int arr[] = {1, 2, 4, 5, 6};
    int N = 6;
    int missing = missingNumber(arr, N);
    cout << "The missing number is " << missing << endl;
    return 0;
}
*/


//MAX NUMBER OF CONSECUTIVE ONES
int consecutive(int arr[], int size)
{
    int count=0;
    int max_count=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==1)
        {
            count++;
        }
        else{
            count=0;
        }
        max_count=max(max_count,count);
    }
    return max_count;
    
}


int main()
{
    int arr[6]={1,1,0,1,1,1};
    int result=consecutive(arr,6);
    cout<<result;
}


