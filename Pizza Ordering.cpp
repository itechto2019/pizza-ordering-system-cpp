#include<iostream>
using namespace std;

void dineIn() {
	int size;
	int withDrinks;
	int quantity;
	
	int drinkChose;
	string drink;
	double priceDrink;
	
	double price;
	double amount;
	
	cout << "Dine-in your orders\n";
	cout << "[0]: P120.00 Small \n[1]: P150.00 Medium \n[2]: P200.00 Large \n: ";
	cin >> size;
	
	cout << "Quantity: ";
	cin >> quantity;
	
	cout << "Do you want additional drink?" <<endl;
	cout << "[0] Yes \n[1] No \n: ";
	cin >> withDrinks;
	
	if(withDrinks == 0) {
		cout << "[0] P39.00 Coffee \n[1] P49.00 Softdrinks \n[2] P19.00 Water" << endl;
		cout << "Choose drink: ";
		cin >> drinkChose;
		do {
			if(drinkChose == 0) {
				drink = "Coffee";
				priceDrink = 39.00;
			}else if(drinkChose == 1) {
				drink = "Softdrinks";
				priceDrink = 49.00;
			}else if(drinkChose == 2){
				drink = "Water";
				priceDrink = 19.00;
			}
		}while(drinkChose >2);
	}
	cout << "| Receipt" << endl;
	cout << "--------------------" << endl;
	switch(size) {
		case 0:
			price = double(120.00);
			amount = price * quantity;
			if(withDrinks == 0) {
				cout << "| Pizza size: Small" << endl;
				cout << "| Amount: P" << price << endl;
				cout << "| Quantity: " << quantity << endl;
				
				cout << "| Drink: " << drink << endl;
				cout << "| Amount: P" << priceDrink << endl;
				cout << "| --------------------" << endl;
				cout << "Total amount: P" << amount + priceDrink;
			}else {
				cout << "| Pizza size: Small" << endl;
				cout << "| Amount: P" << price << endl;
				cout << "| Quantity: " << quantity << endl;
				cout << "| --------------------" << endl;
				cout << "Total amount: P" << amount;
			}
			break;
		case 1:
			price = double(150.00);
			amount = price * quantity;
			if(withDrinks == 0) {
				cout << "| Pizza size: Small" << endl;
				cout << "| Amount: P" << price << endl;
				cout << "| Quantity: " << quantity << endl;
				
				cout << "| Drink: " << drink << endl;
				cout << "| Amount: P" << priceDrink << endl;
				cout << "| --------------------" << endl;
				cout << "Total amount: P" << amount + priceDrink;
			}else {
				cout << "| Pizza size: Small" << endl;
				cout << "| Amount: P" << price << endl;
				cout << "| Quantity: " << quantity << endl;
				cout << "--------------------" << endl;
				cout << "Total amount: P" << amount;
			}
			break;
		case 2:
			price = double(200.00);
			amount = price * quantity;
			if(withDrinks == 0) {
				cout << "| Pizza size: Small" << endl;
				cout << "| Amount: P" << price << endl;
				cout << "| Quantity: " << quantity << endl;
				
				cout << "| Drink: " << drink << endl;
				cout << "| Amount: P" << priceDrink << endl;
				cout << "| --------------------" << endl;
				cout << "Total amount: P" << amount + priceDrink;
			}else {
				cout << "| Pizza size: Small" << endl;
				cout << "| Amount: P" << price << endl;
				cout << "| Quantity: " << quantity << endl;
				cout << "| --------------------" << endl;
				cout << "Total amount: P" << amount;
			}
			break;
		default:
			cout << "";
	}	

}
void takeOut() {
	int size;
	int withDrinks;
	int quantity;
	
	int drinkChose;
	string drink;
	double priceDrink;
	
	double price;
	double amount;
	double charge;
	
	cout << "Take-out your orders\n";
	cout << "[0]: P120.00 Small \n[1]: P150.00 Medium \n[2]: P200.00 Large \n: ";
	cin >> size;
	
	cout << "Quantity: ";
	cin >> quantity;
	
	cout << "Do you want additional drink?" <<endl;
	cout << "[0] Yes \n[1] No \n: ";
	cin >> withDrinks;
	
	if(withDrinks == 0) {
		cout << "[0] P39.00 Coffee \n[1] P49.00 Softdrinks \n[2] P19.00 Water" << endl;
		cout << "Choose drink: ";
		cin >> drinkChose;
		do {
			if(drinkChose == 0) {
				drink = "Coffee";
				priceDrink = 39.00;
			}else if(drinkChose == 1) {
				drink = "Softdrinks";
				priceDrink = 49.00;
			}else if(drinkChose == 2){
				drink = "Water";
				priceDrink = 19.00;
			}
		}while(drinkChose >2);
	}
	cout << "| Receipt" << endl;
	cout << "--------------------" << endl;
	switch(size) {
		case 0:
			price = double(120.00);
			amount = price * quantity;
			charge = 19.00;
			if(withDrinks == 0) {
				cout << "| Pizza size: Small" << endl;
				cout << "| Amount: P" << price << endl;
				cout << "| Quantity: " << quantity << endl;
				
				cout << "| Drink: " << drink << endl;
				cout << "| Amount: P" << priceDrink << endl;
				cout << "| Charge: " << charge << endl;
				cout << "| --------------------" << endl;
				double total = amount + priceDrink + charge;
				cout << "Total amount: P" << total;
			}else {
				cout << "| Pizza size: Small" << endl;
				cout << "| Amount: P" << price << endl;
				cout << "| Quantity: " << quantity << endl;
				cout << "| Charge: " << charge << endl;
				cout << "| --------------------" << endl;
				double total = amount + charge;
				cout << "Total amount: P" << total;
			}
			break;
		case 1:
			price = double(150.00);
			amount = price * quantity;
			charge = 19.00;
			if(withDrinks == 0) {
				cout << "| Pizza size: Small" << endl;
				cout << "| Amount: P" << price << endl;
				cout << "| Quantity: " << quantity << endl;
				
				cout << "| Drink: " << drink << endl;
				cout << "| Amount: P" << priceDrink << endl;
				cout << "| Charge: " << charge << endl;
				cout << "| --------------------" << endl;
				double total = amount + priceDrink + charge;
				cout << "Total amount: P" << total;
			}else {
				cout << "| Pizza size: Small" << endl;
				cout << "| Amount: P" << price << endl;
				cout << "| Quantity: " << quantity << endl;
				cout << "| Charge: " << charge << endl;
				cout << "--------------------" << endl;
				double total = amount + charge;
				cout << "Total amount: P" << total;
			}
			break;
		case 2:
			price = double(200.00);
			amount = price * quantity;
			charge = 19.00;
			if(withDrinks == 0) {
				cout << "| Pizza size: Small" << endl;
				cout << "| Amount: P" << price << endl;
				cout << "| Quantity: " << quantity << endl;
				
				cout << "| Drink: " << drink << endl;
				cout << "| Amount: P" << priceDrink << endl;
				cout << "| Charge: " << charge << endl;
				cout << "| --------------------" << endl;
				double total = amount + priceDrink + charge;
				cout << "Total amount: P" << total;
			}else {
				cout << "| Pizza size: Small" << endl;
				cout << "| Amount: P" << price << endl;
				cout << "| Quantity: " << quantity << endl;
				cout << "| Charge: " << charge << endl;
				cout << "| --------------------" << endl;
				double total = amount + charge;
				cout << "Total amount: P" << total;
			}
			break;
		default:
			cout << "";
	}	
}

int main () {
	int method;
	cout << "Dine-in o Take-out \n[0]: Dine-in \n[1]: Take-out\n: ";
	cin >> method;
	switch(method) {
		case 0 : 
			cout << "You chose Dine-in" << endl;
			dineIn();
			break;
		case 1 :
			cout << "You chose Take-out" << endl;
			takeOut();
			break;
		default :
			cout << "Invalid input!";
			break;
	}
	return 0;
}
