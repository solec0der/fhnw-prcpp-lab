#include <iostream>

#define MAX(a, b) ((a) < (b) ? (b) : (a))
#define GET_MEM_USAGE_OF_TYPE(typeName, type) (std::cout << typeName << ":\t" << sizeof(type) << std::endl)

void postIncrementExperiment() {
    int x = 0;
    int y = x++ + y++;
    std::cout << "Post Increment Challenges" << std::endl;
    std::cout << "===============================================" << std::endl;
    std::cout << "x = " << x << ", y = " << y << std::endl;
    std::cout << "===============================================" << std::endl;
}

void maxWithMacroWithUndefinedBehaviour() {
    int x = 5;
    int y = 10;
    int z = MAX(x++, y++);

    std::cout << "MAX with Macro with undefined behaviour" << std::endl;
    std::cout << "===============================================" << std::endl;
    std::cout << "x = " << x << ", y = " << y << ", y = " << z << std::endl;
    std::cout << "===============================================" << std::endl;
}

void maxWithMacroWithDefinedBehaviour() {
    int x = 5;
    int y = 10;

    x++;
    y++;

    int z = MAX(x, y);

    std::cout << "MAX with Macro with defined behaviour" << std::endl;
    std::cout << "===============================================" << std::endl;
    std::cout << "x = " << x << ", y = " << y << ", y = " << z << std::endl;
    std::cout << "===============================================" << std::endl;
}

void calculateMemoryUsageOfPrimitiveDataTypes() {
    std::cout << "Memory Usage of primitive data types (in bytes)" << std::endl;
    std::cout << "===============================================" << std::endl;
    GET_MEM_USAGE_OF_TYPE("Char", char);
    GET_MEM_USAGE_OF_TYPE("Short", short);
    GET_MEM_USAGE_OF_TYPE("Bool", bool);
    GET_MEM_USAGE_OF_TYPE("Int", int);
    GET_MEM_USAGE_OF_TYPE("Float", float);
    GET_MEM_USAGE_OF_TYPE("Double", double);
    std::cout << "===============================================" << std::endl;
}

int main() {
    postIncrementExperiment();
    maxWithMacroWithUndefinedBehaviour();
    maxWithMacroWithDefinedBehaviour();
    calculateMemoryUsageOfPrimitiveDataTypes();
    return 0;
}
