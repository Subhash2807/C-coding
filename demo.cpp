#include<bits/stdc++.h>
using namespace std;
void route(){
    cout<<1<<" "<<1<<endl;
    cout<<8<<" "<<8<<endl;
    cout<<7<<" "<<7<<endl;
    cout<<8<<" "<<6<<endl;
    cout<<3<<" "<<1<<endl;
    cout<<4<<" "<<2<<endl;
    cout<<5<<" "<<1<<endl;
    cout<<8<<" "<<4<<endl;
    cout<<7<<" "<<3<<endl;
    cout<<8<<" "<<2<<endl;
    cout<<7<<" "<<1<<endl;
    cout<<1<<" "<<7<<endl;
    cout<<2<<" "<<8<<endl;
    cout<<3<<" "<<7<<endl;
    cout<<4<<" "<<8<<endl;
    cout<<1<<" "<<5<<endl;
    cout<<2<<" "<<4<<endl;
    cout<<1<<" "<<3<<endl;
    cout<<6<<" "<<8<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r,c;
        cin>>r>>c;
        if(r==c && r==1)
        {
            cout<<19<<endl;
            route();
        }
        else if(r==c)
        {
            cout<<20<<endl;
            cout<<r<<" "<<c<<endl;
            route();
        }
        else
        {
            cout<<21<<endl;
            cout<<r<<" "<<c<<endl;
            cout<<(r+c)/2<<" "<<(r+c)/2<<endl;
            route();
        }
    }
}