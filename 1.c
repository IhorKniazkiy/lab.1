int main() {
    int lastDigit, newNum, x;

    printf("Введіть тризначне число x: ");
    scanf("%d", &x);

    // отримати останню цифру x
    lastDigit = x % 10;

    // отримати інші дві цифри x і поміняти їх місцями
    newNum = (x / 10 % 10) * 100 + (x / 100) * 10;

    // додати останню цифру до початку нового числа
    newNum += lastDigit * 100;

    printf("Початкове число x %d\n", newNum);
    return 0;
}
