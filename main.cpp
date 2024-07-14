#include <cstdio> // this imports the 'cstdio' library
#include <iostream> // this imports the 'iostream' library



void conditional_statements() {
    int x = 0;
    if (x > 0) printf("Positive.");
    else if (x < 0) printf("Negative.");
    else printf("Zero.");
}

int step_function(int x) {
    int result = 0;
    if (x < 0) {
        result = -1;
    } else if (x > 0) {
        result = 1;
    }
    return result;
}

void sum(int a, int b) {
    int c = a + b;
    printf("The sum of %d + %d is %d", a, b, c);
}

int main() {
    printf("Hello world");
//    std::cout << "Hello, World!" << std::endl;

    // Variables
    int the_ans; // an int variable
    // initializing a variable state
    int the_answer = 42; // a declared and assigned variable
    int lucky_number = the_answer / 6;

    // Conditional Statements
    conditional_statements();

    // Calling function
    int stepVal1 = step_function(100);
    int stepVal2 = step_function(0);
    int stepVal3 = step_function(-10);

    std::cout << stepVal1 << stepVal2 << stepVal3 << std::endl;

    printf("Ten %d, Twenty %d, Thirty %d\n", 10, 20, 30);

    sum(10, 20);

    // Floating Point Format Specifiers
    double an = 6.0221409e23;
    printf("Avogadro's Number: %lev %lfw %lgx\n", an, an, an);
    float hp = 9.75;
    printf("Hogwarts' Platform: %e %f %g\n", hp, hp, hp);

    char x = 'M';
    wchar_t y = L'Z';
    printf("Windows binaries start with %c%lc.\n", x, y);

    // Comparison Operators
    printf(" 7 == 7: %du\n", 7 == 7);
    printf(" 7 != 7: %d\n", 7 != 7);
    printf("10 > 20: %d\n", 10 > 20);
    printf("10 >= 20: %d\n", 10 >= 20);
    printf("10 < 20: %d\n", 10 < 20);
    printf("20 <= 20: %d\n", 20 <= 20);

    bool t = true;
    bool f = false;
    printf("!true: %d\n", !t);
    printf("true && false: %d\n", t && f);
    printf("true && !false: %d\n", t && !f);
    printf("true || false: %d\n", t || f);
    printf("false || false: %d\n", f || f);

    // Arrays
    int arr[] = { 1, 2, 3, 4 }; // can omit the length of the array
    printf("The third element is %d.\n", arr[2]); // access the third element
    arr[2] = 100; // update the third element
    printf("The third element is %d.\n", arr[2]);

    // Loops
    unsigned long maximum = 0;
    unsigned long values[] = { 10, 50, 20, 40, 0 };
    for(size_t i=0; i < 5; i++) {
        if (values[i] > maximum) maximum = values[i];
    }
    printf("The maximum value is %lu", maximum);

    return 0; // this is an exit code, a 0 means the program ran successfully, others codes might indicate a problem
}
