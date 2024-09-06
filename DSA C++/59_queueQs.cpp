#include<bits/stdc++.h>
using namespace std;

//Question 1: reverse queue

/*
queue<int> rev(queue<int> q)
{
    stack<int> s;
    
    while(!q.empty()) {
        int element = q.front();
        q.pop();
        s.push(element);
    }

    while(!s.empty()) {
        int element = s.top();
        s.pop();
        q.push(element);
    }
    return q;
}
*/

/*
//QUESTION 2: 
// C++ implementation to find the first negative 
// integer in every window of size k
#include <bits/stdc++.h>

using namespace std;

// function to find the first negative 
// integer in every window of size k
deque<int> findFirstNegativeInteger(int arr[], int n, int k)
{
    // A Double Ended Queue, Di, that will store indexes of 
    // useful array elements for the current window of size k.
    // The useful elements are all negative integers.
    deque<int> Di;

    // Result queue to store the first negative integer of each window
    deque<int> result;

    // Process first k (or first window) elements of array 

    int i;
    for (i = 0; i < k; i++)
        // Add current element at the rear of Di
        // if it is a negative integer
        if (arr[i] < 0)
            Di.push_back(i);

    // Process rest of the elements, i.e., from arr[k] to arr[n-1]
    for ( ; i < n; i++)
    {
        // If Di is not empty then the element at the
        // front of the queue is the first negative integer
        // of the previous window
        if (!Di.empty())
            result.push_back(arr[Di.front()]);
        // Else the window does not have a negative integer
        else
            result.push_back(0);

        // Remove the elements which are out of this window
        while ( (!Di.empty()) && Di.front() < (i - k + 1))
            Di.pop_front(); // Remove from front of queue

        // Add current element at the rear of Di
        // if it is a negative integer
        if (arr[i] < 0)
            Di.push_back(i);
    }

    // Print the first negative integer of last window
    if (!Di.empty())
        result.push_back(arr[Di.front()]);
    else
        result.push_back(0);

    return result;
}

*/


//Q3: REVERSE FIRST K ELEMENTS OF A QUEUE

/*

void reverseFirstKElements(queue<int>& q, int k) {

    //chekc if queue  is empty or k<=0 or k> size of queue
    if(q.empty()||k>q.size()||k<=0){
        return;
    }

    //initialization of stack
    stack<int>stk;

    //step 1:  push first k elements of queue to a stack
    for(int i=0;i<k;i++){
        stk.push(q.front());
        q.pop();
    }

    //step 2: pop form stack n push into queue
    for(int i=0;i<stk.size();i++){
        int ele=stk.top();
        stk.pop();
        q.push(ele);
    }

    //step 3: move remaining elements at teh back of the queue to maintain order
    for(int i=0;i<q.size()-k;i++){
        int ele=q.front();
        q.pop();
        q.push(ele);
    }
}

*/


//Q4: Index of first non repeating char in a string

string first(string A){
    unordered_map<char,int>count;
    queue<int> q;
    string ans="";
    for(int i=0;i<A.length();i++){
        char ch=A[i];

        //increase count
        count[ch]++;

        //queue mein push
        q.push(ch);

        while(!q.empty()){
            if(count[q.front()]>1){
                //repeating char
                q.pop();
            }
            else{
                //non repeating char
                ans.push_back(q.front());
                break;
            }
        }
        if(!q.empty()){
            ans.push_back('#');
        }
    }
    return ans;
}


