// Copyright 2023 UNN
#include <gtest/gtest.h>
#include "Automata.h"

TEST(AutomataTest, Tea) {
    Automata automata = Automata();
    automata.on();
    automata.etMenu();
    EXPECT_EQ(automata.getState(), WAIT);
    automata.coin(50);
    EXPECT_EQ(automata.getState(), ACCEPT);
    automata.cancel();
    EXPECT_EQ(automata.getState(), WAIT);
    automata.choice(1);
    EXPECT_EQ(automata.getState(), CHECK);
    automata.cook(1);
    EXPECT_EQ(automata.getState(), COOK);
    automata.finish();
    EXPECT_EQ(automata.getState(), WAIT);
    automata.off();
    EXPECT_EQ(automata.getState(), OFF);
}


TEST(AutomataTest, Coffee) {
    Automata automata = Automata();
    automata.on();
    automata.etMenu();
    EXPECT_EQ(automata.getState(), WAIT);
    automata.coin(80);
    EXPECT_EQ(automata.getState(), ACCEPT);
    automata.cancel();
    EXPECT_EQ(automata.getState(), WAIT);
    automata.choice(2);
    EXPECT_EQ(automata.getState(), CHECK);
    automata.cook(2);
    EXPECT_EQ(automata.getState(), COOK);
    automata.finish();
    EXPECT_EQ(automata.getState(), WAIT);
    automata.off();
    EXPECT_EQ(automata.getState(), OFF);
}

TEST(AutomataTest, Milk) {
    Automata automata = Automata();
    automata.on();
    automata.etMenu();
    EXPECT_EQ(automata.getState(), WAIT);
    automata.coin(30);
    EXPECT_EQ(automata.getState(), ACCEPT);
    automata.cancel();
    EXPECT_EQ(automata.getState(), WAIT);
    automata.choice(3);
    EXPECT_EQ(automata.getState(), CHECK);
    automata.cook(3);
    EXPECT_EQ(automata.getState(), COOK);
    automata.finish();
    EXPECT_EQ(automata.getState(), WAIT);
    automata.off();
    EXPECT_EQ(automata.getState(), OFF);
}
