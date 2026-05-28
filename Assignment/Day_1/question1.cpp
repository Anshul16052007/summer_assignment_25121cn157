#include <iostream>
using namespace std;
int main()
{
    int n, sum=0;
    cout<<"enter the value";
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        sum = sum + i ;
    }
    cout<<"sum of first " << n <<" natural number = "<< sum;
    return 0 ;
}