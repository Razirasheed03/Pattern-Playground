
void printNPattern(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(j == 0 || j == n-1 || i == j) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int size = 5;
    printNPattern(size);
    return 0;
}
