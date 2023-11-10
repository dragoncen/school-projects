#include <iostream>

using namespace std;


class Quadrilateral{
private:
    int x;
    int y;
public:
    // the setter function
    void set_values(int c, int d){
   x=c;
   y=d;
    }

    // getter funcction == returns something
    int calc_Area(){
        int area;
        area  = x*y;
        cout<<"The area is:"<<area<<endl;
        return area;
    }
};


int main()
{
    Quadrilateral sqaure,rectangle;



    sqaure.set_values(10, 10);
    rectangle.set_values(5, 10);

    sqaure.calc_Area();
    rectangle.calc_Area();
    return 0;
}
