#include <iostream>

using namespace std;


int findlargestnumber(int arr[], int arr_size){
    int maximun;
    for(int i =0;i<arr_size; i++){
        if(maximun<arr[i]){
            maximun = arr[i];
        }
    }
    cout<<"Largest:"<<maximun<<endl;
}
/* int findminmun(int *arr, int len){
int largest = 0, least = *arr;
if(*arr<largest){largest = *arr}
else if(*arr < least){least = *arr}
arr++}
*/

int findsmallestnumber(int arr[], int arr_size){
    int minNum;
    for(int i=0; i<arr_size; i++){
        if(minNum>arr[i]){
            minNum = arr[i];
        }
    }
    return minNum;

}


int pointerfunc(int arr_size, int arr[], int* maxnum, int* minnum){
 for(int i=0; i<0;i++){
    if(*maxnum<arr[i]){
        *maxnum = arr[i];
    }
    else if(*minnum>arr[i]){
        *minnum = arr[i];
    }
 }
    return *maxnum;
    return *minnum;
}
int main()
{
    int my_arr[6] = {5,4,2,1,6,9};
    /*findlargestnumber(my_arr,6);
    findsmallestnumber(my_arr,6);*/
    int m = pointerfunc(6, my_arr);
   //int  y = pointerfunc(6,my_arr,findlargestnumber(my_arr,6));
    cout<<m;
    return 0;
}
