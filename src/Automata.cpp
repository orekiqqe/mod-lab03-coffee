// Copyright 2023 UNN
#include "Automata.h"

Automata::Automata() {
    state = OFF;
    cash = 0;
}

void Automata::on() {
    state = WAIT;
}

void Automata::off() {
    if (state == WAIT) {
        state = OFF;
    }
}


void Automata::coin(int userCash) {
    if (state == ACCEPT || state == WAIT) {
        state = ACCEPT;
        cash += userCash;
    }
}

void Automata::etMenu() {
    std::vector<std::string> menu = { "Tea", "Coffee", "Milk" };
    std::vector<int> prices = { 50, 80, 30 };
}

STATES Automata::getState() {
    return state;
}

void Automata::choice(int drinkNumber) {
    if (state == ACCEPT || state == WAIT) {
        if (cash >= prices[drinkNumber - 1]) {
            state = CHECK;
        }
    }
}

void Automata::cancel() {
    if (state == ACCEPT || state == CHECK) {
        state = WAIT;
    }
}

void Automata::cook(int drinkNumber) {
    if (state == CHECK) {
        state = COOK;
        cash -= prices[drinkNumber - 1];
    }
}

void Automata::finish() {
    if (state == COOK) {
        state = WAIT;
    }
}
