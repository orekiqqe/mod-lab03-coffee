// Copyright 2023 UNN
#include "Automata.h"

Automata::Automata() {
    state = STATES::OFF;
    cash = 0;
}

void Automata::on() {
    state = STATES::WAIT;
}

void Automata::off() {
    if (state == STATES::WAIT) {
        state = STATES::OFF;
    }
}


void Automata::coin(int userCash) {
    if (state == STATES::ACCEPT || state == STATES::WAIT) {
        state = STATES::ACCEPT;
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
    if (state == STATES::ACCEPT || state == STATES::WAIT) {
        if (cash >= prices[drinkNumber - 1]) {
            state = STATES::CHECK;
        }
    }
}

void Automata::cancel() {
    if (state == STATES::ACCEPT || state == STATES::CHECK) {
        state = STATES::WAIT;
    }
}

void Automata::cook(int drinkNumber) {
    if (state == STATES::CHECK) {
        state = STATES::COOK;
        cash -= prices[drinkNumber - 1];
    }
}

void Automata::finish() {
    if (state == STATES::COOK) {
        state = STATES::WAIT;
    }
}
