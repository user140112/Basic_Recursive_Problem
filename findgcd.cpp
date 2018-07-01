#include<bits/stdc++.h>
using namespace std;

int findgcd(int a, int b)
{
    if(a==0 or b==0) return 0;
    if(a%b==0) return b;
    return findgcd(b,a%b);
}


int main()
{
    int a,b;
    if(a<b) swap(a,b);
    scanf("%d%d",&a,&b);
    printf("%d\n",findgcd(a,b));
    return 0;
}
