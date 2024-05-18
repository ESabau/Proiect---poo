#pragma once //evita dublurile si conflictele de redefinire
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class AbstractProduct {
public:
    virtual void AskForSale() = 0;
    virtual ~AbstractProduct() {}
};

class Product : public AbstractProduct {
private:
    string Level;
    int Price;

protected:
    string Name;

public:
    Product(string name, string level, int price);
    virtual ~Product();

    void setName(string name);
    string getName();

    void setLevel(string level);
    string getLevel();

    void setPrice(int price);
    int getPrice();

    void ListProduct();
    virtual void AskForSale() override;
};

class Football : public Product {
public:
    string TerrainType;
    string Pressure;

    Football(string name, string level, int price, string terraintype, string pressure);

    void TellInfo();
};

class Fishing : public Product {
public:
    string FishingType;
    string Material;

    Fishing(string name, string level, int price, string fishingType, string material);

    void AnswerQuestion();
};
