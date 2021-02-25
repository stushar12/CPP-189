#include <bits/stdc++.h>
using namespace std;

int inSequence(int A, int B, int C)
   {
       if (C==0) 
       return A==B;

    int res = (B-A)/C ;
    if((B-A)%C==0 and res>=0)
    return 1 ;
    else
    return 0;
    }
int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    cout<<inSequence(a,b,c);
}       