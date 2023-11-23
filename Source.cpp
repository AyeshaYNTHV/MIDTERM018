#include<iostream>
using namespace std;
int main() {
	int loyaltyPoint = 0;
	const int converRate = 10, redempRate = 10;
	do (
		int price, quantity, purchase;
		cout << "Enter the price of the product: ";
		cin >> price;
		cout << "Enter the quantity: ";
		cin >> quantity;
		purchase = price * quantity;
		cout << "The total purchase amount is $" << purchase;
		if (purchase <= 0) {
			break;
		}
		loyaltyPoint += (purchase / converRate);
		cout << "\nyour loyalty points are " << loyaltyPoint;
		char redeemopt;
		cout << "\n do you want to redeem yor purchase? Enter y for yes and n for no.\n";
		cin >> redeemopt;
		if (redeemopt == 'y' || redeemopt == 'Y') {
			int point;
			cout << "how many points do you want to redeem?";
			cin >> point;
			double discount = point * (redempRate / 2);
			if (point <= loyaltyPoint) {
				purchase -= discount;
				loyaltyPoint -= point;
				cout << "Your redeemed points are " << point << " and you get a discount of $" << discount;
			}
			else {
				cout << "Your loyalty points are not enough for this redemption.";
			}
			cout << "\nYour final purchase amount is " << purchase;
		}
		char abc;
		cout << "do you want to continue?";
		cin >> abc;
	) while (abc == 'y' || abc == 'Y');
		cout << "\nThanks. Have a nice day";
	return 0;
}