#include <iostream>
using namespace std;
class car 
{
    char color[10];
    public :
    int speed;

    public :
    void getdata(int distance , int fuel) 
    {
        cout<<"the car has covered "<<distance<<"km and has consumed"<<fuel<<"L fule \n";

    }
    void carspeed()
    {
        cout<<"The car speed is "<<speed<<"\n";

    }
};
int main () {
    car swift;
    swift.getdata(150,8);
    swift.speed=50;
    swift.carspeed();

return 0;

}