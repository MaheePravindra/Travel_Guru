#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<iomanip.h>
#include<fstream.h>
#include<windows.h>
//For test
class Travel
{
	 float pascode;
	 char pasname[40];
	 int vehicle;
	 char destin[40];
	 int Tprice,price,disc;
	 float distance;
	public:
	 int passecode()
	 {
 		return pascode;
 	 }
	 Travel()
	 {
 		pascode=101;
 		strcpy(pasname,"Mahee");
 		Tprice=0;
 		price=0;
 		disc=0;
 		distance=0;
 	 }
 	void calprice(int ,float)
	 {
 	    if(vehicle==1)
		 {
 			if(distance<=500)
 			 price=5000;
 			else if((distance>500)&&(distance<=1000))
			 price=6000;
			else if((distance>1000)&&(distance<=1500))
			 price=8000;
			else if((distance>1500)&&(distance<=2000))
			 price=9000;
			else if(distance>2000)
			 price=12000; 	    
 		 }
		 else if(vehicle==2)
		 {
 			if(distance<=500)
 			 price=2500;
 			else if((distance>500)&&(distance<=1000))
			 price=4000;
			else if((distance>1000)&&(distance<=1500))
			 price=5000;
			else if((distance>1500)&&(distance<=2000))
			 price=6000;
			else if(distance>2000)
			 price=8000; 	    
 		 }
		 else if(vehicle==3)
		 {
 			if(distance<=500)
 			 price=2000;
 			else if((distance>500)&&(distance<=1000))
			 price=3500;
			else if((distance>1000)&&(distance<=1500))
			 price=5000;
			else if((distance>1500)&&(distance<=2000))
			 price=6000;
			else if(distance>2000)
			 price=7500; 	    
 		 }
		 else if(vehicle==4)
		 {
 			if(distance<=500)
 			 price=5500;
 			else if((distance>500)&&(distance<=1000))
			 price=7000;
			else if((distance>1000)&&(distance<=1500))
			 price=9000;
			else if((distance>1500)&&(distance<=2000))
			 price=10000;
			else if(distance>2000)
			 price=13000; 		    
 		 }
 		 discount(price);
	 }
	void discount(float)
	{
		if(price<=2000)
		 Tprice=price-0.05*price;
		
		else if((price>2000)&&(price<=6000))
		 Tprice=price-0.1*price;
		
		else if((price>6000)&&(price<=10000))
		 Tprice=price-0.15*price;
		 
		else if((price>10000)&&(price<=15000))
		 Tprice=price-0.2*price;    	
 	 } 
 	void Input()
	 {
 		cout<<"Enter the Passenger Code=";
 		cin>>pascode;
 		cout<<"Enter the Passenger's name=";
 		cin>>pasname;
 		cout<<"Choose vehicle type:";
	    cout<<"\nCAR-1\nBUS-2\nTRAIN-3\nPLANE-4\n";
	    cout<<"Enter the number provided with the 
             vehicle type=";
	    cin>>vehicle;
	    cout<<"Enter your Destination=";
	    cin>>destin;
	    cout<<"Enter total distance to be travelled=";
	    cin>>distance;
	    calprice(vehicle,distance);
 	 }
	void Display()
	{
		cout<<"Your Passenger code = "<<pascode<<endl;
		cout<<"Passenger name = "<<pasname<<endl;
	    if (vehicle==1)
		 cout<<"Vehicle type = Car"<<endl;
		else if (vehicle==2)
		 cout<<"Vehicle type = Bus"<<endl;
	    else if ( vehicle==3)
		 cout<<"Vehicle type = Train"<<endl;
	   else if (vehicle==4)
		 cout<<"Vehicle type = Plane"<<endl;
	 	cout<<"Your Destination = "<<destin<<endl;
	  cout<<"Price = "<<price<<endl;  
	  cout<<"Total Amount to be paid  after discount ="        
          <<Tprice<<endl;		 
	}   
};
class Passenger :public Travel
{
		int Pno;
		char uname[40],password[16],fname[40],  
 lname[40],passcode[16];
	public:
	   char* usname()
	 {
		return uname;
	 }
	   char* pa55word()
	 {
		return password;
	 }
	  Passenger()
	  {
 		strcpy(fname,"Smit");
 		strcpy(lname,"bhandari");
  		strcpy(uname,"Aditya");
  		strcpy(password,"1234");
  	  }
	void Getinfo()
	{
		cout<<"Enter your first name = ";
		cin>>fname;
		cout<<"Enter your last name = ";
		cin>>lname;
		cout<<"Enter your username = ";
		cin>>uname;
		cout<<"Enter your password = ";
		cin>>password;
		cout<<"Confirm password = ";
		cin>>passcode;
		  if(strcmpi(password,passcode)==0)
		 {
		  cout<<"Account has been created"<<endl;
		  Sleep(2000);
		 }
		  else 
	           {
		 cout<<"Something went wrong"<<endl;		
	           }
	}
	void Showinfo()
	{
		cout<<"Name = "<<fname<<endl;
		cout<<"Your username = "<<uname<<endl;
	}		
};
class Passenger_info: public Passenger
{
 int pno;
 char Mobno[12];
 char Gender[6];
 int age;
    public:
       Passenger_info()
 	{
 	 pno=001;
 	 strcpy(Mobno,"7359433261");
 	 strcpy(Gender,"male");
 	 age=18;	
 	}
 void Details_input()
 {
 	cout<<"Enter your passenger number = ";
 	cin>>pno;
 	cout<<"Enter your mobile number = ";
 	cin>>Mobno;
 	cout<<"Enter your Gender = ";
 	cin>>Gender;
 	cout<<"Enter your age = ";
 	cin>>age;
 }		
};
class Hotel
{
	int pascodee,htltype,fmlm,tpriceee,conti,tpriceeec;
	long int priceee, priceeec;
	char pasnamee[20], country, city[20];
	char ans7;
 public:
      int ppascodee()
	{
		return pascodee;
	} 
    void docalc(char,int)
    {
       if(country=='A')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	{priceee=25000;
 	    	priceeec=25000*0.098;}
 	    	else if(fmlm>=5)
 	    	{priceee=50000;
 	    	priceeec=50000*0.098;} 
	   }
	   else if(country=='B')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	{priceee=25000;
 	    	priceeec=25000*0.11;}
 	    	else if(fmlm>=5)
 	    	{priceee=50000;
 	    	priceeec=50000*0.11;} 
	   }
	   else if(country=='C')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	 {priceee=25000;
 	    	  priceeec=25000*1;}
 	    	else if(fmlm>=5)
 	    	 {priceee=50000;
 	    	 priceeec=50000*1;} 
	   }
	   else if(country=='D')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	 {priceee=25000;
 	    	 priceeec=25000*1.52;}
 	    	else if(fmlm>=5)
 	    	 {priceee=50000;
 	    	 priceeec=50000*1.52;} 
	   }
	   else if(country=='E')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	 {priceee=25000;
 	    	 priceeec=25000*1.60;}
 	    	else if(fmlm>=5)
 	    	 {priceee=50000;
 	    	 priceeec=50000*1.60;} 
	   }
	   else if(country=='F')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	 {priceee=25000;
 	    	 priceeec=25000*0.058;}
 	    	else if(fmlm>=5)
 	    	 {priceee=50000;
 	    	 priceeec=50000*0.058;} 
	   }
	   else if(country=='G')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	 {priceee=25000;
 	    	 priceeec=25000*0.051;}
 	    	else if(fmlm>=5)
 	    	 {priceee=50000;
 	    	 priceeec=50000*0.051;} 
	   }
	   else if(country=='H')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	 {priceee=25000;
 	    	 priceeec=25000*0.89;}
 	    	else if(fmlm>=5)
 	    	 {priceee=50000;
 	    	 priceeec=50000*0.89;} 
	   }
	   else if(country=='I')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	 {priceee=25000;
 	    	 priceeec=25000*0.052;}
 	    	else if(fmlm>=5)
 	    	 {priceee=50000;
 	    	 priceeec=50000*0.052;} 
	   }
	   else if(country=='J')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	 {priceee=25000;
 	    	 priceeec=25000*0.019;}
 	    	else if(fmlm>=5)
 	    	 {priceee=50000;
 	    	 priceeec=50000*0.019;} 
	   }
	   else if(country=='K')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	 {priceee=25000;
 	    	 priceeec=25000*0.051;}
 	    	else if(fmlm>=5)
 	    	 {priceee=50000;
 	    	 priceeec=50000*0.051;} 
	   }
	   else if(country=='L')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	 {priceee=25000;
 	    	 priceeec=25000*0.013;}
 	    	else if(fmlm>=5)
 	    	 {priceee=50000;
 	    	 priceeec=50000*0.013;} 
	   }
	   else if(country=='M')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	 {priceee=25000;
 	    	 priceeec=25000*0.014;}
 	    	else if(fmlm>=5)
 	    	 {priceee=50000;
 	    	 priceeec=50000*0.014;} 
	   }
	   else if(country=='N')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	 {priceee=25000;
 	    	 priceeec=25000*0.018;}
 	    	else if(fmlm>=5)
 	    	 {priceee=50000;
 	    	 priceeec=50000*0.018;} 
	   }
	   else if(country=='O')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	 {priceee=25000;
 	    	 priceeec=25000*1.96;}
 	    	else if(fmlm>=5)
 	    	 {priceee=50000;
 	    	 priceeec=50000*1.96;} 
	   }
	   else if(country=='P')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	 {priceee=25000;
 	    	 priceeec=25000*0.27;}
 	    	else if(fmlm>=5)
 	    	 {priceee=50000;
 	    	 priceeec=50000*0.27;} 
	   }
	   else if(country=='Q')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	 {priceee=25000;
 	    	 priceeec=25000*0.014;}
 	    	else if(fmlm>=5)
 	    	 {priceee=50000;
 	    	 priceeec=50000*0.014;} 
	   }
	   else if(country=='R')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	 {priceee=25000;
 	    	 priceeec=25000*0.014;}
 	    	else if(fmlm>=5)
 	    	 {priceee=50000;
 	    	 priceeec=50000*0.014;} 
	   }
	   else if(country=='S')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	 {priceee=25000;
 	    	 priceeec=25000*0.83;}
 	    	else if(fmlm>=5)
 	    	 {priceee=50000;
 	    	 priceeec=50000*0.83;} 
	   }
	   else if(country=='T')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	 {priceee=25000;
 	    	 priceeec=25000*0.058;}
 	    	else if(fmlm>=5)
 	    	 {priceee=50000;
 	    	 priceeec=50000*0.058;} 
	   }
	   else if(country=='U')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	 {priceee=25000;
 	    	 priceeec=25000*10.54;}
 	    	else if(fmlm>=5)
 	    	 {priceee=50000;
 	    	 priceeec=50000*10.54;} 
	   } 
	   else if(country=='V')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	 {priceee=25000;
 	    	 priceeec=25000*46.63;}
 	    	else if(fmlm>=5)
 	    	 {priceee=50000;
 	    	 priceeec=50000*46.63;} 
	   }
	   else if(country=='W')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	 {priceee=25000;
 	    	 priceeec=25000*0.52;}
 	    	else if(fmlm>=5)
 	    	 {priceee=50000;
 	    	 priceeec=50000*0.52;} 
	   }
	   else if(country=='X')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	 {priceee=25000;
 	    	 priceeec=25000*0.23;}
 	    	else if(fmlm>=5)
 	    	 {priceee=50000;
 	    	 priceeec=50000*0.23;} 
	   }
	   else if(country=='Y')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	 {priceee=25000;
 	    	 priceeec=25000*0.077;}
 	    	else if(fmlm>=5)
 	    	 {priceee=50000;
 	    	 priceeec=50000*0.077;} 
	   }
	   else if(country=='Z')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	 {priceee=25000;
 	    	 priceeec=25000*1.43;}
 	    	else if(fmlm>=5)
 	    	 {priceee=50000;
 	    	 priceeec=50000*1.43;} 
	   }
	   else if(country=='a')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	 {priceee=25000;
 	    	 priceeec=25000*5.06;}
 	    	else if(fmlm>=5)
 	    	 {priceee=50000;
 	    	 priceeec=50000*5.06;} 
	   }
	      else if(country=='b')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	 {priceee=25000;
 	    	 priceeec=25000*0.21;}
 	    	else if(fmlm>=5)
 	    	 {priceee=50000;
 	    	 priceeec=50000*0.21;} 
	   }
	      else if(country=='c')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	 {priceee=25000;
 	    	 priceeec=25000*0.19;}
 	    	else if(fmlm>=5)
 	    	 {priceee=50000;
 	    	 priceeec=50000*0.19;} 
	   }
	   else if(country=='d')
	   { 	
 	    	if((fmlm>=1)&&(fmlm<=4))
 	    	 {priceee=25000;
 	    	 priceeec=25000*0.020;}
 	    	else if(fmlm>=5)
 	    	 {priceee=50000;
 	    	 priceeec=50000*0.020;} 
	   }
	   else
	     cout<<"ERROR..........."<<endl;
		dodisc(priceee,priceeec);    
    }
    void dodisc(float,float)
    {
    	if(priceee<=25000)
    	 {tpriceee=priceee-0.10*priceee;
    	 tpriceeec=priceeec-0.10*priceeec;}
    	else if(priceee>25000)
    	 {tpriceee=priceee-0.15*priceee;
    	 tpriceeec=priceeec-0.15*priceeec;}
    }
	void inputt()
	{
		cout<<"Enter the Passenger Code=";
 		cin>>pascodee;
 		cout<<"Enter the Passenger's name=";
 		cin>>pasnamee;
 	    cout<<"Have you seen the trip planner??"<<endl;		
         cout<<"select y for yes=";
cin>>ans7;
 		if(ans7=='y')
 		{
 		   cout<<"You can choose your Place for 
 				  stay"<<endl;
 		   cout<<"1. Asia"<<endl;
 		   cout<<"2. Europe"<<endl;
 		   cout<<"3. North America"<<endl;
 		   cout<<"4. South America"<<endl;
 		   cout<<"5. Africa"<<endl;
 		   cout<<"6. Australia"<<endl;
 		   cout<<"7. Antarctica"<<endl;
 		   cout<<"Enter the No. corresponding to the 
      Continent in which you have to live   
       =";
 		   cin>>conti;
 		   if (conti==1)
 		   {
   		 	   cout<<"You can select from the 
 following Countries"<<endl;
   		 	   cout<<"A. China"<<endl;
   		 	   cout<<"B. Hong Kong"<<endl;
   		 	   cout<<"C. India"<<endl;
   		 	   cout<<"D. Japan"<<endl;
   		 	   cout<<"E. Nepal"<<endl;
   		 	   cout<<"F. Malaysia"<<endl;
   		 	   cout<<"G. Qatar"<<endl;
   		 	   cout<<"H. Russia"<<endl;
   		 	   cout<<"I. Saudi Arabia"<<endl;
   		 	   cout<<"J. Singapore"<<endl;
   		 	   cout<<"K. UAE"<<endl;
 		   }
   		   else if(conti==2)
			   {
   		 	      cout<<"L. Europe"<<endl;
   		       }
                        else if(conti==3)
		   {
   		 	   cout<<"You can select from the 
  following Countries"<<endl;
   		 	   cout<<"M. Bermuda"<<endl;
   		 	   cout<<"N. Canada"<<endl;
   		 	   cout<<"O. Jamaica"<<endl;
   		 	   cout<<"P. Mexico"<<endl;
   		 	   cout<<"Q. Panama"<<endl;
   		 	   cout<<"R. USA"<<endl;
 		   }
			else if(conti==4)
		   {
   		 	   cout<<"You can select from the 
                   following Countries"<<endl;
   		 	   cout<<"S. Argentina"<<endl;
   		 	   cout<<"T. Brazil"<<endl;
   		 	   cout<<"U. Chile"<<endl;
   		 	   cout<<"V. Colombia"<<endl;
   		 	   cout<<"W. Uruguay"<<endl;
 		   }   
 		   else if(conti==5)
		   {
cout<<"You can select from the  
       following Countries"<<endl;
   		 	   cout<<"X. Egypt"<<endl;
   		 	   cout<<"Y. Ghana"<<endl;
   		 	   cout<<"Z. Kenya"<<endl;
   		 	   cout<<"a. Nigeria"<<endl;
   		 	   cout<<"b. South Africa"<<endl;
   		 	   cout<<"c. Zambia"<<endl;
 		   }
 		   else if(conti==6)
		   {
cout<<"You can select from the 
       following Countries"<<endl;
   		 	   cout<<"d. Australia"<<endl;
 		   }
 		   else if(conti==7)
 		   {
   		       cout<<"We dont provide Services in  
 Antartica"<<endl;	
   		   }
 		   cout<<"Enter the Alphabet either in Capital 
  or Small Letter corresponding to the 
  Country which you want = ";  
            cin>>country;
   		 cout<<"Enter the City you want to stay in = ";
   		   cin>>city;
 		   cout<<"Please enter how many family members 
  do you have ";
 		   cin>>fmlm;
	       docalc(country,fmlm);
 		}
 		else
 		cout<<"First please see the Trip Planner";
	}
	void displayy()
	{
cout<<"Your Passenger code is=" 
    <<pascodee<<endl;
		cout<<"Passanger Name is ="<<pasnamee<<endl;
		cout<<"your Hotel City is ="<<city<<endl;
		cout<<right<<setw(120)<<setfill('_')<<"_"<<endl;
		cout<<"Price for the Room is = ";                          
         cout<<priceee<<"Rupees"<<endl<<"OR"<<endl;
		if(country=='A')
		cout<<"Price for the Room is="<<priceeec<<" 
   Chinese Yuan"<<endl;
		else if(country=='B')
		cout<<"Price for the Room is="<<priceeec<<" 
   Hong Kong Dollar "<<endl;
		else if(country=='D')
		cout<<"Price for the Room is="<<priceeec<<" 
   Japanese Yen"<<endl;
		else if(country=='E')
		cout<<"Price for the Room is="<<priceeec<<" 
  			   Nepalese Rupees"<<endl;
		else if(country=='F')
		cout<<"Price for the Room is="<<priceeec<<" 
 			   Malaysian Ringgit"<<endl;
		else if(country=='G')
		cout<<"Price for the Room is="<<priceeec<<" 
   Qatari Rial"<<endl;
		else if(country=='H')
		cout<<"Price for the Room is="<<priceeec<<" 
   Russian Ruble"<<endl;
		else if(country=='I')
		cout<<"Price for the Room is="<<priceeec<<" 
   Saudi Riyal"<<endl;
		else if(country=='J')
		cout<<"Price for the Room is="<<priceeec<<" 
   Singapore Dollar"<<endl;
		else if(country=='K')
		cout<<"Price for the Room is="<<priceeec<<" 
   United Arab Emirates Dirham"<<endl;
		else if(country=='L')
		cout<<"Price for the Room is="<<priceeec<<" 
   Euro"<<endl;
		else if(country=='M')
		cout<<"Price for the Room is="<<priceeec<<" 
   Bermudan Dollar"<<endl;
		else if(country=='N')
		cout<<"Price for the Room is="<<priceeec<<" 
   Canadian Dollar"<<endl;
		else if(country=='O')
		cout<<"Price for the Room is="<<priceeec<<" 
   Jamaican Dollar"<<endl;
		else if(country=='P')
		cout<<"Price for the Room is="<<priceeec<<" 
   Mexican Peso"<<endl;
		else if(country=='Q')
		cout<<"Price for the Room is="<<priceeec<<" 
   Panamanian Balboa"<<endl;
		else if(country=='R')
		cout<<"Price for the Room is="<<priceeec<<" 
   United States Dollar"<<endl;
		else if(country=='S')
		cout<<"Price for the Room is="<<priceeec<<" 
   Argentine Peso"<<endl;
		else if(country=='T')
		cout<<"Price for the Room is="<<priceeec<<" 
   Brazilian Real"<<endl;
		else if(country=='U')
		cout<<"Price for the Room is="<<priceeec<<" 
   Chilean Peso"<<endl;
		else if(country=='V')
		cout<<"Price for the Room is="<<priceeec<<" 
   Colombian Peso"<<endl;
		else if(country=='W')
		cout<<"Price for the Room is="<<priceeec<<" 
   Uruguayan Peso"<<endl;
		else if(country=='X')
		cout<<"Price for the Room is="<<priceeec<<" 
   Egyptian Pound"<<endl;
		else if(country=='Y')
		cout<<"Price for the Room is="<<priceeec<<" 
   Ghanaian Cedi"<<endl;
		else if(country=='Z')
		cout<<"Price for the Room is="<<priceeec<<" 
   Kenyan Shilling"<<endl;
		else if(country=='a')
		cout<<"Price for the Room is="<<priceeec<<" 
   Nigerian Naira"<<endl;
		else if(country=='b')
		cout<<"Price for the Room is="<<priceeec<<" 
   South African Rand"<<endl;
		else if(country=='c')
		cout<<"Price for the Room is="<<priceeec<<" 
   Zambian Kwacha"<<endl;
		else if(country=='d')
		cout<<"Price for the Room is="<<priceeec<<" 
   Australian Dollar"<<endl;
	cout<<right<<setw(120)<<setfill('_')<<"_"<<endl;
cout<<"Total Price for the Room after 
  Discount is ="<<tpriceee<<          
                       "Rupees"<<endl<<"OR"<<endl;
                       if(country=='A')
		cout<<"Price for the Room after Discount 
   is="<<tpriceeec<<" Chinese Yuan"<<endl;
		else if(country=='B')
		cout<<"Price for the Room after Discount        
            is="<<tpriceeec<<" Hong Kong Dollar"<<endl;
		else if(country=='D')
		cout<<"Price for the Room after Discount    
                is="<<tpriceeec<<" Japanese Yen"<<endl;
		else if(country=='E')
		cout<<"Price for the Room after Discount  
    	        is="<<tpriceeec<<" Nepalese Rupees"<<endl;
		else if(country=='F')
		cout<<"Price for the Room after Discount 
    is="<<tpriceeec<<"Malaysian Ringgit"<<endl;
		else if(country=='G')
		cout<<"Price for the Room after Discount 
is="<<tpriceeec<<" Qatari Rial"<<endl;
		else if(country=='H')
		cout<<"Price for the Room after Discount 
   is="<<tpriceeec<<"Russian Ruble"<<endl;
		else if(country=='I')
		cout<<"Price for the Room after Discount 
   is="<<tpriceeec<<"Saudi Riyal"<<endl;
		else if(country=='J')
		cout<<"Price for the Room after Discount 
is="<<tpriceeec<<"Singapore Dollar"<<endl;
		else if(country=='K')
		cout<<"Price for the Room after Discount 
   is="<<tpriceeec<<"United Arab Emirates  
   Dirham"<<endl;
		else if(country=='L')
		cout<<"Price for the Room after Discount 
                is="<<tpriceeec<<"Euro"<<endl;
		else if(country=='M')
		cout<<"Price for the Room after Discount 
      is="<<tpriceeec<<"Bermudan Dollar"<<endl;
		else if(country=='N')
		cout<<"Price for the Room after Discount 
 is="<<tpriceeec<<"Canadian Dollar"<<endl;
		else if(country=='O')
		cout<<"Price for the Room after Discount 
 is="<<tpriceeec<<"Jamaican Dollar"<<endl;
		else if(country=='P')
		cout<<"Price for the Room after Discount 
     	    is="<<tpriceeec<<"Mexican Peso"<<endl;
		else if(country=='Q')
		cout<<"Price for the Room after Discount 
    is="<<tpriceeec<<"Panamanian Balboa"<<endl;
		else if(country=='R')
		cout<<"Price for the Room after Discount 
 is="<<tpriceeec<<"United States Dollar"<<endl;
		else if(country=='S')
		cout<<"Price for the Room after Discount 
       is="<<tpriceeec<<"Argentine Peso"<<endl;
		else if(country=='T')
		cout<<"Price for the Room after Discount 
  is="<<tpriceeec<<"Brazilian Real"<<endl;
		else if(country=='U')
		cout<<"Price for the Room after Discount 
    is="<<tpriceeec<<"Chilean Peso"<<endl;
		else if(country=='V')
		cout<<"Price for the Room after Discount 
is="<<tpriceeec<<"Colombian Peso"<<endl;
		else if(country=='W')
		cout<<"Price for the Room after Discount 
is="<<tpriceeec<<"Uruguayan Peso"<<endl;
		else if(country=='X')
		cout<<"Price for the Room after Discount 
is="<<tpriceeec<<"Egyptian Pound"<<endl;
		else if(country=='Y')
		cout<<"Price for the Room after Discount 
is="<<tpriceeec<<"Ghanaian Cedi"<<endl;
		else if(country=='Z')
		cout<<"Price for the Room after Discount 
is="<<tpriceeec<<"Kenyan Shilling"<<endl;
		else if(country=='a')
		cout<<"Price for the Room after Discount 
is="<<tpriceeec<<"Nigerian Naira"<<endl;
		else if(country=='b')
		cout<<"Price for the Room after Discount 
  is="<<tpriceeec<<" South African Rand"<<endl;
		else if(country=='c')
		cout<<"Price for the Room after Discount 
is="<<tpriceeec<<"Zambian Kwacha"<<endl;
		else if(country=='d')
		cout<<"Price for the Room after Discount 
    is="<<tpriceeec<<"Australian Dollar"<<endl;
		else 
		cout<<"ERROR..........................."<<endl;
		cout<<right<<setw(120)<<setfill('_')<<"_"<<endl;
	}
};
 
