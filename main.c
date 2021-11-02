#include <stdio.h>
#include <stdlib.h>

int main()
{
    int son1,son2,katta,kichik,qolgan;
    printf("\n--- EKUB VA EKUK --- \n");
    do{
        printf("2 ta son kiriting: ");
        scanf("%d%d",&son1,&son2);
    }while(son1 <= 0 || son2 <= 0);
    if(son1 > son2){
        katta = son1;
        kichik = son2;
    }else{
        katta = son2;
        kichik = son1;
    }
    qolgan = katta % kichik;
    while(qolgan != 0){
        katta = kichik;
        kichik = qolgan;
        qolgan = katta % kichik;
    }
    printf("%d va %d sonlarining EKUBi -> %d\n",son1,son2,kichik);
    int ekuk = 0;
    ekuk = son1 * son2 / kichik;
    printf("%d va %d sonlarining EKUKi -> %d\n",son1,son2,ekuk);
    return 0;
}
