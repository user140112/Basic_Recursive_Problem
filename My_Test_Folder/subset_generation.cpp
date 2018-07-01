#include<bits/stdc++.h>
using namespace std;

char ar[3]={'A','B','C'};
deque<char> q;
deque<char> s;

void Subset(int idx){

if( idx == 3 ){
    s=q;
    if(s.empty()){
        printf("NULL\n");
        return;
    }

    while(!s.empty()){
        printf("%c",s.front());
        s.pop_front();
    }
    printf("\n");
    return;
}

Subset( idx+1 );
q.push_back(ar[idx]);
Subset( idx+1 );
q.pop_back();

}

int main()
{
    Subset(0);
    return 0;
}
