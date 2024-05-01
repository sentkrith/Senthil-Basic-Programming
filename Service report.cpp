# include<stdio.h>
# include<string.h>
# include<ctype.h>
int main()
{
	char vehicle_type[50];
	printf("Enter the vehicle type");
	fgets(vehicle_type,sizeof(vehicle_type),stdin);
	if(strcmp(vehicle_type,"Car\n")==0)
	{
	int cust_no;
	long long ph_no;
	int mileage;
	char dateofpurchase[50];
	char name[50];
	char vehicle_name[30];
	char problem[40];
	int amount=0;
	printf("Enter the customer_id: ");
	scanf("%d",&cust_no);
	printf("Enter the phone no of the customer: ");
	scanf("%lld",&ph_no);
	printf("Enter the mileage of the vehicle: ");
	scanf("%d",&mileage);
	getchar();
	printf("Date of purchase: ");
	fgets(dateofpurchase,sizeof(dateofpurchase),stdin);
	printf("Enter the customer name: ");
	fgets(name,sizeof(name),stdin);
	printf("Enter thevehiclename: ");
	fgets(vehicle_name,sizeof(vehicle_name),stdin);
	printf("Enter the vehicle problem: ");
	printf("Before entering the vehicle problem add word 'issue' at last position of the word\n ");
	fgets(problem,sizeof(problem),stdin);
	
	if(strcmp(problem,"Engine oil issue\n")==0)
	{
		amount = 5000;
	}
	if(strcmp(problem,"Tyre puncture issue\n")==0)
	{
		amount = 150;
	}
	if(strcmp(problem,"Speedometer malfunction issue\n")==0)
	{
		amount = 500;
	}
	if(strcmp(problem,"Breakage of glass issue\n")==0)
	{
		amount = 1500;
	}
	if(strcmp(problem,"Headlight malfunction issue\n")==0)
	{
		amount = 330;
	}
	if(strcmp(problem,"Fuel leakage\n")==0)
	{
		amount = 440;
	}
	if(strcmp(problem,"Break malfunction issue\n")==0)
	{
		amount = 540;
	}
	if(strcmp(problem,"Gear malfunction issue\n")==0)
	{
		amount = 2000;
	}
	if(strcmp(problem,"Frame breakage issue\n")==0)
	{
		amount = 1200;
	}
	if(strcmp(problem,"Seat cover issue\n")==0)
	{
		amount = 750;
	}
	printf("Service report:\n");
	printf("---------------------\n");
	printf("%d\n%lld\n%d\n",cust_no,ph_no,mileage);
	printf("%s%s%s%s%d",dateofpurchase,name,vehicle_name,problem,amount);
	}
	if(strcmp(vehicle_type,"Bike\n")==0)
	{
		int cust_no;
	long long ph_no;
	int mileage;
	char dateofpurchase[50];
	char name[50];
	char vehicle_name[30];
	char problem[40];
	int amount=0;
	printf("Enter the customer_id: ");
	scanf("%d",&cust_no);
	printf("Enter the phone no of the customer: ");
	scanf("%lld",&ph_no);
	printf("Enter the mileage of the vehicle: ");
	scanf("%d",&mileage);
	getchar();
	printf("Date of purchase: ");
	fgets(dateofpurchase,sizeof(dateofpurchase),stdin);
	printf("Enter the customer name: ");
	fgets(name,sizeof(name),stdin);
	printf("Enter thevehiclename: ");
	fgets(vehicle_name,sizeof(vehicle_name),stdin);
	printf("Enter the vehicle problem: ");
	printf("Before entering the vehicle problem add word 'issue' at last position of the word: ");
	fgets(problem,sizeof(problem),stdin);
	
	if(strcmp(problem,"Engine oil issue\n")==0)
	{
		amount = 1500;
	}
	if(strcmp(problem,"Tyre puncture issue\n")==0)
	{
		amount = 150;
	}
	if(strcmp(problem,"Speedometer malfunction issue\n")==0)
	{
		amount = 200;
	}
	if(strcmp(problem,"Breakage of glass issue\n")==0)
	{
		amount = 700;
	}
	if(strcmp(problem,"Headlight malfunction issue\n")==0)
	{
		amount = 180;
	}
	if(strcmp(problem,"Fuel leakage\n")==0)
	{
		amount = 250;
	}
	if(strcmp(problem,"Break malfunction issue\n")==0)
	{
		amount = 230;
	}
	if(strcmp(problem,"Gear malfunction issue\n")==0)
	{
		amount = 100;
	}
	if(strcmp(problem,"Frame breakage issue\n")==0)
	{
		amount = 1000;
	}
	if(strcmp(problem,"Seat cover issue\n")==0)
	{
		amount = 150;
	}
	printf("Service report:\n");
	printf("---------------------\n");
	printf("%d\n%lld\n%d\n",cust_no,ph_no,mileage);
	printf("%s%s%s%s%d",dateofpurchase,name,vehicle_name,problem,amount);
	}
	if(strcmp(vehicle_type,"Scooter\n")==0)
	{
	  int cust_no;
	long long ph_no;
	int mileage;
	char dateofpurchase[50];
	char name[50];
	char vehicle_name[30];
	char problem[40];
	int amount=0;
	printf("Enter the customer_id: ");
	scanf("%d",&cust_no);
	printf("Enter the phone no of the customer: ");
	scanf("%lld",&ph_no);
	printf("Enter the mileage of the vehicle: ");
	scanf("%d",&mileage);
	getchar();
	printf("Date of purchase: ");
	fgets(dateofpurchase,sizeof(dateofpurchase),stdin);
	printf("Enter the customer name: ");
	fgets(name,sizeof(name),stdin);
	printf("Enter thevehiclename: ");
	fgets(vehicle_name,sizeof(vehicle_name),stdin);
	printf("Enter the vehicle problem: ");
	printf("Before entering the vehicle problem add word 'issue' at last position of the word: ");
	fgets(problem,sizeof(problem),stdin);
	
	if(strcmp(problem,"Engine oil issue\n")==0)
	{
		amount = 1200;
	}
	if(strcmp(problem,"Tyre puncture issue\n")==0)
	{
		amount = 120;
	}
	if(strcmp(problem,"Speedometer malfunction issue\n")==0)
	{
		amount = 180;
	}
	if(strcmp(problem,"Breakage of glass issue\n")==0)
	{
		amount = 190;
	}
	if(strcmp(problem,"Headlight malfunction issue\n")==0)
	{
		amount = 150;
	}
	if(strcmp(problem,"Fuel leakage\n")==0)
	{
		amount = 170;
	}
	if(strcmp(problem,"Break malfunction issue\n")==0)
	{
		amount = 110;
	}
	if(strcmp(problem,"Frame breakage issue\n")==0)
	{
		amount = 980;
	}
	if(strcmp(problem,"Seat cover issue\n")==0)
	{
		amount = 450;
	}
	printf("Service report:\n");
	printf("---------------------\n");
	printf("%d\n%lld\n%d\n",cust_no,ph_no,mileage);
	printf("%s%s%s%s%d",dateofpurchase,name,vehicle_name,problem,amount);
	}	
	
}
