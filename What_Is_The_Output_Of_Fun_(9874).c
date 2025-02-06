// question no-34
#include <stdio.h>

int fun(int n) {
    if (n / 10 == 0) {
        return (n % 10);
    } else {
        return fun(n % 10 + fun(n / 10));
    }
}

int main() {
    int result = fun(9874);
    printf("Output: %d\n", result);
    return 0;
}
