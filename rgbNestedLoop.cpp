// Copyright (c) 2021 Hertz Antonella All rights reserved.
// Created by: Hertz Antonella
// Created on: may,3, 2022
// In this program loops 3 counter from, and they starts
// from 200 to 255.


#include <iostream>

main() {
    // variables
    int counter1;
    int counter2;
    int counter3;


    //using nested loops to display colors code
    // for every for loop starts from 200 to 256.
    for (counter1 = 200; counter1 < 255; counter1++) {
        for (counter2 = 200; counter2 < 255; counter2++) {
            for (counter3 = 200; counter3 < 255; counter3++) {
                std::cout << "RGB " << "''" << counter1
                << " '' " << counter2 << "'' " << counter3 << std::endl;
        }
        }
    }
}