main()
{       
        int choice,xy,l,z,m,n;
        char ans3='y',ans4='y';
        do{
		system("color 0D");
		system("cls");
		cout<<"\n"<<right<<setw(63)<<setfill('*')<<"Travel  
  Guru"<<right<<setw(57)<<setfill('*')<<"*"<<endl;
		cout<<right<<setw(120)<<setfill('_')<<"_"<<endl;
		cout<<right<<setw(23)<<setfill(' ')  
<<"1.SIGNUP"<<endl;
		cout<<right<<setw(25)<<setfill(' ') 
<<"\n\t\t2.LOGIN"<<endl;
	cout<<right<<setw(120)<<setfill('_')<<"_"<<endl;
		Passenger P;
  		Passenger_info P9;
		fstream f; 
		cout<<"select your choice = ";
		cin>>choice;	
  switch(choice)
	{      
	case 1: {           	
				  f.open("Travel.txt",ios::out);
				    P9.Details_input(); 
					P.Getinfo();
					f.write((char*)&P,sizeof(P));
				  }break;
	case 2: { 		              
	                char usename[40],pass[16];
					cout<<"Enter your username = ";
					cin>>usename;	
	                f.open("Travel.txt",ios::in);
					while(f.read((char*)&P,sizeof(P)))
					{
				   if(strcmp(P.usname(),usename)==0)
				   {
   					cout<<"Enter your password = ";
   						 cin>>pass;
   						   if(strcmp(P.pa55word(),pass)==0)
   						    {
   						    	system("cls");
   						    	system("color C0");
   						    	cout<<"\t\t\t\t\t\tLoading Page";
   						    	cout<<".";
   						    	Sleep(1000);
   						    	cout<<".";
   						    	Sleep(1000);
   						    	cout<<".";
   						    	Sleep(1000);
   						    	cout<<".";
   						    	Sleep(1000);
   						    	cout<<".";
   						    	Sleep(1000);
   						    	do{
    						    Travel T;
    						    Hotel H;
								fstream F;  	
   						    	int x;
    						    system("cls");
    						    system("color 8B");
cout<<"\n\n\t\t\t\t\t\t***MAIN MENU***"<<endl;
cout<<"\t\t\t\t\t\t1.New Trip or Hotel."<<endl;
cout<<"\t\t\t\t\t\t2.Show travelling history."<<endl;
cout<<"\t\t\t\t\t\t3.Search travelling history."<<endl;
cout<<"\t\t\t\t\t\t4.Delete history."<<endl;
cout<<"\t\t\t\t\t\t5.Modify travelling history."<<endl;
cout<<"\t\t\t\t\t\tSelect your choice=";
cin>>x;
switch(x)
    {
	case 1: {     cout<<"1.Trip Planner"<<endl;
	              cout<<"2.Hotel Planner"<<endl;
	              cout<<"Select your choice = ";
	              cin>>xy;
	    switch(xy)
		{       
case 1: {
         system("color 0A");              
 F.open("NewTravel.txt",ios::out|ios::app|ios::binary);
		  char ans='y';
		  while(ans=='y')
		  {
			T.Input();
			F.write((char*)&T,sizeof(T));
	cout<<"Do you want to add a new trip again...?";
	cin>>ans;
	system("cls");
		  }
			F.close();  
		    }break;
case 2:{  			           
     F.open("Hotel.txt",ios::out|ios::app|ios::binary);
		  char ansc='y';
		  while(ansc=='y')
		  {
			H.inputt();
			F.write((char*)&H,sizeof(H));
	cout<<"Do you want to add a new Place for Hotel 
again...?";
			cin>>ansc;
			system("cls");
		  }
			F.close(); 
		    }break;
		 }
	}break;
case 2: {
              cout<<"1.Trip History"<<endl;
              cout<<"2.Hotel History"<<endl;
              cout<<"Select your choice = ";
              cin>>l;
              switch(l)
              {
        case 1:       	
            {       system("color 0E");
	                F.open("NewTravel.txt",ios::in);
					while(F.read((char*)&T,sizeof(T)))
					{
					 T.Display();
				    }
				     F.close();
            }break;
		case 2: {
			               system("color 0E");
	                F.open("Hotel.txt",ios::in);
					while(F.read((char*)&H,sizeof(H)))
					{
					 H.displayy();
				    }
				     F.close();  
  	            }break;
	              }
     		    }break;
	case 3: {    
	              cout<<"1.Trip Search"<<endl;
	              cout<<"2.Hotel Search"<<endl;
	              cout<<"Select your choice = ";
	              cin>>z;
	              switch(z)
	              {
	              case 1: {
                       system("color 79");
	            int pcode;
		 cout<<"Enter the Passenger code for the Trip 
 				to be searched = ";
		 cin>>pcode;
		  F.open("NewTravel.txt",ios::in);
		  while(F.read((char*)&T,sizeof(T)))
		       {
				     if(T.passecode()==pcode)
				     T.Display();
			   }
			 	F.close();
	            }break;
	              case 2:{
      system("color 79");
	          int hcode;
		      cout<<"Enter the Passenger code for the 
Hotel to be searched = ";
		      cin>>hcode;
			  F.open("Hotel.txt",ios::in);
			  while(F.read((char*)&H,sizeof(H)))
			    {
			         if(H.ppascodee()==hcode)
			         H.displayy();
			       }
			 	F.close();
	               }break;              
	              }
            }break;
	case 4: {   
                  cout<<"1.Delete Trip"<<endl;
	              cout<<"2.Cancel Hotel"<<endl;
	              cout<<"Select your choice = ";
	              cin>>m;
	              switch(m)
              {
        case 1: {   system("color F5");
	                fstream ftemp,x,y;
			int flag=0,pcode;
			ftemp.open("Travelinfo.txt",ios::out);
			cout<<"Enter the passenger code for the 
Trip to be deleted = ";
			cin>>pcode;
			F.open("NewTravel.txt",ios::in);
			while(F.read((char*)&T,sizeof(T)))
			{
			 if(T.passecode()==pcode)
				flag=1;
			 else
			    ftemp.write((char*)&T,sizeof(T));
			 }
			 ftemp.close();
			if (flag==1)
			 cout<<"Record deleted"<<endl;
			else
			 cout<<"Record Not found"<<endl;
			x.open("Travelinfo.txt",ios::in);
			y.open("NewTravel.txt",ios::out);
			while(x.read((char*)&T,sizeof(T)))
			{
			 y.write((char*)&T,sizeof(T));
			}
			x.close();
			y.close();
			F.close();
                 }break;
          case 2:
		         {
         			system("color F5");
	                fstream ftempp,e,r;
			int flag=0,hcode;
			ftempp.open("Hotelinfo.txt",ios::out);
			cout<<"Enter the passenger code for Hotel 
to be deleted = ";
			cin>>hcode;
			F.open("Hotel.txt",ios::in);
			while(F.read((char*)&H,sizeof(H)))
			{
			 if(H.ppascodee()==hcode)
				flag=1;
			 else
				ftempp.write((char*)&H,sizeof(H));
			 }
			 ftempp.close();
			if (flag==1)
			 cout<<"Record deleted"<<endl;
			else
			 cout<<"Record Not found"<<endl;
			e.open("Hotelinfo.txt",ios::in);
			r.open("Hotel.txt",ios::out);
			while(e.read((char*)&H,sizeof(H)))
			{
			 r.write((char*)&H,sizeof(H));
			}
			e.close();
			r.close();
			F.close();
         		 }break;      
	           }		
           }break;
      case 5: {  
cout<<"1.Modify Trip"<<endl;
	             cout<<"2.Modify Hotel History"<<endl;
	             cout<<"Select your choice = ";
	             cin>>n;
	             switch(n)
		          {		 
   case 1:{ 
  system("color E4"); 
		            fstream ftemp,x,y;
			int flag=0,pcode;
			ftemp.open("Travelinfo.txt",ios::out);
			cout<<"Enter the passenger code for the 
Trip to be Modified=";
			cin>>pcode;
			F.open("NewTravel.txt",ios::in);
			while(F.read((char*)&T,sizeof(T)))
			{
			 if(T.passecode()==pcode)
			  {
				T.Input();
				ftemp.write((char*)&T,sizeof(T));
				flag=1;
			  }
			 else
				ftemp.write((char*)&T,sizeof(T));
			 }
			 ftemp.close();
			if (flag==1)
			 cout<<"Record Modified"<<endl;
			else
			 cout<<"Record Not found"<<endl;
			x.open("Travelinfo.txt",ios::in);
			y.open("NewTravel.txt",ios::out);
			while(x.read((char*)&T,sizeof(T)))
			{
			 y.write((char*)&T,sizeof(T));
			}
			x.close();
			y.close();
             F.close();
                 }break;
     case 2: {
                    system("color E4"); 
		            fstream ftempp,e,r;
			int flag=0,hcode;
			ftempp.open("Hotelinfo.txt",ios::out);
			cout<<"Enter the passenger code for Hotel 
                    to be Modified=";
			cin>>hcode;
			F.open("Hotel.txt",ios::in);
			while(F.read((char*)&H,sizeof(H)))
			{
			 if(H.ppascodee()==hcode)
			  {
				H.inputt();
				ftempp.write((char*)&H,sizeof(H));
				flag=1;
			  }
			 else
				ftempp.write((char*)&H,sizeof(H));
			 }
			 ftempp.close();
			if (flag==1)
			 cout<<"Record Modified"<<endl;
			else
			 cout<<"Record Not found"<<endl;
			e.open("Hotelinfo.txt",ios::in);
			r.open("Hotel.txt",ios::out);
			while(e.read((char*)&H,sizeof(H)))
			{
			 r.write((char*)&H,sizeof(H));
			}
			e.close();
			r.close();
             F.close();          	
                  }break;       
		           }
			  }break;
	}
	cout<<"Do you want to Select any other Option ?";
	cin>>ans3;				 						  
	    	}while(ans3=='y');
   						    }
 			   else
   			    cout<<"Incorrect password"<<endl;
   			    Sleep(3000);
					   }
   			 else
				cout<<"Incorrect username!!"<<endl;  
				Sleep(3000);
				    }
				  }break;	  		  			  	
	}	
	   f.close();
	   system("cls");
	     cout<<"Do you want return to home page????\n 
Type 'y' for yes ";
         cin>>ans4;
		}while(ans4=='y');
	   	system("cls");
	   	system("color 60");
	   	Sleep(200);
	   	cout<<"V";
	   	Sleep(200);
 	  	cout<<"I";		
  	 	Sleep(200);
	   	cout<<"S";		
		Sleep(200);
	   	cout<<"I";		
		Sleep(200);
	   	cout<<"T";		
		Sleep(200);
	   	cout<<" ";		
		Sleep(200);
	   	cout<<"U";		
		Sleep(200);
	   	cout<<"S";		
		Sleep(200);
	   	cout<<" ";		
		Sleep(200);
	   	cout<<"A";		
		Sleep(200);
	   	cout<<"G";		
		Sleep(200);
	   	cout<<"A";		
		Sleep(200);
	   	cout<<"I";		
		Sleep(200);
	   	cout<<"N"<<endl<<endl;		
}
