//C++ program to add two distances using binary plus (+) operator overloading.
 #include<iostream>
using namespace std;
 
class Distance
{
    private:
        int m,cm;
         
    public:
        //function to read distance
        void readDistance(void)
        {
            cout << "Enter m: ";
            cin >>m;
            cout << "Enter cm: ";
            cin >>cm;
        }
        //function to display distance
        void display(void)
        {
            cout<<m<<"m "<<cm<<"cm."<<endl;
        }
        //add two Distance using + operator overloading
        Distance operator+(Distance &dist1)
        {
            Distance temp;     //to add two distances
            cout<<m;
	    temp.cm= cm + dist1.cm;
            temp.m  = m   + dist1.m + (temp.cm/100);
            temp.cm=temp.cm%100;
            return temp;
        }
};
int main()
{
    Distance D1,D2,D3;
     
    cout << "Enter first  distance:" << endl;
    D1.readDistance();
    cout << endl;
     
    cout << "Enter second distance:" << endl;
    D2.readDistance();
    cout << endl;
     
    //add two distances
    D3=D1+D2;
     
    cout << "Total Distance:" << endl;
    D3.display();
 
    cout << endl;
    return 0;
}
