#include <stdio.h>

int main(void)
{
    int shares, price_per_share;
    float value, commission_original, commission_rival;

    // Prompt the user to enter the number of shares
    printf("Enter the number of shares: ");
    scanf("%d", &shares);

    // Prompt the user to enter the price per share
    printf("Enter the price per share: ");
    scanf("%d", &price_per_share);

    // Formula that calculates the total value of the share(s)
    value = shares * price_per_share;

    // Calculate the commission of the original broker
    if (value < 2500.00f)
        commission_original = 30.00f + .017f * value;
    else if (value < 6250.00f)
        commission_original = 56.00f + .0066f * value;
    else if (value < 20000.00f)
        commission_original = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        commission_original = 100.00f + .0022f * value;
    else if (value < 500000.00f)
        commission_original = 155.00f + .0011f * value;
    else
        commission_original = 255.00f + .0009f * value;
    
    if (commission_original < 39.00f)
        commission_original = 39.00f;

    // Calculate the commission of the rival broker
    if (shares < 2000)
        commission_rival = 33.00f + (0.03f * shares);
    else if (shares >= 2000)
        commission_rival = 33.00f + (0.02f * shares);
    
    // Display the commission charged by both the original and rival brokers
    printf("The commission charged by the original broker is: $%.2f\n"
           "The commission charged by the rival broker is: $%.2f\n",
           commission_original, commission_rival);

    return (0);
}