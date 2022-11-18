#include <iostream>

class CoffeeMachine 
{
public:
	// Ցանկալի է զանգվածների չափը պահել որպես առանձին փոփոխական և այն նույնպես տալ կառուցիչին
	// Զանգվածներն էլ պահել որպես pointer, որպեսզի կարողանանք ստեղծել ու փոխանցել տարբեր չափերի զանգվածներ
	// Փոփոխականների անունները պետք է սկսեն m_, հետո տիպւ նկարագրող մասս ու նոր փոփոխականի անունը։ Օր․՝ m_arrProduct։
	std::string product[5];
	int price[5];

	// Պետք էր նաև ունենալ այլ կառուցիչ, որը կընդուներ product[]֊ը, price[]֊ը, և զանգվածի չափերը։
	// CoffeeMachine( std::string* product
	CoffeeMachine()
		: product{"Coffee", "Espresso", "Cappuccino", "Tea", "Milk"}
		, price{100, 200, 250, 250, 100}
	{}
	void printPriceList() {
		 for(int i=0; i<5; i++) {
            std::cout << product[i] << " " << price[i] << std::endl;
		}	
	}

};

struct Check {
	std::string product_name;
	int product_price;
};

Check returner(Check struct_obj) {
	Check obj;
	CoffeeMachine obj2;
	
	// Այս գործողությունը պետք է լիներ դասի անդամ ֆունկցիա (class member function)
	for(int i=0; i<5; i++) {
		if(obj2.product[i] == struct_obj.product_name){
			if(struct_obj.product_price > obj2.price[i]) {
				std::cout << "Product exists" << std::endl;
				obj.product_price = struct_obj.product_price - obj2.price[i];
				std::cout << "Your dime is: " << obj.product_price << std::endl;
				std::cout << "Be sweet" << std::endl;
			}else if(struct_obj.product_price < obj2.price[i]){
            	std::cout << "You don't have that much money" << std::endl;
			}		 
	}
}
	return obj;
}


int main()
{
std::cout << "     Our products" << std::endl << std::endl;
CoffeeMachine obj1;
obj1.printPriceList();
std::cout << "Enter the product name: ";
Check result;
std::cin >> result.product_name;
std::cout << "Enter your many: ";
std::cin >> result.product_price;
returner(result);
return 0;
}
