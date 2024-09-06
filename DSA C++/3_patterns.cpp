#include<iostream>
using namespace std;

/****NO OF ROW= NO OF COL****/

/*
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

}
*/

/*111
  222
  333
*/
/*
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}
*/

/*
123
123
123
*/

/*
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<j;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/

/*
321
321
321
*/

/*
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<n-j+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
/*
123
456
789
*/

/*
int main()
{
    int n;
    cin>>n;
    int i=1;
    int count=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<count;
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/

/*
*
**
***
****
*****
*/

/*
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<'*';
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/

/*
1
22
333
444
*/


/*
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
}
*/

/*
1
2 3
4 5 6
7 8 9 10
*/


/*
int main()
{
    int n;
    cin>>n;
    int i=1;
    int count=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<count;
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/


/*
1 
2 3 
3 4 5 
4 5 6 7
*/


/*
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=i;
        while(j<i*2)
        {
            cout<<j;
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
}
*/

/*
1
2 1
3 2 1
4 3 2 1
*/

/*
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<i-j+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
}
*/

/*
1 
1 2
1 2 3
1 2 3 4
*/

/*
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<j;
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
}
*/

/*
12345
1234
123
12
1
*/

/*
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n-i+1)
        {
            cout<<j;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}

*/

/*
A A A 
B B B
C C C
*/


/*
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            char ch='A'+i-1;
            cout<<ch;
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
}
*/

/*
A B C 
A B C
A B C
*/


/*
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            char ch='A'+j-1;
            cout<<ch;
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
}
*/


/*
A B C
D E F
G H I
*/


/*
int main()
{
    int n;
    cin>>n;
    int i=1;
    char start='A';
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<start;
            start=start+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
}
*/

/*
A B C
B C D
C D E
*/


/*
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            char ch='A'+i+j-2;
            cout<<ch;
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
}
*/

/*
A
B B
C C C
*/

/*
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            char ch='A'+i-1;
            cout<<ch;
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
}
*/

/*
A
AB
ABC
ABCD
*/


/*
int main()
{
int n;
cin>>n;
int i=1;
while(i<=n)
{
    int j=1;
    while(j<=i)
    {
        char ch='A'+j-1;
        cout<<ch;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}

}
*/

/*
ABCDE
ABCD
ABC
AB
A
*/


/*
int main()
{
    int n;
    cin>>n;
    int i=1;
    
    while(i<=n)
    {
        
        int j=1;
        while(j<=n-i+1)
        {
            char ch='A'+j-1;
            cout<<ch;
            j=j+1;
        }
    
    cout<<endl;
    i=i+1;
    }
}
*/

/*
A
B C 
D E F 
*/

/*
int main()
{
    int n;
    cin>>n;
    int i=1;
    char ch='A';
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<ch;
            ch=ch+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
}
*/

/*
A
B C 
C D E
D E F G 
*/

/*
int main()
{
    int n;
    cin>>n;
    int i=1; 
    
    while(i<=n)
    {   
        char ch='A'+i-1;
        int j=1;
        while(j<=i)
        {
            cout<<ch;
            ch=ch+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
}
*/

/*
D
C D
B C D
A B C D
*/

/*
int main()
{
    int n;
    cin>>n;
    int i=1; 
    
    while(i<=n)
    {   
        char ch='A'+n-i;
        int j=1;
        while(j<=i)
        {
            cout<<ch;
            ch=ch+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
}

*/

/*
      *
    * *
  * * *
* * * *

*/


/*
int main()
{
    int n;
    cin>>n;
    int i=1; 
    
    while(i<=n)
    {   
        int space=1;
        while(space<=n-i)
        {
            cout<<" ";
            space=space+1;
        }
        int j=1;
        while(j<=i)
        {
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
}
*/

/*

****
***
**
*

*/

/*
int main()
{
    int n;
    cin>>n;
    int i=1; 
    
    while(i<=n)
    {   
        
        int j=1;
        while(j<=n-i+1)
        {
            cout<<"* ";
            j=j+1;
            
        }
        cout<<endl;
        i=i+1;

    }
    
}
*/

/*

* * * * 
  * * *
    * *   
      *  
      
*/

/*
int main()
{
    int n;
    cin>>n;
    int i=1; 
    
    while(i<=n)
    {   
        int space=1;
        while(space<=i-1)
        {
            cout<<" ";
            space=space+1;
        }
        int j=1;
        while(j<=n-i+1)
        {
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
}
*/

/*

1 1 1 1
  2 2 2
    3 3
      4   

*/

/*
int main()
{
    int n;
    cin>>n;
    int i=1; 
    
    while(i<=n)
    {   
        int space=1;
        while(space<=i-1)
        {
            cout<<" ";
            space=space+1;
        }
        int j=1;
        while(j<=n-i+1)
        {
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
}
*/


/*
   1
  22
 333
4444 
*/


/*
int main()
{
    int n;
    cin>>n;
    int i=1; 
    
    while(i<=n)
    {   
        int space=1;
        while(space<=n-i)
        {
            cout<<" ";
            space=space+1;
        }
        int j=1;
        while(j<=i)
        {
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
}

*/

/*
      1
    2 3
  4 5 6
7 8 9 10     
*/


/*
int main()
{
    int n;
    cin>>n;
    int i=1; 
    int count=1;
    while(i<=n)
    {   
        int space=1;
        while(space<=n-i)
        {
            cout<<" ";
            space=space+1;
        }
        int j=1;
        while(j<=i)
        {
            cout<<count;
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
}
/
*/


/*
   1   
  121  
 12321 
1234321
*/


/*
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int space=n-i;

        while(space)
        {
            cout<<" "; //two spaces
            space=space-1;
        }
        int j=1;
        while(j<=i)
        {
            cout<<j;
            j=j+1;
        }
        int start=i-1;
        while(start)
        {
            cout<<start;
            start=start-1;
        }
        
        cout<<endl;
        i=i+1;
    }
}
*/