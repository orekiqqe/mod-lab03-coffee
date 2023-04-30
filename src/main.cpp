// Copyright 2023 UNN

#include "Automata.h"

int main() {
    Automata automata;
    automata.on();
    automata.etMenu();
    automata.coin(50);
    automata.coin(30);
    automata.cancel();
    automata.choice(2);
    automata.cook(2);
    automata.finish();
    automata.off();

    return 0;
}
