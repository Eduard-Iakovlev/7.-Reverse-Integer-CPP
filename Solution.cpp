﻿#include "Solution.h"
#include <cmath>

int Solution::reverse(int x){
    long result = 0;

    while (x != 0) {
        result = result * 10 + x % 10;
        x /= 10;
        if ((result) > (pow(2, 31) - 1) || (result) < (pow(-2, 31))) return 0;
    }

    return (int)result;
}
