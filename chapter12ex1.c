
#include <stdio.h>
#include <string.h>

struct mail_list {
	char name[50];            
	int address;               
	char street1[50];          
	char street2[50];          
	char city[50];              
	char state[3];            
	int zip;                   
};

void print_list(struct mail_list *mlist);

int main(void) {


	struct mail_list list[100];


	strcpy(list[0].name, "William Cetina");
	list[0].address = 12391092;
	strcpy(list[0].street1, "SOMEPLACE");
	strcpy(list[0].city, "Mérida");
	strcpy(list[0].state, "YUC");
	list[0].zip = 1234;



	print_list(list);

	return(0);
}

void print_list(struct mail_list *mlist) {

	int i;          

	printf("MAILING LIST\n\n");

	for (i = 0; i < sizeof(mlist); ++i) {
		if (strlen(mlist[i].name) == 0) {
			continue;
		}

		printf("%s\n", mlist[i].name);
		printf("%d %s\n", mlist[i].address, mlist[i].street1);
		if (strlen(mlist[i].street2)) {
			printf("%s\n", mlist[i].street2);
		}
		printf("%s, %s  %d\n\n", mlist[i].city, mlist[i].state, mlist[i].zip);
	}

}