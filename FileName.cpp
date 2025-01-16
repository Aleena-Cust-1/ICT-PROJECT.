#include <iostream>
#include <iomanip>

using namespace std;
double calculateTotalPrice(double price, int quantity) {
    double totalPrice = price * quantity;
    double discount = 0.0;
    if (quantity >= 10 && quantity < 20) {
        discount = 0.1;
    }
    else if (quantity >= 20 && quantity < 50) {
        discount = 0.2;
    }
    else if (quantity >= 50) {
        discount = 0.3;
    }

    totalPrice -= totalPrice * discount; return totalPrice;
}

int main() {
    double price;
    int quantity;
    cout << "Enter the product price: $";
    cin >> price;
    cout << "Enter the quantity: ";
    cin >> quantity;
    double totalPrice = calculateTotalPrice(price, quantity);
    cout << fixed << setprecision(2);
    cout << "Total price after discount: $" << totalPrice << endl;

    return 0;
}