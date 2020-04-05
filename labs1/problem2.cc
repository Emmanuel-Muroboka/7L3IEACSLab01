#include <iostream>
#include "problem2.h"


void problem2() {
    std::cout << "Problem2" << std::endl;
    int n[] = {1,2,3,4,5,6,7,8,9,10};
    int k = sizeof(n)/sizeof(n[0]);

    for(int i=0; i<k; i++) {
        std::cout <<"f(" << n[i] << ") = sin(" << n[i] << ") + ln(" << n[i] << ")" << std::endl;
    }
}
