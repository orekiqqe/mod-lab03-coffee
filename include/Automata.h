// Copyright 2023 UNN
#ifndef INCLUDE_AUTOMATA_H_
#define INCLUDE_AUTOMATA_H_

#include <iostream>
#include <string>
#include <vector>

enum STATES {
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
    void choice(int drinkNumber);
    void cancel();
    void cook(int drinkNumber);
    void finish();
    STATES getState() {
        return state;
    }
};

#endif // INCLUDE_AUTOMATA_H_
