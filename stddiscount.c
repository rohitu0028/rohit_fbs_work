void main()
 {
    float price, discount = 0, finalPrice;
    char student;

    printf("Enter the purchase amount: ");
    scanf("%f", &price);

    printf("Are you a student? (y/n): ");
    scanf(" %c", &student);

    if(student == 'y' || student == 'Y') {
        if(price > 500) {
            discount = price * 0.20;
        } else {
            discount = price * 0.10;
        }
    } else {
        if(price > 600) {
            discount = price * 0.15;
        } else {
            discount = 0;
        }
    }

    finalPrice = price - discount;

    printf("Discount applied: %.2f\n", discount);
    printf("Final price to pay: %.2f\n", finalPrice);
}