#include <iostream>
#include <string>
using namespace std;

class Worker {
private:
	string wName;
	int wCode;
	float wIncome;
	static int totalWorkers;           // static variable for total workers
	static const string companyTitle;  // fixed company name

public:
	// constructor
	Worker(string n, int c, float inc) : wName(n), wCode(c), wIncome(inc) {
		totalWorkers++;                // count new worker
	}

	// copy constructor
	Worker(const Worker &obj) {
		wName = obj.wName;
		wCode = obj.wCode;
		wIncome = obj.wIncome;
		totalWorkers++;                // count copy also
	}

	// display worker info
	void showDetails() const {
		cout << "Company: " << companyTitle << endl;
		cout << "Worker Name: " << wName << endl;
		cout << "Worker Code: " << wCode << endl;
		cout << "Income: " << wIncome << endl << endl;
	}

	// static function
	static void totalCount() {
		cout << "Total Workers: " << totalWorkers << endl;
	}

	// using this pointer
	void updateIncome(float newIncome) {
		this->wIncome = newIncome;
	}

	// return an object
	Worker makeClone() {
		return *this; // deep copy done by copy constructor
	}
};

// static members
int Worker::totalWorkers = 0;
const string Worker::companyTitle = "TechSolutions";

// passing object by reference
void printWorker(const Worker &obj) {
	cout << "Displaying Worker Info:" << endl;
	obj.showDetails();
}

int main() {
	// dynamic object
	Worker *w1 = new Worker("Hassan", 201, 48000);
	w1->showDetails();

	Worker w2("Ayesha", 202, 57000);
	printWorker(w2);

	// returning object
	Worker w3 = w2.makeClone();
	w3.showDetails();

	// shallow vs deep copy
	Worker w4 = *w1;

	cout << "Before Income Change:\n";
	w1->showDetails();
	w4.showDetails();

	w1->updateIncome(85000);

	cout << "After Income Change:\n";
	w1->showDetails();
	w4.showDetails();

	Worker::totalCount();   // show total workers

	delete w1;
	system("pause");
	return 0;
}
