#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>
#include <fstream>

using namespace std;

const double taxmultiplier=0.3;
const int NUMPIZZA=12;//the type of pizzas available
const int NUMSIZE=4;//the type of sizes available
const int NUMCRUST=5;//the type of crusts available
const int NUMTOPPING=3;//types of toppings available
const double totalprice=0;

struct menu
{
	string pizza[NUMPIZZA]={"Splitza","Veggie Garden Pizza","Meat Lovers",
					"Super Supreme","Tuna Melt","Frankfurter BBQ",
					"American Favorite","Black Pepper Beef / Chicken",
					"Deluxe Cheese","Cheeseburger Pizza","Chicken Lovers",
					"Super Supreme Chicken"};
					
	string size[NUMSIZE]={"Personal","Medium","Large","Extra Large"};
	
	string crust[NUMCRUST]={"Pan Crust","Thin Crust","Cheesy bites",
						"Stuffed Crust","Crown Crust"};
	
	string topping[NUMTOPPING]={"No toppings","Extra Cheese","Extra Meat"};
};

menu m;

ofstream outp;
ofstream outc;

class system//every function and data for the system display
{
	private:
		
	public:
		
	void displayline()
	{
		for(int n=0;n<50;n++)
		{
			cout<<"*";
		}
		
		cout<<endl;
	}
	
	
	void heading()
	{
		cout<<"**************   PIZZAHUT VER 1.0   **************"<<endl;
		cout<<"**********   By Abhisen Muhsin Nisar   ***********"<<endl;
	}
};

class receipt//to print out the receipt
{
	private:
		
	public:
		
	void displayline()
	{
		for(int n=0;n<120;n++)
		{
			outc<<left<<"-";
			outp<<left<<"-";
		}
		
		outc<<endl;
		outp<<endl;
	}
	
	void displaylineC()
	{
		for(int n=0;n<120;n++)
		{
			outc<<left<<"-";
		}
		
		outc<<endl;
	}
	
	void displaylineP()
	{
		for(int n=0;n<120;n++)
		{
			outp<<left<<"-";
		}
		
		outp<<endl;
	}
	
	void fields()
	{
		outc<<left<<setw(20)<<"PIZZA";
		outc<<left<<setw(20)<<"SIZE";
		outc<<left<<setw(20)<<"CRUST CHOICE";
		outc<<left<<setw(20)<<"TOPPINGS";
		outc<<left<<setw(20)<<"QUANTITY";
		outc<<left<<setw(20)<<"PRICE";
		
		outp<<left<<setw(20)<<"PIZZA";
		outp<<left<<setw(20)<<"SIZE";
		outp<<left<<setw(20)<<"CRUST CHOICE";
		outp<<left<<setw(20)<<"TOPPINGS";
		outp<<left<<setw(20)<<"QUANTITY";
		outp<<left<<setw(20)<<"PRICE";
		
		outc<<endl;
		outp<<endl;
	}
		
	
};

class inside//everything related to eating inside
{
	private:
		
	public:
		
	void greetings()
	{
		cout<<"**********   Welcome to the PizzaHut!   **********"<<endl;
		cout<<"***********   May i take your order?   ***********"<<endl;
	}
		
};

class delivery//everything related to delivery
{
	private:
		
	public:
		
	void greetings()
	{
		cout<<"********   Welcome to PizzaHut Delivery!   *******"<<endl;
		cout<<"***********   May i take your order?   ***********"<<endl;
	}

};

class inside i;
class delivery d;
class system s;
class receipt r;



