#include <iostream>
using namespace std;

// For integer quantity
double reorderCost(int qty, double unitPrice)
{
    return qty * unitPrice;
}

// For double quantity
double reorderCost(double qty, double unitPrice)
{
    return qty * unitPrice;
}

// For integer quantity with tax
double reorderCost(int qty, double unitPrice, double taxRate)
{
    double cost = qty * unitPrice;
    double tax = cost * taxRate / 100;

    return cost + tax;
}

// Default argument
double applyDiscount(double price, double discountPercent = 10.0)
{
    double discount = price * discountPercent / 100;
    return price - discount;
}

int main()
{
    double result;

    result = reorderCost(10, 50.0);
    cout << "Reorder cost (int): " << result << endl;

    result = reorderCost(5.5, 50.0);
    cout << "Reorder cost (double): " << result << endl;

    result = reorderCost(10, 50.0, 18.0);
    cout << "Reorder cost with tax: " << result << endl;

    result = applyDiscount(1000);
    cout << "Discount with default 10%: " << result << endl;

    result = applyDiscount(1000, 20);
    cout << "Discount with 20%: " << result << endl;

    return 0;
}

