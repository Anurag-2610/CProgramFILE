#include<stdio.h>
int main(){
    //to demonstrate the working of continue statement
    int num_students, i;
    char discipline;

    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    for(i=1; i <= num_students; i++){
        printf("\nEnter discipline for student %d (B for BTech, M for MTech):",i);
        scanf(" %c", &discipline);
        if(discipline !='B'&& discipline !='M'){
            printf("Enter the correct discipline");
            break;
        }

        printf("student %d is enrolled in the following subjects:\n",i);
        printf("1. Mathematics\n");
        printf("2. Data Structures\n");
        printf("3. Algorithms\n");

    // if the student is Mtech then skip the extra subject
    if(discipline == 'M'){
        printf("Mtech students do not have an extra subject.\n");
        continue; //skip the extra subject for Mtech and move to next student

    }
    //Extra subject for Btech students
    printf("4. Computer Networks (Extra Subject for BTech)\n");
   
    }
    printf("\nAll students' subject allocation completed.\n");
    return 0;
}