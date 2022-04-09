#include <iostream>
using namespace std;



//Class Creation
class Money {
	
	private:
		double dollars;
		double cents;
	
	public:
	void setDollars(double x);
	void setCents(double y);

	double returnAmount();
	

	Money(){
		dollars = 0;
		cents = 0;
	}
};

void Money::setDollars(double x){
	dollars = x;
}

void Money::setCents(double y){
	cents = y;
}

double Money::returnAmount(){
double dls = dollars, cnts = cents, m;
cnts = cnts/100;
m = dls + cnts;
return m;

}

int main(){
Money ob1, ob2, ob3;

ob1.setDollars(100);
ob1.setCents(43);

ob2.setDollars(200);
ob2.setCents(93);

ob3.setDollars(1000);
ob3.setCents(25);




double returnAmt1 = ob1.returnAmount();
double returnAmt2 = ob2.returnAmount();
double returnAmt3 = ob3.returnAmount();
cout << "Amount $ " << "" << returnAmt1 << endl;
cout << "Amount $ " << "" << returnAmt2 << endl;
cout << "Amount $ " << "" << returnAmt3 << endl;
}



