
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
    scanf("%d", &choice);
    getchar();

    switch(choice)
    {
        case 1:
            printf("\n\tSTUDENT LOGIN\n");
            printf("\nEnter Student ID: ");
            fgets(studentID, sizeof(studentID), stdin);
            studentID[strcspn(studentID, "\n")] = '\0';

            if(studentID[0] != '2' || studentID[1] != '6' ||
            studentID[2] != 'K' || studentID[3] != '-' ||
            studentID[4] < '0' || studentID[4] > '9' ||
            studentID[5] < '0' || studentID[5] > '9' ||
            studentID[6] < '0' || studentID[6] > '9' ||
            studentID[7] < '0' || studentID[7] > '9' ||
            studentID[8] != '\0')
            {
                printf("\nInvalid Student ID\n");
                printf("Valid format: 26K-0000 to 26K-9999\n");
                return 0;
            }

            correctPass[0] = 'F';
            correctPass[1] = 'A';
            correctPass[2] = 'S';
            correctPass[3] = 'T';
            correctPass[4] = studentID[5];
            correctPass[5] = studentID[6];
            correctPass[6] = studentID[7];
            correctPass[7] = '\0';

            printf("Enter Password: ");
            fgets(password, sizeof(password), stdin);
            password[strcspn(password, "\n")] = '\0';

            if(strcmp(password, correctPass) != 0)
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
        {
            int Dep;
            int i, j;

            char departments[11][45] = {
                "Computer Science (CS)",
                "Software Engineering (SE)",
                "Data Science (DS)",
                "Artificial Intelligence (AI)",
                "Cyber Security (CY)",
                "Electrical Engineering (EE)",
                "BBA Track",
                "FinTech Track",
                "Mathematics",
                "Physics",
                "English and Social Sciences"
            };

            char days[5][15] = {
                "Monday","Tuesday","Wednesday","Thursday","Friday"
            };

            char timetable[11][5][3][20]={

                {
                    {"PF","Calculus","English"},
                    {"ICT","PF Lab","Calculus"},
                    {"English","PF","ICT"},
                    {"Calculus","English","PF Lab"},
                    {"ICT","Calculus","PF"}
                },

                {
                    {"OOP","Calculus","English"},
                    {"ICT","OOP Lab","Physics"},
                    {"English","OOP","Calculus"},
                    {"Physics","English","OOP Lab"},
                    {"ICT","Calculus","OOP"}
                },

                {
                    {"Programming","Statistics","Calculus"},
                    {"Database","Programming Lab","English"},
                    {"Statistics","Programming","ICT"},
                    {"Calculus","Database","English"},
                    {"ICT","Statistics","Programming"}
                },

                {
                    {"AI","Calculus","Programming"},
                    {"ICT","AI Lab","Statistics"},
                    {"Programming","AI","English"},
                    {"Calculus","Statistics","AI Lab"},
                    {"ICT","Programming","AI"}
                },

                {
                    {"Cyber Security","Programming","Calculus"},
                    {"Networks","Security Lab","English"},
                    {"Programming","Cyber Security","ICT"},
                    {"Calculus","Networks","Security Lab"},
                    {"English","Programming","Cyber Security"}
                },

                {
                    {"Circuit","Calculus","Physics"},
                    {"Programming","Circuit Lab","English"},
                    {"Electronics", "Physics","Programming"},
                    {"Calculus", "Electronics", "Circuit Lab"},
                    {"English", "Physics", "Circuit"}
                },

                {
                    {"Management", "Accounting", "English"},
                    {"Marketing", "Economics", "Business Math"},
                    {"Accounting", "Management", "ICT"},
                    {"Economics", "Marketing", "English"},
                    {"Business Math", "Management", "Accounting"}
                },

                {
                    {"FinTech", "Accounting", "Calculus"},
                    {"Economics", "Programming", "English"},
                    {"Finance", "FinTech", "Statistics"},
                    {"Programming", "Finance", "Economics"},
                    {"English", "Statistics", "FinTech"}
                },

                {
                    {"Calculus", "Algebra", "Statistics"},
                    {"Discrete Math", "Programming", "English"},
                    {"Algebra", "Calculus", "ICT"},
                    {"Statistics", "Discrete Math", "English"},
                    {"Programming", "Algebra", "Calculus"}
                },

                {
                    {"Physics", "Calculus", "Mechanics"},
                    {"Electronics", "Physics Lab", "English"},
                    {"Mechanics", "Physics", "Mathematics"},
                    {"Calculus", "Electronics", "Physics Lab"},
                    {"English", "Mechanics", "Physics"}
                },

                {
                    {"English", "Psychology", "Sociology"},
                    {"Communication", "History", "ICT"},
                    {"Psychology", "English", "Sociology"},
                    {"History", "Communication", "English"},
                    {"ICT", "Psychology", "Sociology"}
                }
            };

            printf("\nTIMETABLE AND CLASS SCHEDULE\n\n");

            for(i = 0; i < 11; i++)
            {
                printf("%d. %s\n", i + 1, departments[i]);
            }

            printf("\nEnter The Department: ");
            scanf("%d", &Dep);

            if(Dep < 1 || Dep > 11)
            {
                printf("Invalid Department Selection\n");
            }
            else
            {
                printf("\n%s - Sample Timetable\n\n", departments[Dep - 1]);

                printf("%-12s %-16s %-16s %-16s\n",
                "Day", "9-10 AM", "10-11 AM", "11-12 PM");

                for(i = 0; i < 5; i++)
                {
                    printf("%-12s", days[i]);

                    for(j = 0; j < 3; j++)
                    {
                        printf("%-16s", timetable[Dep - 1][i][j]);
                    }

                    printf("\n");
                }
            }

            printf("\nNote: This is a sample timetable for demonstration.\n");

            break;
        }

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
                    printf("Sports Week registration is open.\n\n");
                    
                    int sports;
                    
                    printf("1. Cricket\n");
                    printf("2. FootBall\n");
                    printf("3. BasketBall\n");
                    printf("4. Badminton\n");
                    printf("5. Table tennis\n");
                    printf("6. Kabaddi\n");
                    printf("7. Pool\n");
                    
                    printf("Enter The Choice: ");
                    scanf("%d",&sports);
                    
                    switch(sports)
                    {
                    	
                    	printf("\n");
                    		case 1:
                    	
                    		printf("You are now registered In Cricket for sports Week. \n");
							printf("Contact On 03567294343(whatsapp) For Further details. \n");								
							break;			
						
						
							case 2:
                    	
                    		printf("You are now registered In FootBall for sports Week. \n");
							printf("Contact On 04567294383(whatsapp) For Further details. \n");								
							break;			
						
						
							case 3:
                    	
                    		printf("You are now registered In BasketBall for sports Week. \n");
							printf("Contact On 09877294334(whatsapp) For Further details. \n");								
									
						
						
							case 4:
                    	
                    		printf("You are now registered In Badminton for sports Week. \n");
							printf("Contact On 06201294349(whatsapp) For Further details. \n");								
							break;			
						
						
							case 5:
                    	
                    		printf("You are now registered In Table Tennis for sports Week. \n");
							printf("Contact On 00943294345(whatsapp) For Further details. \n");								
							break;		
						
						
							case 6:
                    	
                    		printf("You are now registered In Kabaddi for sports Week. \n");
							printf("Contact On 03567294343(whatsapp) For Further details. \n");								
							break;		
						
						
							case 7:
                    	
                    		printf("You are now registered In Pool for sports Week. \n");
							printf("Contact On 03567294343(whatsapp) For Further details. \n");	
							break;	
							
					default:
						printf("Invalid Sports Option.\n");
						break;				
					}
					
					break;
      
                default:
                    printf("Invalid announcement option.\n");
                    
                  
            }
            break;

        case 4:
            printf("Classroom and Laboratory Information selected\n");
            
            int buildings,floors;
            
            printf("1. Academic Block 1.\n");
            printf("2. Academic Block 2.\n");
            printf("3. MultiPurpose Building\n");
            
            printf("Enter The Choice: ");
            scanf("%d",&buildings);
            
            switch(buildings)
            {
            	case 1:
            	printf("1. Ground Floor.\n");
            	printf("2. 1st Floor\n");
           		printf("3. 2nd Floor.\n");
				
				printf("Enter The Choice: ");
				scanf("%d",&floors);
				
				switch(floors)
				{
					case 1:
					printf("Room A1: Hod Office\n");
									
					
				}	
			}
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
        {
            int complaints;
            int issue;
            int emergency;

            char details[1000];
            char building[50];
            char floor[30];
            char room[30];
            char issueName[50];
            char emergencyName[60];

            printf("\nCOMPLAINTS AND EMERGENCY REPORTING\n\n");

            printf("1. Harassment / Misconduct\n");
            printf("2. Electrical and Cooling Issues\n");
            printf("3. Computer / Lab Equipment Not Working\n");
            printf("4. Other Complaints\n");
            printf("5. Emergency Reporting\n");

            printf("\nEnter The Choice: ");
            scanf("%d", &complaints);
            getchar();

            switch(complaints)
            {
                case 1:
                    printf("\nHARASSMENT / MISCONDUCT\n");

                    printf("Enter Complaint Details: ");
                    fgets(details, sizeof(details), stdin);
                    details[strcspn(details, "\n")] = '\0';

                    printf("\nYour complaint has been recorded.\n");
                    printf("Please contact university administration for further assistance.\n");

                    break;

                case 2:
                    printf("\nELECTRICAL AND COOLING ISSUES\n");

                    printf("1. Fan Not Working\n");
                    printf("2. Air Conditioner Not Working\n");
                    printf("3. Light Bulb Not Working\n");

                    printf("\nChoose Issue: ");
                    scanf("%d", &issue);
                    getchar();

                    switch(issue)
                    {
                        case 1:
                            strcpy(issueName, "Fan Not Working");
                            break;

                        case 2:
                            strcpy(issueName, "Air Conditioner Not Working");
                            break;

                        case 3:
                            strcpy(issueName, "Light Bulb Not Working");
                            break;

                        default:
                            printf("Invalid Issue Selection.\n");
                            break;
                    }

                    if(issue >= 1 && issue <= 3)
                    {
                        printf("Enter Building: ");
                        fgets(building, sizeof(building), stdin);
                        building[strcspn(building, "\n")] = '\0';

                        printf("Enter Floor: ");
                        fgets(floor, sizeof(floor), stdin);
                        floor[strcspn(floor, "\n")] = '\0';

                        printf("Enter Room Number: ");
                        fgets(room, sizeof(room), stdin);
                        room[strcspn(room, "\n")] = '\0';

                        printf("Enter Additional Details: ");
                        fgets(details, sizeof(details), stdin);
                        details[strcspn(details, "\n")] = '\0';

                        printf("\nComplaint Recorded Successfully!\n");
                        printf("Issue: %s\n", issueName);
                        printf("Location: %s, %s, Room %s\n",building,floor,room);
                    }

                    break;

                case 3:
                    printf("\nCOMPUTER / LAB EQUIPMENT COMPLAINT\n");

                    printf("Enter Building: ");
                    fgets(building, sizeof(building), stdin);
                    building[strcspn(building, "\n")] = '\0';

                    printf("Enter Floor: ");
                    fgets(floor, sizeof(floor), stdin);
                    floor[strcspn(floor, "\n")] = '\0';

                    printf("Enter Lab Number: ");
                    fgets(room, sizeof(room), stdin);
                    room[strcspn(room, "\n")] = '\0';

                    printf("Enter Equipment Problem: ");
                    fgets(details, sizeof(details), stdin);
                    details[strcspn(details, "\n")] = '\0';

                    printf("\nComplaint Recorded Successfully!\n");
                    printf("Location: %s, %s, Lab %s\n", building, floor, room);

                    break;

                case 4:
                    printf("\nOTHER COMPLAINTS\n");

                    printf("Enter Your Complaint Details: ");
                    fgets(details, sizeof(details), stdin);
                    details[strcspn(details, "\n")] = '\0';

                    printf("\nYour complaint has been recorded successfully.\n");

                    break;

                case 5:
                    printf("\nEMERGENCY REPORTING\n\n");

                    printf("1. Medical Emergency\n");
                    printf("2. Fire / Smoke\n");
                    printf("3. Security Threat / Physical Altercation\n");
                    printf("4. Electrical Hazard\n");
                    printf("5. Other Emergency\n");

                    printf("\nChoose Emergency Type: ");
                    scanf("%d", &emergency);
                    getchar();

                    switch(emergency)
                    {
                        case 1:
                            strcpy(emergencyName,"Medical Emergency");
                            break;

                        case 2:
                            strcpy(emergencyName,"Fire / Smoke");
                            break;

                        case 3:
                            strcpy(emergencyName,"Security Threat / Physical Altercation");
                            break;

                        case 4:
                            strcpy(emergencyName, "Electrical Hazard");
                            break;

                        case 5:
                            strcpy(emergencyName, "Other Emergency");
                            break;

                        default:
                            printf("Invalid Emergency Option.\n");
                            break;
                    }

                    if(emergency >= 1 && emergency <= 5)
                    {
                        printf("Enter Building: ");
                        fgets(building, sizeof(building), stdin);
                        building[strcspn(building, "\n")] = '\0';

                        printf("Enter Floor: ");
                        fgets(floor, sizeof(floor), stdin);
                        floor[strcspn(floor, "\n")] = '\0';

                        printf("Enter Room Number: ");
                        fgets(room, sizeof(room), stdin);
                        room[strcspn(room, "\n")] = '\0';

                        printf("Enter Emergency Details: ");
                        fgets(details, sizeof(details), stdin);
                        details[strcspn(details, "\n")] = '\0';

                        printf("\nEMERGENCY REPORT RECORDED\n");
                        printf("Emergency: %s\n", emergencyName);
                        printf("Location: %s, %s, Room %s\n", building, floor, room);

                        printf("Please immediately contact campus security or emergency services.\n");
                    }

                    break;

                default:
                    printf("Invalid Complaint Option.\n");
            }

            break;
        }

			
			case 3:
			
				printf("Enter The Building: ");
            	scanf("%s",building);
            	
            	printf("Enter The Floor : ");
            	scanf("%s",floor);
            
            	printf("Enter The Lab: ");
            	scanf("%s",room);
            
            	printf("\nReport Recorded.\n");
			break;	
				
			case 4:
				printf("Enter The Complaint Details: ");
				scanf("%s",details);
				
				printf("\nComplaint Recorded.");
				
			break;	
        	}
            
            
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
            scanf("%d", &event);

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
        {
            printf("Lost and Found selected\n");

            int type;
            char item[100];

            printf("\nLOST AND FOUND\n");
            printf("1.Report a Lost Item\n");
            printf("2.Report a Found Item\n");

            printf("Choose an option: ");
            scanf("%d", &type);

            if(type != 1 && type != 2)
            {
                printf("Invalid option.\n");
                break;
            }

            getchar();

            printf("Enter item details: ");
            fgets(item, sizeof(item), stdin);
            item[strcspn(item, "\n")] = '\0';

            if(type == 1)
            {
                printf("Lost item reported: %s\n", item);
            }
            else
            {
                printf("Found item reported: %s\n", item);
            }

            printf("Please contact campus administration for follow-up.\n");
            break;
        }

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

