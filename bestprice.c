#include <stdio.h>

int main() {
  
    int flipkart_price, flipkart_discount, flipkart_shipping;
    int snapdeal_price, snapdeal_discount, snapdeal_shipping;
    int amazon_price, amazon_discount, amazon_shipping;

    scanf("%d%d%d", &flipkart_price, &flipkart_discount, &flipkart_shipping);
    scanf("%d%d%d", &snapdeal_price, &snapdeal_discount, &snapdeal_shipping);
    scanf("%d%d%d", &amazon_price, &amazon_discount, &amazon_shipping);

    int flipkart_final_price = (flipkart_price - (flipkart_price * flipkart_discount / 100)) + flipkart_shipping;
    int snapdeal_final_price = (snapdeal_price - (snapdeal_price * snapdeal_discount / 100)) + snapdeal_shipping;
  
    printf("In Flipkart: Rs.%d\n", flipkart_final_price);
    printf("In Snapdeal: Rs.%d\n", snapdeal_final_price);
    printf("In Amazon: Rs.%d\n", amazon_final_price);


    if (flipkart_final_price <= snapdeal_final_price && flipkart_final_price <= amazon_final_price) {
        printf("Choose Flipkart\n");
    } else if (snapdeal_final_price <= flipkart_final_price && snapdeal_final_price <= amazon_final_price) {
        printf("Choose Snapdeal\n");
    } else {
        printf("Choose Amazon\n");
    }

    return 0;
}
