#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int e1;
		cout<<"\nList of Eletronics mentioned below:"
	      "\n1) Laptops"
	      "\n2) Head Phones"
	      "\n3) Smart watches"
	      "\n\nPlease enter your option: ";
	      cin>>e1;
		if(e1==1)
	    {
		    	int b1;
		       cout<<"\n These are the top rated popular laptop brands on our store"
		    "\n\n    1)ASUS                   2)DELL           3)APPLE            4)HP                5)LENOVO"
		    "\n    1.1)ASUS VIVOBOOK        2.1)INSPIRON     3.1)MACBOOK        4.1)PAVILION        5.1)IDELPAD"
		    "\n    1.2)ASUS FLIP SERIES     2.2)VOSTRO       3.2)MACBOOK AIR    4.2)VICTUS          5.2)SILMPAD"   
		    "\n    1.3)ASUS ROG GAMING      2.3)XPS          3.3)MACBOOK PRO    4.3)ELITE BOOK      5.3)YOGA"
		    "\n    1.4)ASUS TUF             2.4)ALIEN WARE                      4.4)CHROME BOOK     5.4)THINKPAD"
		    "\n                             2.5)G SERIES"                            
		    "\n\nPlease select the brand: ";
		    cin>>b1;
		    switch(b1)
		    {
		    case 1:
	  cout<<"\nASUS                       Price"
		    "\n1.1)ASUS VIVOBOOK          55000/-"
		    "\n1.2)ASUS FLIP SERIES       79000/-"
		    "\n1.3)ASUS ROG GAMING        88000/-"
		    "\n1.4)ASUS TUF 	           82000/-"
		    "\n\nPlease check the price details of your required series"
		    "\nPlease press '1' for proceed '0' for exit";
		    break;
			case 2:
	  cout<<"\n DELL                 Price"
		    "\n2.1)INSPIRON          45000/-"
		    "\n2.2)VOSTRO            49000/-"
		    "\n2.3)XPS               68000/-"
		    "\n2.4)ALIEN WARE 	      82000/-"
		    "\n2.5)G SERIES 	      62000/-"
		    "\n\nPlease check the price details of your required series"
		    "\nPlease press '1' for proceed '0' for exit";
		    break;
			case 3:		
	  cout<<"\nAPPLE                       Price"
		    "\n3.1)MACBOOK                 145000/-"
		    "\n3.2)MACBOOK AIR             132000/-"
		    "\n3.3)MACBOOK PRO             188000/-"
		    "\n\nPlease check the price details of your required series"
		    "\nPlease press '1' for proceed '0' for exit";
		    break;
			case 4:
	  cout<<"\nHP                       Price"
		    "\n4.1)PAVILION             59000/-"
		    "\n4.2)VICTUS               58000/-"
		    "\n4.3)ELITE BOOK           64000/-"
		    "\n4.4)CHROME BOOK          44000/-"
		    "\n\nPlease check the price details of your required series"
		    "\nPlease press '1' for proceed '0' for exit";
		    break;
			case 5: 
	  cout<<"\n  LENOVO                       Price"
		    "\n  5.1)IDELPAD                  59000/-"
		    "\n  5.2)SILMPAD                  68000/-"
		    "\n  5.3)YOGA                     74000/-"
		    "\n  5.4)THINKPAD                 132000/-"
		    "\n\nPlease check the price details of your required series"
		    "\nPlease press '1' for proceed '0' for exit";	
			break;		
			}
			}
			else if(e1==2)
			{
				int b2;
			   	cout<<"\n These are the best rated head sets"	
			"\n\n  1)BOAT                2)JBL             3)BOULT"                 
		    "\n  1.1)BOAT ROCKERZ 4    2.1)JBL 5BT       3.1)BOULT AUDIO BASS"   
		    "\n  1.2)BOAT ROCKERZ 5    2.2)JBL 7NCBLK    3.2)BOULT AUDIO PRO"     
		    "\n  1.3)BOAT ROCKERZ 6    2.3)JBL 7NC       3.3)BOULT AIRBASS"  
			"\n\nPlease enter brand: ";
			cin>>b2;
			switch(b2)   
		    {
		    case 1:
       cout<<"\n   BOAT                   Price"
		    "\n   1.1)BOAT ROCKERZ 4     1999/-"
		    "\n   1.2)BOAT ROCKERZ 5     2999/-"
			"\n   1.3)BOAT ROCKERZ 6     3999/- "
			"\n\nPlease check the price details of your required series"
			"\nPlease press '1' for proceed '0' for exit";
			break;
			case 2:
	  cout<<"\n   JBL                    Price"
			"\n   2.1)JBL 5BT            2500/-"
			"\n   2.2)JBL 7NCBLK         3200/- " 
			"\n   2.3)JBL 7NC            4500/-"
			"\n\nPlease check the price details of your required series"
			"\nPlease press '1' for proceed '0' for exit";	
			break;
			case 3:
	  cout<<"\n   BOULT                     Price"
			"\n   3.1)BOULT AUDIO BASS      2999/-"
			"\n   3.2)BOULT AUDIO PRO       3999/-"
			"\n   3.3)BOULT AIRBASS         4499/-"
			"\n\nPlease check the price details of your required series"
			"\nPlease press '1' for proceed '0' for exit";
			break;	
			}		
			}  	
			else if(e1==3)
			{
				int b3;
				cout<<"\n These are the top rated popular smart watch brands on our store"
			"\n\n    1)NOISE                2)FIRE-BOLTT        3)JABRA"
			"\n    1.1)EVOLVE             2.1)DAZZLE PLUS     3.1)BINGO F0S"
			"\n    1.2)ICON BUZZ          2.2)EPIC PLUS       3.2)BINGO F1S"
			"\n    1.3)COLORFIT PULSE     2.3)ROCKET          3.3)BINGO F6S"
			"\n    1.4)COLORFIT PRO       2.4)HULK"
			"\n\nPlease select the brand: ";
			cin>>b3;
			switch(b3)
			{
			case 1:
	  cout<<"\n    NOISE                     Price"
			"\n    1.1)EVOLVE                999/-"
			"\n    1.2)ICON BUZZ             1999/-"
			"\n    1.3)COLORFIT PULSE        2499/-"
			"\n    1.4)COLORFIT PRO          2999/-"
			"\n\nPlease check the price details of your required series"
			"\nPlease press '1' for proceed '0' for exit";	
			break;
			case 2:	
	  cout<<"\n    FIRE-BOLTT            Price"
			"\n    2.1)DAZZLE PLUS       1999/-"
			"\n    2.2)EPIC PLUS         2999/-"
			"\n    2.3)ROCKET            3499/-"
			"\n    2.4)HULK              3999/-"
			"\n\nPlease check the price details of your required series"
			"\nPlease press '1' for proceed '0' for exit";		
			break;
			case 3:	
	  cout<<"\n    JABRA            Price"
			"\n    3.1)BINGO F0S    2999/-"
			"\n    3.2)BINGO F1S    4999/-"
			"\n    3.3)BINGO F6S    5999/-"
			"\n\nPlease check the price details of your required series"
			"\nPlease press '1' for proceed '0' for exit";		
			break;		
			}
			}
		else
		cout<<"Please enter the valid option: ";
		cin>>e1;		
}
