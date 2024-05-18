#include "stdafx.h"
#include "Product.h"

int main() {
    Football ball1("Adidas100x", "Amateur", 139, "grass", "0.8bar");
    Football ball2("Adidas500x", "Intermediate", 219, "artificial grass", "1.1bar");
    Fishing carpRod("Abu Garcia 15g", "Professional", 349, "Carp fishing", "carbon fiber");

    Fishing feederRod("Mitchells MOD 3,6m", "Intermediate", 259, "Feeder fishing", "fiber glass");

    ball1.ListProduct();
	carpRod.ListProduct();

	ball2.TellInfo();
    carpRod.AnswerQuestion();
    feederRod.AskForSale();

    return 0;
}
