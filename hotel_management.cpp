#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int quant, choice;

	//quantities
	int qrooms=0, qpasta= 0, qburger=0, qnoodles=0, qshake=0, qchicken=0;
	//sold amount
	int srooms=0, spasta= 0, sburger=0, snoodles=0, sshake=0, schicken=0;
	//total price of items
	int total_rooms=0, total_pasta= 0, total_burger=0, total_noodles=0, total_shake=0, total_chicken=0;



	
	cout<<"\n\t Quantities Of the items We Have: ";
	cout<<"\n\n";

	cout<<"\n Rooms available: ";

	cin>>qrooms;

	cout<<"\n Quantity Of Pasta: ";

	cin>>qpasta;

	cout<<"\n Quantity Of Burger: ";

	cin>>qburger;

	cout<<"\n Quantity Of Noodles: ";

	cin>>qnoodles;

	cout<<"\n Quantity of shake :";

	cin>>qshake;

	cout<<"\n Quantity of chicken-roll :";

	cin>>qchicken;

	//menu
	m:
	cout<<"\n\n_____________________________________________________";
	cout<<"\n\t\t\t Please select from the menu options ";
	cout<<"\n\n1. Rooms";

	cout<<"\n2. Pasta";

	cout<<"\n3. Burger";

	cout<<"\n4. Noodles";

	cout<<"\n5. shake";

	cout<<"\n6. Chicken-roll";

	cout<<"\n7. Information regarding Sales and Collection";

	cout<<"\n8. Exit";
	cout<<"\n\n_____________________________________________________";

	cout<<"\n\n Please Enter your choice: ";

	cin>> choice;

	switch(choice)

	{

	case 1:
		cout<<"\n\n Enter the number of rooms you want: ";

		cin>>quant;

		if (qrooms-srooms >=quant)
		{
			srooms = srooms+quant;
			total_rooms= total_rooms+quant*1250;
			cout<<"\n\n\t\t"<<quant<<" room/rooms have been alloted to you!";
		}
		else
			cout<<"\n\tOnly"<<qrooms-srooms << " Rooms remaining in hotel ";
			break;
	
	case 2:
		cout<<"\n\n Enter the Quantity of Pasta: ";

		cin>>quant;

		if (qpasta-spasta >=quant)
		{
			spasta=spasta+quant;
			total_pasta= total_pasta+quant*180;
			cout<<"\n\n\t\t"<<quant<<" Pasta is Ordered!";
		}
		else
			cout<<"\n\tOnly"<<qpasta-spasta << " Pasta remaining in hotel ";
			break;
	case 3:
		cout<<"\n\n Enter the Quantity of Burger: ";

		cin>>quant;

		if (qburger-sburger >=quant)
		{
			sburger=sburger+quant;
			total_burger= total_burger+quant*129;
			cout<<"\n\n\t\t"<<quant<<" Burger is Ordered!";
		}
		else
			cout<<"\n\tOnly"<<qburger-sburger << " Burger remaining in hotel ";
			break;
	case 4:
		cout<<"\n\n Enter the Quantity of Noodles: ";

		cin>>quant;

		if (qnoodles-snoodles >=quant)
		{
			snoodles=snoodles+quant;
			total_noodles= total_noodles+quant*160;
			cout<<"\n\n\t\t"<<quant<<" Noodles is Ordered!";
		}
		else
			cout<<"\n\tOnly"<<qnoodles-snoodles << " Noodles remaining in hotel ";
			break;	
	case 5:
		cout<<"\n\n Enter the Quantity of Shakes: ";

		cin>>quant;

		if (qshake-sshake >=quant)
		{
			sshake=sshake+quant;
			total_shake= total_shake+quant*280;
			cout<<"\n\n\t\t"<<quant<<" Shakes is Ordered!";
		}
		else
			cout<<"\n\tOnly"<<qshake-sshake << " Shakes remaining in hotel ";
			break;
	case 6:
		cout<<"\n\n Enter the Quantity of Chicken-roll: ";

		cin>>quant;

		if (qchicken-schicken >=quant)
		{
			schicken=schicken+quant;
			total_chicken= total_chicken+quant*120;
			cout<<"\n\n\t\t"<<quant<<" Chicken-roll is Ordered!";
		}
		else
			cout<<"\n\tOnly"<<qchicken-schicken << " Chicken-roll remaining in hotel ";
			break;
	case 7:

		cout<<"\n\t\tDetails of sales and collection";
		cout<<"\n\n Number of rooms we had : "<<qrooms;
		cout<<"\n\n Number of rooms we gave for rent "<<srooms;
		cout<<"\n\n Remaining rooms : "<<qrooms-srooms;
		cout<<"\n\n Total rooms collection for the day : "<<total_rooms;

		cout<<"\n\n Number of Pasta we had : "<<qpasta;
		cout<<"\n\n Number of Pasta we gave for rent "<<spasta;
		cout<<"\n\n Remaining Pasta : "<<qpasta-spasta;
		cout<<"\n\n Total Pasta collection for the day : "<<total_pasta;

		cout<<"\n\n Number of Burger we had : "<<qburger;
		cout<<"\n\n Number of Burger we gave for rent "<<sburger;
		cout<<"\n\n Remaining Burger : "<<qburger-sburger;
		cout<<"\n\n Total Burger collection for the day : "<<total_burger;

		cout<<"\n\n Number of Noodles we had : "<<qnoodles;
		cout<<"\n\n Number of Noodles we gave for rent "<<snoodles;
		cout<<"\n\n Remaining Noodles : "<<qnoodles-snoodles;
		cout<<"\n\n Total Noodles collection for the day : "<<total_noodles;

		cout<<"\n\n Number of Shakes we had : "<<qshake;
		cout<<"\n\n Number of Shakes we gave for rent "<<sshake;
		cout<<"\n\n Remaining Shakes : "<<qshake-sshake;
		cout<<"\n\n Total Shakes collection for the day : "<<total_shake;

		cout<<"\n\n Number of Chicken-roll we had : "<<qchicken;
		cout<<"\n\n Number of Chicken-roll we gave for rent "<<schicken;
		cout<<"\n\n Remaining Chicken-roll : "<<qchicken-schicken;
		cout<<"\n\n Total Chicken-roll collection for the day : "<<total_chicken;

		cout<<"\n\n\n Total Collection for the Day: "<<total_chicken+total_pasta+total_rooms+total_shake+total_burger+total_noodles;
		break;
	case 8:
		exit(0);

	default:
		cout<<"\n Please select from above Mentioned Menu";

	}
	goto m;
}