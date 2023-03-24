#include<iostream>
using namespace std;
class vehicle {
	string model;
	string year;
	int price;

public:
	virtual void vehicleDetail() = 0;
};
class car :public vehicle{

};
class bike :public vehicle {

};
class person {

};
class Seller:public person {
	string listofVehicle[];
public:
	void listvehicle(string description, int price) {

	}
};

class Buyer :public person {


};


class viewer :public person {

};

class comment {

};
