#include<stdio.h>
#include<string.h>

/*Create a C project to manage parking lot where you have fix number of car parking space. Write following utilities to manage it:
1. To reserve parking space by entering car owner details like his name, mobile number, vehicle no. etc. 
2. To cancel an existing reservation.
3. Utility to view all available parking spaces.
4. Utility to view all occupied spaces.
Make use of arrays and structures to handle the data. Do not need to use file operations.*/

struct parking{
    char name[50];
    char mobileNo[15];
    char vehicleNo[15];
};

//let the fixed no. of parking space be 10

struct parking space[10]={ {"Alice", "1234567890", "XYZ123"},{"","",""},{"Charlie", "5556667777", "LMN789"},};

void reserve_parking(char name[50], char Mobileno[15], char vehicleno[15]); //To reserve parking space
void is_empty(char name[50], char Mobileno[15], char vehicleno[15]);       //To view total empty spaces
int isfilled(char name[50], char mobileno[15], char vehicleno[15]);      //To  view occupied spaces
void cancel_reservation();                                               //To cancel existing reservation

int main(){
    char name[50]; char Mobileno[15]; char vehicleno[15];
    
     reserve_parking( name, Mobileno, vehicleno);
     printf("Displaying total occupied spaces after reservation:\n ");
     isfilled( name, Mobileno,  vehicleno);
     is_empty(name,Mobileno,vehicleno);
     cancel_reservation();

    
}

void is_empty(char name[50], char Mobileno[15], char vehicleno[15]){
    int i; int d=0; int isoccupied;
    for ( i =0; i<10; i++ ){
        if (strlen(space[i].name)!=0){
            
           continue;
        }
        
        else{
            
        }
        d++;
        
        
    }
    printf("Total empty spaces are %d\n",d);
    
}

int isfilled(char name[50], char mobileno[15], char vehicleno[15]){
    int i;int d=0;
    for (i=0; i<10;i++){
        if (strlen(space[i].name)!=0){
            printf("space[%d] | occupied | owner name : %s | mobile no : %s | vehicle no : %s\n", i,space[i].name,space[i].mobileNo,space[i].vehicleNo);
            continue;
        }
        d++;
    }
    printf("Total Occupied Spaces are %d:\n",i-d);
    return 0;


}

void reserve_parking(char name[50], char Mobileno[15], char vehicleno[15]){
    is_empty( name,Mobileno,vehicleno);
     isfilled(name, Mobileno, vehicleno);

     int i;
     printf("\nEnter your space choice where you want reservation to be done:\n");
     scanf("%d",&i);
     if(0<=i<10){
     if((strlen(space[i].name))==0){
        printf("Reservation will be done at space[%d]\n", i);
        printf("Enter your details\n");
        printf("owner name:");
        scanf("%s",name);
        printf("MobileNo.:");
        scanf("%s",Mobileno);
        printf("VehicleNo.:");
        scanf("%s",vehicleno);
        strcpy(space[i].name,name);
        strcpy(space[i].mobileNo,Mobileno);
        strcpy(space[i].vehicleNo,vehicleno);

        printf("space[%d] | occupied | owner name : %s | Mobileno : %s | vehicleno : %s\n",i, (space[i].name),(space[i].mobileNo),(space[i].vehicleNo));
        
     }
     else{
        printf("Space is already occupied\n");
     }
    }
    else{
        printf("Enter valid space no.");

    }
}

void cancel_reservation(){
    //to find the existing reservation
    char name[50]; char mobileno[15]; char vehicleno[15];
    //isfilled(name, mobileno, vehicleno);
    //to cancel the existing reservation
     int i;
    printf("Enter the reservation that you want to cancel:\n");
    scanf("%d",&i);
    if((strlen(space[i].name)==0)){
        printf("Space is already empty\n");
    }
    else{
       strcpy(space[i].name,"");
       strcpy(space[i].mobileNo,"");
       strcpy(space[i].vehicleNo,"");
}
  printf("spaces after cancellation are:\n");
  isfilled(name, mobileno, vehicleno);
}



