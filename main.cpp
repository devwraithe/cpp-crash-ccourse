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

    return 0; // this is an exit code, a 0 means the program ran successfully, others codes might indicate a problem
}