void displaymenu(int &a,int &b,int &c,int &d,int &e)
{
	char correct,again;
	
	do
	{
		cout<<endl<<"BELOW IS THE LIST OF PIZZAS AVAILABLE: "<<endl<<endl;
		
		for(int n=0;n<NUMPIZZA;n++)
		{
			cout<<n<<" - "<<m.pizza[n]<<endl;
		}
		
		cout<<endl<<"Enter your choice of pizza: ";
		cin>>a;
		
		while((a<0)||(a>=NUMPIZZA))
		{
			cout<<endl<<"No such pizza exist!!"<<endl;
			cout<<endl<<"Enter your choice of pizza: ";
			cin>>a;
		}
		
		cout<<endl<<endl;
		
		
		
		
		cout<<"BELOW IS THE LIST OF SIZES AVAILABLE: "<<endl<<endl;
		
		for(int n=0;n<NUMSIZE;n++)
		{
			cout<<n<<" - "<<m.size[n]<<endl;
		}
		
		cout<<endl<<"Enter the size of the pizza: ";
		cin>>b;
		
		while((b<0)||(b>=NUMSIZE))
		{
			cout<<endl<<"No such size exist!!"<<endl;
			cout<<endl<<"Enter the size of the pizza: ";
			cin>>b;
		}
		
		cout<<endl<<endl;
		
		
		
		
		cout<<"BELOW IS THE LIST OF CRUSTS AVAILABLE: "<<endl<<endl;
		
		for(int n=0;n<NUMCRUST;n++)
		{
			cout<<n<<" - "<<m.crust[n]<<endl;
		}
		
		cout<<endl<<"Enter the crust of the pizza: ";
		cin>>c;
		
		while((c<0)||(c>=NUMCRUST))
		{
			cout<<endl<<"No such crust exist!!"<<endl;
			cout<<endl<<"Enter the crust of the pizza: ";
			cin>>c;
		}
		
		cout<<endl<<endl;
		
		
		
		
		cout<<"BELOW IS THE LIST OF TOPPINGS AVAILABLE: "<<endl<<endl;
		
		for(int n=0;n<NUMTOPPING;n++)
		{
			cout<<n<<" - "<<m.topping[n]<<endl;
		}
		
		cout<<endl<<"Enter the topping of the pizza: ";
		cin>>d;
		
		while((d<0)||(d>=NUMTOPPING))
		{
			cout<<endl<<"No such topping exist!!"<<endl;
			cout<<endl<<"Enter the topping of the pizza: ";
			cin>>d;
		}
		
		cout<<endl<<"How many of the "<<m.pizza[a]<<" ("<<m.size[b]<<","<<m.crust[c]<<","<<m.topping[d]<<") do you want? Enter your value below: ";
		cin>>e;
		
		cout<<endl<<"Is you order correct? Y-Yes OR N-No : ";
		cin>>correct;
		
		if((correct=='y')||(correct=='Y'))
		{
			outc<<endl;
			outp<<endl;
			
			outc<<left<<setw(20)<<m.pizza[a];
			outc<<left<<setw(20)<<m.size[b];
			outc<<left<<setw(20)<<m.crust[c];
			outc<<left<<setw(20)<<m.topping[d];
			outc<<left<<setw(20)<<e;
			
			outp<<left<<setw(20)<<m.pizza[a];
			outp<<left<<setw(20)<<m.size[b];
			outp<<left<<setw(20)<<m.crust[c];
			outp<<left<<setw(20)<<m.topping[d];
			outp<<left<<setw(20)<<e;
			
			outc<<endl;
			outp<<endl;
			
			cout<<endl<<"Would you like to order another Pizza? Y-Yes OR N-No: ";
			cin>>again;
		}
	}
	while((correct=='n')||(correct=='N')||(again=='y')||(again=='Y'));
}



int main()
{
	int menuchoice,killswitch;
	int indexpizza,indexsize,indexcrust,indextopping,indexquantity;
	
	outc.open("Receipt(customer).txt");
	outp.open("Receipt(Pizzahut).txt");
	
	s.displayline();
	s.heading();
	s.displayline();
	
	r.displayline();
	r.fields();
	r.displayline();
	
	do
	{
		cout<<endl<<"Enter your choice of service:"<<endl<<endl;
		cout<<"1 - Eat in the restaurant"<<endl;
		cout<<"2 - Delivery"<<endl;
		cout<<"3 - Exit"<<endl<<endl;
		
		cout<<"Choice ==> ";
		cin>>menuchoice;
		
		while((menuchoice!=1)&&(menuchoice!=2)&&(menuchoice!=3))
		{
			cout<<endl<<"INVALID CHOICE!!!, please enter only 1,2 or 3: ";
			cin>>menuchoice;
		}
		
			switch(menuchoice)
			{
				case 1://eat inside, menu and calculation, final=printing to a receipt(customer&pizzahut)
					{
						cout<<endl;
						s.displayline();
						i.greetings();
						s.displayline();
						displaymenu(indexpizza,indexsize,indexcrust,indextopping,indexquantity);
					}
					break;
					
				case 2://delivery, menu and calculation, final=printing to a receipt(customer&pizzahut)
					{
						cout<<endl;
						s.displayline();
						d.greetings();
						s.displayline();
						displaymenu(indexpizza,indexsize,indexcrust,indextopping,indexquantity);
					}
					break;
					
				case 3://thank you and comment from customer for the receipt(pizzahut)
					{
						killswitch=1;
					}
					break;
					
				default:
					{
						killswitch=1;
					}
					break;
			}
	}
	while(killswitch==0);
	
	outc.close();
	outp.close();
	
	return 0;
}
