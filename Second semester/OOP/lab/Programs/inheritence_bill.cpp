#include<iostream>
using namespace std;

class Item {
	protected:
		int item_no;
		string name;
		float price;
	public:
		void get_item_info() {
			cout<<"Enter item number, name and price: ";
			cin>>item_no>>name>>price;
		}
};

class DiscountedPrice: public Item {
	protected:
		float discount_percent;
	public:
		void get_data() {
			get_item_info();
			cout<<"Enter discount percent: ";
			cin>>discount_percent;
		}
		
		void display_bill() {
			float discount_price = (price * discount_percent) / 100;
			cout<<"Item number: "<<item_no<<endl;
			cout<<"Item name: "<<name<<endl;
			cout<<"Item price: Rs."<<price<<endl;
			cout<<"Discount: Rs."<<discount_price<<endl;
			cout<<"Final price: Rs."<<price - discount_price<<endl<<endl;
		}
};

int main() {
	int n;
	cout<<"Enter number of items: ";
	cin>>n;
	
	DiscountedPrice I[n];
	
	for(int i=0; i<n; i++) {
		I[i].get_data();
	}
	
	cout<<"Bill: "<<endl;
	for(int i=0; i<n; i++) {
		I[i].display_bill();
	}
	
	return 0;
}
