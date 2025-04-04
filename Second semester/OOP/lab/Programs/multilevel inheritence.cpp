#include <iostream>
using namespace std;

class Marks {
	protected:
		float p, c, m;
	public:
		void get_data() {
			cout << "Enter marks of physics, chemistry, and mathematics: ";
			cin >> p >> c >> m;
		}
};

class Total : protected Marks {
	protected:
		float total;
	public:
		void calculate_total() {
			get_data();
			total = p + c + m;
		}
};

class Percent : private Total {
	private:
		float percentage;
	public:
		void display() {
			calculate_total();
			percentage = total / 300 * 100;
			
			cout << "Percentage = " << percentage << "%" << endl;
		}
};

int main() {
	Percent p;
	p.display();
	
	return 0;
}

