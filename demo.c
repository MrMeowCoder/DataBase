#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct verify{
    char aadhar[20];
    char pan[20];
    char appar[20];
    char dl[20];
    char passport[20];
};

void listdata(struct verify *id){
    int count = 0;
    printf("\n");
    if(strlen(id->pan) == 0 && strlen(id->pan) == 0 && strlen(id->aadhar) == 0 && strlen(id->appar) == 0 && strlen(id->dl) == 0 && strlen(id->passport) == 0){
        printf("\nNO DATA IS BEEN ADDED YET. PLEASE TRY AGAIN AFTER ADDING DATA\n");
    }else{
        printf("\nHere is your data list :\n");
        if(strlen(id->pan) != 0){
            if(count == 0){
                printf("\n");
            }
            printf("%d) PAN CARD NUMBER\t: %s\n",count+1, (id->pan)); count++;
        }
        if(strlen(id->aadhar) != 0){
            if(count == 0){
                printf("\n");
            }
            printf("%d) AADHAR CARD NUMBER\t: %s\n",count+1, (id->aadhar)); count++;
        }
        if(strlen(id->appar) != 0){
            if(count == 0){
                printf("\n");
            }
            printf("%d) APPAR ID\t: %s\n",count+1, (id->appar)); count++;
        }
        if(strlen(id->dl) != 0){
            if(count == 0){
                printf("\n");
            }
            printf("%d) DRIVING LICENSE\t: %s\n",count+1, (id->dl)); count++;
        }
        if(strlen(id->passport) != 0){
            if(count == 0){
                printf("\n");
            }
            printf("%d) PASSPORT NUMBER\t: %s\n",count+1, (id->passport)); count++;
        }
    }
}


void enterdata(struct verify *id){
    int select;
    printf("\n\n1. PAN Number\n2. AADHAR Number\n3. APAAR Id\n4. Driving License\n5. Passport\n");
    printf("\nSelect the avilable id :");
    scanf("%d",&select);
    switch(select){
        case 1 : 
        printf("\nEnter PAN NUMBER :");
        scanf("%s",id->pan);
        printf("\nPAN NUMBER STORED SUCESSFULLY\n");
        break;
        case 2 :
        printf("\nEnter AADHAR NUMBER :");
        scanf("%s",id->aadhar);
        printf("\nAADHAR NUMBER STORED SUCESSFULLY\n");
        break;
        case 3 :
        printf("\nEnter APPAR ID :");
        scanf("%s",id->appar);
        printf("\nAPPAR ID STORED SUCESSFULLY\n");
        break;
        case 4 :
        printf("\nEnter DRIVING LICENCE NUMBER :");
        scanf("%s",id->dl);
        printf("\nDRIVING LICENCE NUMBER STORED SUCESSFULLY\n");
        break;
        case 5 :
        printf("\nEnter PASSPORT NUMBER :");
        scanf("%s",id->passport);
        printf("\nPASSPORT NUMBER SUCESSFULLY\n");
        break;
        default :
        printf("\n\nINVALID SELECTION. PLEASE TRY AGAIN\n");
        break;
    }
}

void viewdata(struct verify *id){
    int select;
    printf("\n\n1. PAN Number\n2. AADHAR Number\n3. APAAR Id\n4. Driving License\n5. Passport\n");
    printf("\nEnter which data you need :");
    scanf("%d",&select);

    switch(select){
        case 1 : 
        if(strlen(id->pan) == 0){
            printf("\n\nno data avilable\n");
            break;
        } else {
            printf("PAN NUMBER : %s\n",id->pan);
            break;
        }
        break;
        case 2 :
        if(strlen(id->aadhar) == 0){
            printf("\n\nno data avilable\n\n");
        } else {
            printf("AADHAR NUMBER : %d\n",id->aadhar);
        }
        break;
        case 3 :
        if(strlen(id->pan) == 0){
            printf("\n\nno data avilable\n\n");
        } else {
            printf("APPAR ID : %d\n",id->appar);
        }
        break;
        case 4 :
        if(strlen(id->pan) == 0){
            printf("\n\nno data avilable\n\n");
        } else {
            printf("DRIVING LICENCE NUMBER : %d\n",id->dl);
        }
        break;
        case 5 :
        if(strlen(id->passport) == 0){
            printf("\n\nno data avilable\n\n");
        } else {
            printf("PASSPORT NUMBER : %s\n",id->passport);
        }
        break;
        default :
        printf("\n\nINVALID SELECTION. PLEASE TRY AGAIN\n\n");
        break;
    }
}
int main(){
    struct verify *id = (struct verify *)malloc(sizeof(struct verify));
    id->aadhar[0] = '\0';
    id->appar[0] = '\0';
    id->dl[0] = '\0';
    id->pan[0] = '\0';
    id->passport[0] = '\0';

    int accessdata;
    int select1;
    int select2;
    while(1){
        printf("\n\n1. ENTER DATA\n2. VIEW DATA\n3. LIST AVILABLE DATA\n4. EXIT\n");
        printf("\nSelect one of the above :");
        scanf("%d",&accessdata);
        switch(accessdata){
            case 1 :
                enterdata(id);
                break;
            case 2 :
                viewdata(id);
            break;

            case 4 :
                printf("\n\nThank you for choosing Veerendra survice!\n\n");
                free(id);
                return 0;
            break;

            case 3 :
                listdata(id);
            break;

            default :
                printf("\n\ninvalid selection, just select 1, 2 or 3\n\n");
            break;
        }
    }
}