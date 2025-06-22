#include <iostream>

float calculateSalesTax(int price, int tax) {
    return (price * tax) / 100.0f;
}

int main() {

	std::cout << "SALES TAX CALCULATOR" << std::endl;

    while(true) {
        int tax = 19;
        float price = 0;
        std::cout << "PRICE IN EURO: ";
        std::cin >> price;

        if(price == 0) {
            std::cout << "Please enter a valid price next time. closing..." << std::endl;
			break;
		}
        else {
            float totalPrice = price + calculateSalesTax(price, tax);

            std::cout << "after tax: " << totalPrice << std::endl;
        }
    }
}
