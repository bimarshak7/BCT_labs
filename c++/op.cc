#include <iostream>
using namespace std;

class Complex
{
private:
	int real, imag;
public:
	Complex(int r = 0, int i =0)
	{ real = r; imag = i; }
	friend istream & operator >> (istream &in, Complex &c);
	friend ostream & operator << (ostream &out,const Complex &c);
};

istream & operator >> (istream &in, Complex &c)
{
	cout << "Enter Real Part ";
	in >> c.real;
	cout << "Enter Imaginary Part ";
	in >> c.imag;
	return in;
}
ostream & operator << (ostream &out, const Complex &c)
{
	out << c.real;
	out << "+i" << c.imag << endl;
	return out;
}

int main()
{
Complex c1;
cin >> c1;
cout << "The complex object is ";
cout << c1;
return 0;
}

#include <iostream>
using namespace std;
class Dist{
	int ft,inch;
public:
	Dist(){ft=0;inch=0;}
	friend istream & operator >> (istream &in, Dist &d);
	friend ostream & operator << (ostream &in, Dist &d);
};

istream & operator >> (istream &in, Dist $d){
	in>>d.ft;
	in>>d.inch;
	return in;
}

ostream & operator << (ostream &out, Dist $d){
	out<<d.ft;
	out<<d.inch;
	return out;
}

int main(){
	Dist d;
}