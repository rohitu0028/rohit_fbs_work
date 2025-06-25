void main() 
{
    int m1, m2, m3, m4, m5, total;
    float percentage;
    m1=95;
    m2=80;
    m3=91;
    m4=56;
    m5=70;
    
    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;

    printf("Total Marks = %d\n", total);
    printf("Percentage = %.2f%%\n", percentage);

}