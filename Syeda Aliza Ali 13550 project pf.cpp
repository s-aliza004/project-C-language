#include<stdio.h>
#include<conio.h>
#include<time.h>
void cosmeticstore();//function declaration
void printline();//function declaration 
int main()
{
  printf("\nWaiting...........\n");
  printf("\n\tWELCOME TO THE COSMETIC STORE BY ONLINE ORDERING\n");
  printline(); 	 //function calling
  cosmeticstore();//function calling
	return 0;
}
 void printline() //function definition
 {
 int i;
 for(i=0;i<=88;i++)
 {
 	printf("*");  
}
}
 void cosmeticstore( ) //function definition
{

	char name[40],cityname[70],address[60],ch;
	char item[35][100]={"Eyeliner","Mascara","Eyeshadekit","facepowder","eyebrowpencil"};
	char colour_e[35][100]={"blue","black","brown"};
	char type_m[35][100]={"simple","waterproof"};
	char kind_fp[35][100]={"for oil control","for dry skin"};
	char colour_ep[35][100]={"black","brown"};
	 long long int nmbr=0;
	float quantity,total,amount,tax=5.00,choice,overallamount;
	int colour,choices,c,s1=0,s2=0,s3=0,s4=0,s5=0;
	float s1e=0,s2e=0,s3e=0,s1m=0,s2m=0,s1f=0,s2f=0,se_b1=0,se_b2=0;	
	float price1=150.00,price2=200.00,price3=250.00,price4=400.00,price5=130.00;
	time_t t;
	 time(&t);
do
{

do

	{
	
	printf("\n_________________________________________________________________________________________\n");
	printf("\n\tOUR FIVE PRODUCTS ARE AVAILABLE NOW HERE!\n");
	printline(); 	 //function calling
	printf("\n\tHOW CAN WE HELP YOU?...........\n");
  printline(); 	 //function calling
	printf("\n\t1.Eyeliner\n\t2.Mascara\n\t3.Eyeshadekit\n\t4.facepowder\n\t5.eyebrowpencil\n\t6.exit\n");
	printline();
	printf("\n\tEnter your choice: ");
	scanf("%f",&choice);
	printline();
	
if(1==choice)
	{
		printf("\n\tYOU CHOSEN THIS ITEM!!!!!\n");
		printf("\n\tthe price of eyeliner is Rs.150\n");
	  printline(); 	 //function calling
	  printf("\n\tThe three colours of eyeliner are available now!\n");
    printline(); 	 //function calling
		printf("\n\t1.blue\n\t2.black\n\t3.brown\n\t4.exit\n");
		printline(); 	 //function calling
		printf("\n\tEnter your colour you want: ");
		scanf("%d",&colour);
		printline();
	
		switch(colour)
		{
			case 1:
					    
		printf("\n\tYOU CHOSEN BLUE COLOUR!!!!!\n");
	  printline(); 	 //function calling	
		printf("\n\tEnter your eyeliner quantity:");
		scanf("%f",&quantity);
		s1e=price1*quantity;
		printline(); 	 //function calling
		printf("\n\t item\t\tcolour\tprice\tquantity\n");
		printline();
		printf("\n\t %s\t%s\t150\t%f\n",item[0],colour_e[0],quantity);
		printline();		
		break;
		case 2:		    
		printf("\n\tYOU CHOSEN BLACK COLOUR!!!!!\n");
		printline(); 	 //function calling
		printf("\n\tEnter your eyeliner quantity:");
		scanf("%f",&quantity);
		s2e=price1*quantity;
		printline(); 	 //function calling
		printf("\n\t item\t\tcolour\tprice\tquantity\n");
		printline();		
		printf("\n\t %s\t%s\t150\t%f\n",item[0],colour_e[1],quantity);
		printline();		
		break;	
		case 3:    
		printf("\n\tYOU CHOSEN BROWN COLOUR!!!!!\n");
	  printline(); 	 //function calling	
		printf("\n\tEnter your eyeliner quantity:");
		scanf("%f",&quantity);
		s3e=price1*quantity;
		printline(); 	 //function calling
		printf("\n\titem\t\tcolour\tprice\tquantity\n");
		printline();		
		printf("\n\t%s\t%s\t150\t%f\n",item[0],colour_e[2],quantity);
		printline();		
    break;
		default:
		printf("\n\tWELCOME BACK THERE!");
    cosmeticstore();
		}
	}
	else if(2==choice)
	{
		printf("\n\tYOU CHOSEN THIS ITEM!!!!!\n");	
	  printline(); 	 //function calling		
		printf("\n\tthe price of Mascara is Rs.200\n");
		printline(); 	 //function calling
		printf("\n\tThe two types of mascara are available now!\n\t1.simple\n\t2.waterprooof\n\t3.exit\n");
		printline(); 	 //function calling
		printf("\n\tWhich mascara do you want?\n");
		printline(); 	 //function calling
		printf("\n\tEnter your choice:");
		scanf("%d",&choices);
		printline();

		if(choices==1)
		{
		printf("\n\tYOU CHOSEN SIMPLE MASCARA!!!!!\n");
	  printline(); 	 //function calling		
  	printf("\n\tEnter your Mascara quantity:");
		scanf("%f",&quantity);
		s1m=price2*quantity;
		printline(); 	 //function calling
		printf("\n\titem\t\ttype\tprice\tquantity\n");
		printline();		
		printf("\n\t%s\t\t%s\t200\t%f\n",item[1],type_m[0],quantity);
		printline(); 	 //function calling
    
	}
	
	else if(choices==2)
		{
		printf("\n\tYOU CHOSEN WATERPROOF MASCARA!!!!!\n");
	  printline(); 	 //function calling	
		printf("\n\tEnter your Mascara quantity:");
		scanf("%f",&quantity);
		s2m=price2*quantity;
		printline(); 	 //function calling
		printf("\n\titem\t\ttype\t\tprice\tquantity\n");
		printline();
		printf("\n\t%s\t\t%s\t200\t%f\n",item[1],type_m[1],quantity);	
		printline();			
    
	}
	else
	{
		printf("\n\tWELCOME BACK THERE!");
		cosmeticstore();	
	}

	}
	else if(3==choice)
	{
		printf("\n\tYOU CHOSEN EYESHADEKIT!!!!!\n");
		printline(); 	 //function calling
    printf("\n\tthe price of Eyeshadekit is Rs.250\n");
    printline(); 	 //function calling  
		printf("\n\tEnter your Eyeshadekit quantity: ");
		scanf("%f",&quantity);
		s3=price3*quantity;
		printline(); 	 //function calling
		printf("\n\t item\t\tprice\tquantity\n");
		printline();		
		printf("\n\t %s\t250\t%f\n",item[2],quantity);
		printline();		
    
}
	else if(4==choice)
	{
		printf("\n\tYOU CHOSEN FACEPOWDER!!!!!\n");
	  printline(); 	 //function calling			
    printf("\n\tthe price of facepowder is Rs.400\n");
    printline(); 	 //function calling 
		printf("\n\tthe two kinds of face powder are availabe now!!\n");
		printline();
		printf("\n\t1.for oil controlling\n\t2.for dry skin\n\t3.exit\n");
		printline();
		printf("\n\tEnter your choice you want: ");
		scanf("%d",&choices);
		printline();
	
		switch(choices)
		{
		case 1:
		printf("\n\tYOU CHOSEN OIL CONTROLLING FACEPOWDER!!!!!\n");
	  printline(); 	 //function calling	
    printf("\n\tEnter your facepowder quantity: ");
		scanf("%f",&quantity);
		s1f=price4*quantity;
		printline(); 	 //function calling
		printf("\n\titem\t\tkind\t\tprice\tquantity\n");
		printline();		
		printf("\n\t%s\t%s\t400\t%f\n",item[3],kind_fp[0],quantity);
		printline();		
		break;	
	  case 2:
	  printf("\n\tYOU CHOSEN DRY SKIN FACEPOWDER!!!!!\n");
	  printline(); 	 //function calling  
    printf("\n\tEnter your facepowder quantity: ");
		scanf("%f",&quantity);
		s2f=price4*quantity;
		printline(); 	 //function calling
		printf("\n\t item\t\tkind\t\tprice\tquantity\n");
	  printline(); 	 //function calling	
		printf("\n\t %s\t%s\t400\t%f\n",item[3],kind_fp[1],quantity);
		printline();		   
		break;
		default:
      printf("\n\tWELCOME BACK THERE!");
			cosmeticstore();
			printline();
	}
}
  	
	else if(5==choice)
	{
		printf("\n\tYOU CHOSEN EYEBROWPENCIL ITEM!!!!!\n");
	  printline(); 	 //function calling			
    printf("\n\tthe price of eyebrowpencil is Rs.130\n");
		printline(); 	 //function calling
    printf("\n\tthe two colour of eyebrowpencil is availabe now!\n");
    printline(); 	 //function calling
		printf("\n\t1.black\n\t2.brown\n\t3.exit\n");
	  printline(); 	 //function calling
    printf("\n\tEnter your colour you want: ");
		scanf("%d",&colour);
		printline(); 	 //function calling

  	switch(colour)
		{
		case 1:
		printf("\n\tYOU CHOSEN BLACK EYEBROWPENCIL COLOUR!!!!!\n");
		printline(); 	 //function calling
	  printf("\n\tEnter your eyebrow quantity: ");
		scanf("%f",&quantity);	
		se_b1=price5*quantity;
		printline(); 	 //function calling
		printf("\n\t item\t\tcolour\tprice\tquantity\n");
		printline();		
		printf("\n\t %s\t%s\t200\t%f\n",item[4],colour_ep[0],quantity);
		printline();		
    
		break;
		case 2:
		printf("\n\tYOU CHOSEN BROWN EYEBROWPENCIL COLOUR!!!!!\n");
		printline(); 	 //function calling
	  printf("\n\tEnter your eyebrow quantity: ");
		scanf("%f",&quantity);	
		se_b2=price5*quantity;
		printline(); 	 //function calling
		printf("\n\t item\t\tcolour\tprice\tquantity\n");
		printline();		
		printf("\n\t %s\t%s\t200\t%f\n",item[4],colour_ep[1],quantity);
		printline();		
    break;     
    default:
    printf("\n\tWELCOME BACK THERE!");
    cosmeticstore();
    printline();
   }
 }
  
   else
	{
    printf("\n\tSorry!your's desire is not available here!!!\n");
		printline();
    printf("\n\tWELCOME BACK THERE!");
    cosmeticstore();
}
  printf("\n\tDO YOU WANT TO ORDER ANOTHER THING if you interested  so press 'y' otherwise 'n'");
  scanf("%s",&ch);
  printf("\n");
}
 while(ch=='y');

 	printline(); 
	printf("\n\tTHANKS FOR ORDERING!!!\n");
	printline();	
	printf("\n\tYOUR'S INFORMATION DATA ARE REQUIRED HERE!!\n");
	printline();
	printf("\n\tPlease enter your name:");
	scanf("%s",&name);
	printf("\n\tPlease enter your city name:");
	scanf("%s",&cityname);
	printf("\n\tPlease enter your address: ");
	scanf("%s",&address);
	printf("\n\tPlease enter your phone number:");
	scanf("%lld",&nmbr);
  printf("\n\tYour's desired order will be delivered in 2 days!!!\n");
  printf("\n\tYour's information data has been recorded now!\n");
	printline(); 
	printf("\n\tYour's order has been confirmed now!!\n"); 
  printf("\n\tDo you want to order another anything(y/n)?: ");
	scanf("%s",&ch);
	printf("\n");

	}
	while(ch=='y');
	s1=s1e+s2e+s3e; //for eyeliner
	s2=s1m+s2m;     //for mascara
	s4=s1f+s2f;    //for facepowder
	s5=se_b1+se_b2; //for eyebrow
	total=s1+s2+s3+s4+s5; 
	overallamount=total+tax;
	printline(); 	 //function calling
	printf("\n\tAfter tax your overallmount is=Rs.%.2f\n",overallamount);	
	printline();
  printf("\n\t####BUYER'S Details####\n");
	printline();
	printf("\n\tCustomer's name:%s\n",name);
	printf("\n\tCustomer's cityname:%s\n",cityname);
	printf("\n\tCustomer's address:%s\n",address);
	printf("\n\tCustomer's cellnumber:%lld\n",nmbr);
	printf("\n\tYour's overall amount of ordered!Rs.%.2f\n",overallamount);
	printf("\n\tCustomer's ordered time:%s\n",ctime(&t));
  printline(); 	 //function calling
  printf("\n\tTHANKS FOR CONTACT US!!\n");
	printline();
}





