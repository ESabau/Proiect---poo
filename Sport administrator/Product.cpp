#include "stdafx.h"
#include "Product.h"

// Implementarea clasei Product

Product::Product(string name, string level, int price) : Name(name), Level(level), Price(price) {}

// ~ e simbolul pentru destructor
Product::~Product() {
    cout << "Product destructor called for " << Name << endl;
}

void Product::setName(string name) {
    Name = name;
}

string Product::getName() {
    return Name;
}

void Product::setLevel(string level) {
    Level = level;
}

string Product::getLevel() {
    return Level;
}

void Product::setPrice(int price) {
    Price = price;
}

int Product::getPrice() {
    return Price;
}

void Product::ListProduct() {
    cout << "Product Name - " << Name << endl;
    cout << "Practice level - " << Level << endl;
    cout << "Price - " << Price << "\n"<< endl;

}

void Product::AskForSale() {
    if (Level == "Amateur") {
        if (Price > 99) {
            Price = 99;
            cout << "The price was reduced to 99 !!" << endl;
        }
    } else if (Level == "Intermediate") {
        if (Price > 199) {
            Price = 199;
            cout << "The price was reduced to 199 !!" << endl;
        }
    } else {
        cout << "This product can't have a price reduction" << endl;
    }
}

// Implementarea clasei Football

Football::Football(string name, string level, int price, string terraintype, string pressure)
    : Product(name, level, price), TerrainType(terraintype), Pressure(pressure) {}

void Football::TellInfo() {
    cout << Name << " is used to play on " << TerrainType << endl;
}

// Implementarea clasei Fishing

Fishing::Fishing(string name, string level, int price, string fishingType, string material)
    : Product(name, level, price), FishingType(fishingType), Material(material) {}

void Fishing::AnswerQuestion() {
    cout << Name << " is used for " << FishingType << " and is made out of " << Material << endl;
}
