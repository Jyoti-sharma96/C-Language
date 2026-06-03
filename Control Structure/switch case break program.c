#include<stdio.h>
main()
{
	int a,b;
	printf("\n Press 1 for English.\n");
	printf("\n Press 2 for Hindi.\n");
	printf("\n Press 3 for Tamil.\n");
	printf("\n ENTER YOUR CHOICE :");
	scanf("%d",&a);
	
	switch(a){
		case 1:
			printf("\n Press 1 for Internet Recharge\n");
			printf("\n Press 2 for Top-up Recharge\n");
			printf("\n Press 3 for Special Recharge\n");
			printf("\n ENTER YOUR CHOICE :");
			scanf("%d",&b);
			switch(b){
				case 1:
					printf("\n You have succesfully completed your Internet Recharge");
				break;
				case 2:
					printf("\n You have succesfully completed your Top-up Recharge");
				break;
				case 3:
					printf("\n You have succesfully completed your Special Recharge");
				break;
				default:
					printf("\n Invalid Number.");	
			}
		break;
		case 2:
			printf("\n Internet Recharge ke liye 1 dabaiye.\n");
			printf("\n Top-up Recharge ke liye 2 dabaiye.\n");
			printf("\n Special Recharge ke liye 3 dabaiye.\n");
			printf("\n ENTER YOUR CHOICE :");
			scanf("%d",&b);
			switch(b){
				case 1:
					printf("\n Aapka Internet recharge safaltapurvak hogaya hai");
				break;
				case 2:
					printf("\n Aapka Top-up Recharge safaltapurvak hogaya hai");
				break;
				case 3:
					printf("\n Aapka Special Recharge safaltapurvak hogaya hai");
				break;
				default:
					printf("\n Invalid Number.");	
			}
		break;
		case 3:
			printf("\n Internet Recharge panna 1-ai amuthunga.\n");
			printf("\n Top-up Recharge panna 2-ai amuthunga.\n");
			printf("\n Special Recharge panna 3-ai amuthunga.\n");
			printf("\n ENTER YOUR CHOICE :");
			scanf("%d",&b);
			switch(b){
				case 1:
					printf("\n Ningal vetrigaramaga internet recharge seidhu-vitteergal.");
				break;
				case 2:
					printf("\n Ningal vetrigaramaga top-up recharge seidhu-vitteergal.");
				break;
				case 3:
					printf("\n Ningal vetrigaramaga Special recharge seidhu-vitteergal.");
				break;
				default:
					printf("\n Invalid Number.");	
			}
		break;
		
		default:
			printf("Invalid Number.");
	}
}
