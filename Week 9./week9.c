#include <stdio.h>
#include <string.h>
int main()
{
    char studentID[10];
    char password[50];
    char correctPass[10];
    int choice;
    printf("\t\tFAST UNIVERSITY PORTAL\n");
    printf("\n\tMAIN MENU\n\n");
    printf("1. Student Login\n");
    printf("2. TimeTable and Class Schedule\n");
    printf("3. University Announcements and Admin Dashboard\n");
    printf("4. Classroom and Laboratory Information\n");
    printf("5. Campus Navigation\n");
    printf("6. Complaints and Emergency Reporting\n");
    printf("7. Maintenance Requests\n");
    printf("8. Events and Societies Information\n");
    printf("9. Lost and Found\n");
    printf("10. Smart Search\n");
    printf("11. Manage Students and Classrooms\n");
    printf("12. Statistics and Reports\n");
    printf("13. Campus Services & Reservations\n");
    printf("\nChoose an option: ");
    scanf("%d",&choice);
    getchar();
    switch(choice)
    {
        case 1:
            printf("\n\tSTUDENT LOGIN\n");
            printf("\nEnter Student ID: ");
            fgets(studentID,sizeof(studentID),stdin);
            studentID[strcspn(studentID,"\n")]='\0';
            if(studentID[0]!='2'||studentID[1]!='6'||studentID[2]!='K'||
            studentID[3]!='-'||studentID[4]<'0'||studentID[4]>'9'||
            studentID[5]<'0'||studentID[5]>'9'||studentID[6]<'0'||studentID[6] >'9'||
            studentID[7]<'0'||studentID[7]>'9'||studentID[8] != '\0')
            {
                printf("\nInvalid Student ID\n");
                printf("Valid format: 26K-0000 to 26K-9999\n");
                return 0;
            }
            correctPass[0]='F';
            correctPass[1]='A';
            correctPass[2]='S';
            correctPass[3]='T';
            correctPass[4]=studentID[5];
            correctPass[5]=studentID[6];
            correctPass[6]=studentID[7];
            correctPass[7] = '\0';
            printf("Enter Password: ");
            fgets(password,sizeof(password),stdin);
            password[strcspn(password,"\n")] = '\0';
            if(strcmp(password,correctPass)!=0)
            {
                printf("\nIncorrect Password\n");
            }
            else
            {
                printf("\nLogin Successful!\n");
                printf("Welcome, Student %s\n", studentID);
            }
            break;
        case 2:
            printf("Time Table and Class Schedule selected\n");
            
            int Dep;
            
			printf("1. Department of Computer Science (CS)\n");
			printf("2. Department of Software Engineering (SE)\n");
			printf("3. Department of Data Science (DS)\n");  
			printf("4. Department of Artificial Intelligence (AI)\n"); 
			printf("5. Department of Cyber Security (CY)\n");
			printf("6. Department of Electrical Engineering (EE)\n");
			printf("7. BBA Track (Management Sciences - Morning/Regular Schedule)\n");
			printf("8. FinTech Track (Management Sciences - Specialized Schedule)\n");	
			printf("9. Department of Mathematics\n");
			printf("10. Department of Physics\n");
			printf("11. Department of English & Social Sciences\n");

            printf("Enter The Department: ");
            scanf("%d",&Dep);
            
        case 3:
            printf("University Announcements and Admin Dashboard selected\n");
            
            int announcement;

   		    printf("\nUNIVERSITY ANNOUNCEMENTS\n");
   			printf("1.Mid-Term Examination Schedule\n");
   			printf("2.Fee Submission Deadline\n");
    		printf("3.University Sports Week\n");

    		printf("Select an announcement: ");
    		scanf("%d",&announcement);

    	switch(announcement)
    	{
        	case 1:
            	printf("Mid-term schedule will be announced soon.\n");
            	break;
        	case 2:
            	printf("Please check the student portal for the fee deadline.\n");
            	break;
        	case 3:
            	printf("Sports Week registration is open.\n");
            	break;
        	default:
            	printf("Invalid announcement option.\n");
   		}
    	break;
 
         case 4:
            printf("Classroom and Laboratory Information selected\n");
            break;
        case 5:
            printf("Campus Navigation selected\n");
            
           	int location;

		    printf("\nCAMPUS NAVIGATION\n");
		    printf("1.Auditorium\n");
		    printf("2.Library\n");
		    printf("3.Cafeteria\n");
		    printf("4.Administration Office\n");
		    
		
		    printf("Choose a location: ");
		    scanf("%d", &location);

    	switch(location)
	    {
	        case 1:
	            printf("Auditorium: Ground Floor, Multipurpose Building\n");
	            break;
	        case 2:
	            printf("Library: Basement, Multipurpose Building\n");
	            break;
	        case 3:
	            printf("Cafeteria: 1st Floor, Multipurpose Building");
	            break;
	        case 4:
	            printf("Administration Office: Main Building\n");
	            break;
	        default:
	            printf("Invalid location.\n");
	    }
	    break;

        case 6:
            printf("Complaints and Emergency Reporting selected\n");
            break;
        case 7:
            printf("Maintenance Requests selected\n");
            break;
        case 8:
            printf("Events and Societies Information selected\n");
                int event;

   		 	printf("\nEVENTS AND SOCIETIES\n");
			printf("1.Programming Society\n");
		    printf("2.Sports Club\n");
		    printf("3.Debate Competition\n");
		    printf("4.Cultural Event\n");

    		printf("Choose an event: ");
    		scanf("%d",&event);

    		switch(event)
    	{
        	case 1:
	            printf("Programming Society: Coding activities and workshops.\n");
	            break;
        	case 2:
	            printf("Sports Club: Sports activities and trials.\n");
	            break;
        	case 3:
	            printf("Debate Competition: Registration details available soon.\n");
	            break;
        	case 4:
	            printf("Cultural Event: Event details available soon.\n");
	            break;
        	default:
           		printf("Invalid event option.\n");
    	}
    	break;

            
        case 9:
            
		printf("Lost and Found selected\n");
		
        int type;
    	char item[100];

	   	printf("\nLOST AND FOUND\n");
	    printf("1.Report a Lost Item\n");
	    printf("2.Report a Found Item\n");

	    printf("Choose an option: ");
	    scanf("%d",&type);

	    if(type!= 1 && type!= 2)
	    {
	        printf("Invalid option.\n");
	        break;
	    }
	
	    getchar();
	
	    printf("Enter item details: ");
	    fgets(item,sizeof(item),stdin);
	    item[strcspn(item,"\n")]='\0';
	
	    if(type==1)
	    {
	        printf("Lost item reported: %s\n",item);
	    }
	    else
	    {
	        printf("Found item reported: %s\n",item);
	    }
	
	    printf("Please contact campus administration for follow-up.\n");
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
