#include <stdio.h>
int main()
{
    char studentID[10];
    char password[50];
    int choice;
    
    printf("\t\tFAST UNIVERSITY PORTAL\n");
    
    printf("\nEnter Student ID: ");
    fgets(studentID,10,stdin);
    
    printf("Enter Password: ");
    fgets(password,50,stdin);

    if(studentID[0]!= '2'||studentID[1]<'2'||studentID[1]>'6'||studentID[2]!='K'||studentID[3]!='-'||studentID[4]<'0'||studentID[4]>'9'||
       studentID[5]< '0'||studentID[5] >'9'||studentID[6]<'0'||studentID[6]>'9'||studentID[7]<'0'||studentID[7]>'9')
    {
        printf("\nInvalid Student ID\n");
        printf("Valid format: 22K-0000 to 26K-0999\n");
        return 0;
    }

    printf("\nLogin Successful\n");

    printf("\n\tMAIN MENU\n\n");
   
    printf("1.Student Login\n");
    printf("2.TimeTable and Class Schedule\n");
    printf("3.University Announcements and Admin Dashboard\n");
    printf("4.Classroom and Laboratory Information\n");
    printf("5.Campus Navigation\n");
    printf("6.Complaints and Emergency Reporting\n");
    printf("7.Maintenance Requests\n");
    printf("8.Events and Societies Information\n");
    printf("9.Lost and Found\n");
    printf("10.Smart Search\n");
    printf("11.Manage Students and Classrooms\n");
    printf("12.Statistics and Reports\n");
    printf("13.Campus Services & Reservations\n");

    printf("\nChoose an option: ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("Student Login selected\n");
            break;

        case 2:
            printf("Time Table and Class Schedule selected\n");
            break;

        case 3:
            printf("University Announcements and Admin Dashboard selected\n");
            break;

        case 4:
            printf("Classroom and Laboratory Information selected\n");
            break;

        case 5:
            printf("Campus Navigation selected\n");
            break;

        case 6:
            printf("Complaints and Emergency Reporting selected\n");
            break;

        case 7:
            printf("Maintenance Requests selected\n");
            break;

        case 8:
            printf("Events and Societies Information selected\n");
            break;

        case 9:
            printf("Lost and Found selected\n");
            break;

        case 10:
            printf("Smart Search selected\n");
            break;

        case 11:
            printf("Manage Students and Classrooms selected\n");
            break;

        case 12:
            printf("Statistics and Reports selected\n");
            break;
            
        case 13:
            printf("Campus Services & Reservations selected\n");
            break;    

        default:
            printf("Invalid option\n");
    }
    
    return 0;
}