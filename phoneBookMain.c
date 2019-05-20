#include <stdio.h>
#include <string.h>
#include "phone.h"

extern void registerPhoneData();
extern void printAll();
extern void searchByName();
extern void deleteByName();

char password[10] = "qwer1234";
static int count_service = 0;

int main(){
	int i;
	do{
       	printf("\n============ Telephone Book Management ============");
       	printf("\n <<<1.Register\t2.Print All\t3.Search by ID\t4.Delete\t5.Exit >>>\n");
        printf(" Please enter your service number (1-5)> ");
		scanf("%d", &i);

		switch(i){
			case 1: registerPhoneData(); break;
			case 2: printAll(); break;
          		case 3: searchByName(); break;
           		case 4: deleteByName(); break;
			default: break;
		}
		count_service++;
	} while (i!= 5);
	printf("Total Service Count is %d\n", count_service);
	return 0;
}
