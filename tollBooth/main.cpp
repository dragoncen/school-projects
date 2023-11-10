#include <iostream>

using namespace std;


class tollBooth{
private:
    int total_nc;
    double total_amount;
public:
    tollBooth(){
        total_amount = 0.0;
        total_nc =0;
    }
    void payingCar(){
        total_amount += 0.5;
        total_nc ++;
    }
    void nopayCar(){
        total_nc++;
    }

    void display(){
        cout<<"The total amount is:"<<total_amount<<endl;
        cout<<"The total number of cars are:"<<total_nc<<endl;
    }
};

int main()
{
   tollBooth car1;

   char opt;
   char choice;
   cout<<"Are you\n1.Paying\n2.Not paying\n3Display info"<<endl;
   cin>>choice;

   do{
   switch(choice){
       case '1': car1.payingCar();
       break;

       case '2': car1.nopayCar();
       break;

       case '3':cout<<"The info to be displayed is below:\n"; car1.display();
       break;


   }
   cout<<"Do you want to continue with the entries?(y/n)"<<endl;
   cin>>opt;

   }while(opt = 'y');



    return 0;
}
