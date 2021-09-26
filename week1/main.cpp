#include <iostream>

#define MAX(a, b) ((a) < (b) ? (b) : (a))

void postIncrementExperiment() {
    int x = 0;
    int y = x++ + y++;
    std::cout << "Post Increment Challenges" << std::endl;
    std::cout << "===========================================" << std::endl;
    std::cout << "x = " << x << ", y = " << y << std::endl;
    std::cout << "===========================================" << std::endl;
}

void maxWithMacroWithUndefinedBehaviour() {
    int x = 5;
    int y = 10;
    int z = MAX(x++, y++);

    std::cout << "MAX with Macro with undefined behaviour" << std::endl;
    std::cout << "===========================================" << std::endl;
    std::cout << "x = " << x << ", y = " << y << ", y = " << z << std::endl;
    std::cout << "===========================================" << std::endl;
}

void maxWithMacroWithDefinedBehaviour() {
    int x = 5;
    int y = 10;

    x++;
    y++;

    int z = MAX(x, y);

    std::cout << "MAX with Macro with defined behaviour" << std::endl;
    std::cout << "===========================================" << std::endl;
    std::cout << "x = " << x << ", y = " << y << ", y = " << z << std::endl;
    std::cout << "===========================================" << std::endl;
}

int main() {
    postIncrementExperiment();
    maxWithMacroWithUndefinedBehaviour();
    maxWithMacroWithDefinedBehaviour();
    return 0;
}
