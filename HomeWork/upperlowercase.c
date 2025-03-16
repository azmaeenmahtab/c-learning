#include <stdio.h>

int lcm(int n1, int n2) {
    static int lcmnum = 0; // Keep track of the multiple being checked
    lcmnum++;

    if (lcmnum % n1 == 0 && lcmnum % n2 == 0) {
        return lcmnum; // Base case: Found LCM
    }

    return lcm(n1, n2); // Recursive call to check the next number
}

int main() {
    int n1 = 2, n2 = 3;
    int ans = lcm(n1, n2);
    printf("%d\n", ans);
    return 0;
}
