// Copyright 2023 UNN
#ifndef AUTOMATA_H
#define AUTOMATA_H

#include <iostream>
#include <string>
#include <vector>

enum class STATES {
    OFF,
    WAIT,
    ACCEPT,
    CHECK,
    COOK
};

class Automata {
private:
    STATES state;
    int cash;
    std::vector<std::string> menu;
    std::vector<int> prices;
public:
    Automata();
    void on();
    void off();
    void coin(int userCash);
    void etMenu();
    STATES getState();
    void choice(int drinkNumber);
    void cancel();
    void cook(int drinkNumber);
    void finish();
};

#endif // AUTOMATA_H
