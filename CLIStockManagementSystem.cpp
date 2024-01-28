#include <iostream>
#include <winsqlite/winsqlite3.h>
#include <string>

void AddStockItem()
{
	std::string StockName = "";
	int StockAmount = {};
	double StockPrice = {};

	std::cout << "Enter the name of the Item: " << std::endl;
	std::cin.ignore();
	std::getline(std::cin, StockName);
	std::cout << "Enter the initial amount of the stock: " << std::endl;
	std::cin >> StockAmount;
	std::cout << "Enter the price of the Item: " << std::endl;
	std::cin >> StockPrice;


}

int main()
{

}