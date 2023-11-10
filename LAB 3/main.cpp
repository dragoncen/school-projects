#include <iostream>

using namespace std;

int main()
{
    int findsum(int);
    int num;
    cout<<"Enter a number>>";
    cin>>num;
    findsum(num);
    return 0;
}

int findsum(int n){
    int total = 0;
    for(int i =0; i<n+1; i++){
        total +=i;
    }
    cout<<"The result is "<<total<<endl;
}
