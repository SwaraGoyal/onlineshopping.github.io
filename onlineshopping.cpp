
#include<iostream>
using namespace std;

int main()
{
    char start_val;
    float online_shop();
    cout<<"***********WELCOME TO INDIAMART************* "<<endl;
start:
    cout<<"Please enter 'S' to start shopping  ";

    cin>>start_val;
    if(start_val=='s'||start_val=='S')
    {
        float total_amount=online_shop();
        cout<<"Total Bill Amount is ->  "<<total_amount<<endl;
        cout<<"------THANKS FOR SHOPPING --------";

    }
    else
    {
        cout<<"you entered wrong value"<<endl;
        goto start;
    }


    return 0;
}
float online_shop()
{
    int choice,item,quantity;
    float bill_amount;
    cout<<"----Please follow the instructions----"<<endl;
    cout<<"(1) Enter 1 to order mobile phones & accessories  "<<endl;
    cout<<"(2) Enter 2 to order  grocery "<<endl;
    cout<<"(3) Enter 3 to order furniture "<<endl;
    cout<<"(4) Enter 4 to order toys  "<<endl;
    cout<<"(5) Enter 5 to order electric vehicles"<<endl;

    cin>>choice;

    switch(choice)
    {

    case 1:
    {
        cout<<"    MOBILE DETAILS "<<endl;
details:
        cout<<"(1) POCO C50 (ROYAL BLUE, 32 GB) -> Rs 8,999 "<<endl;
        cout<<"(2) REALME C55(SUNSHOWER, 128 GB) -> Rs 13,999 "<<endl;
        cout<<"(3) MOTOROLA G62 5G (MIDNIGHT GRAY, 128 GB) -> Rs 16,149 "<<endl;
        cout<<"(4) SAMSUNG GALAXY F13 (NIGHTSKY GREEN, 64 GB) -> Rs 10,999 "<<endl;
        cout<<"(5) APPLE IPHONE 13 (PINK, 128 GB) -> Rs 62,999 "<<endl;
        cin>>item;
        if(item==1)
        {
            cout<<" ENTER QUANTITY "<<endl;
            cin>>quantity;
            bill_amount=bill_amount+quantity*8999;
        }
        else if(item==2)
        {
            cout<<" ENTER QUANTITY "<<endl;
            cin>>quantity;
            bill_amount=bill_amount+quantity*13999;
        }
        else if(item==3)
        {
            cout<<" ENTER QUANTITY "<<endl;
            cin>>quantity;
            bill_amount=bill_amount+quantity*16149;
        }
        else if(item==4)
        {

            cout<<" ENTER QUANTITY "<<endl;
            cin>>quantity;
            bill_amount=bill_amount+quantity*10999;
        }
        else if(item==5)
        {
            cout<<" ENTER QUANTITY "<<endl;
            cin>>quantity;
            bill_amount=bill_amount+quantity*62999;
        }
        else
        {
            cout<<"you entered wrong value"<<endl;
            goto details;
        }

        break;
    }
    case 2:
    {
        cout<<"    GROCERY DETAILS "<<endl;
g_details:
        cout<<"(1) ATTA, RICE AND DAL -> Rs 1000 "<<endl;
        cout<<"(2) OIL AND GHEE -> Rs 700 "<<endl;
        cout<<"(3) DRY FRUITS, NUTS AND SEEDS -> Rs 2500 "<<endl;
        cout<<"(4) NOODLES AND PASTA  -> Rs 400 "<<endl;
        cout<<"(5) DETERGENTS AND LAUNDRY -> Rs 950 "<<endl;
        cin>>item;
        if(item==1)
        {
            cout<<" ENTER QUANTITY "<<endl;
            cin>>quantity;
            bill_amount=bill_amount+quantity*1000;
        }
        else if(item==2)
        {
            cout<<" ENTER QUANTITY "<<endl;
            cin>>quantity;
            bill_amount=bill_amount+quantity*700;
        }
        else if(item==3)
        {
            cout<<" ENTER QUANTITY "<<endl;
            cin>>quantity;
            bill_amount=bill_amount+quantity*2500;
        }
        else if(item==4)
        {

            cout<<" ENTER QUANTITY "<<endl;
            cin>>quantity;
            bill_amount=bill_amount+quantity*400;
        }
        else if(item==5)
        {
            cout<<" ENTER QUANTITY "<<endl;
            cin>>quantity;
            bill_amount=bill_amount+quantity*950;
        }
        else
        {
            cout<<"you entered wrong value"<<endl;
            goto g_details;
        }



        break;
    }
    case 3:
    {
        cout<<"  FURNITURE DETAILS "<<endl;
f_details:
        cout<<"(1) SOFAS -> Rs 10000 "<<endl;
        cout<<"(2) BEDS -> Rs 15000 "<<endl;
        cout<<"(3) WARDROBES -> Rs 20000 "<<endl;
        cout<<"(4) DINING TABLES  -> Rs 25000 "<<endl;
        cout<<"(5) TV UNITS  -> Rs 30000 "<<endl;
        cin>>item;
        if(item==1)
        {
            cout<<" ENTER QUANTITY "<<endl;
            cin>>quantity;
            bill_amount=bill_amount+quantity*10000;
        }
        else if(item==2)
        {
            cout<<" ENTER QUANTITY "<<endl;
            cin>>quantity;
            bill_amount=bill_amount+quantity*15000;
        }
        else if(item==3)
        {
            cout<<" ENTER QUANTITY "<<endl;
            cin>>quantity;
            bill_amount=bill_amount+quantity*20000;
        }
        else if(item==4)
        {

            cout<<" ENTER QUANTITY "<<endl;
            cin>>quantity;
            bill_amount=bill_amount+quantity*25000;
        }
        else if(item==5)
        {
            cout<<" ENTER QUANTITY "<<endl;
            cin>>quantity;
            bill_amount=bill_amount+quantity*30000;
        }
        else
        {
            cout<<"you entered wrong value"<<endl;
            goto f_details;
        }



        break;
    }
    case 4:
    {
        cout<<"     TOYS DETAILS "<<endl;
t_details:
        cout<<"(1) UNICORN TOY -> Rs 700 "<<endl;
        cout<<"(2) MONKEY TOY -> Rs 2500 "<<endl;
        cout<<"(3) CAT TOY -> Rs 2500 "<<endl;
        cout<<"(4) FISH TOY -> Rs 400 "<<endl;
        cout<<"(5) DOG TOY -> Rs 950 "<<endl;
        cin>>item;
        if(item==1)
        {
            cout<<" ENTER QUANTITY "<<endl;
            cin>>quantity;
            bill_amount=bill_amount+quantity*700;
        }
        else if(item==2)
        {
            cout<<" ENTER QUANTITY "<<endl;
            cin>>quantity;
            bill_amount=bill_amount+quantity*2500;
        }
        else if(item==3)
        {
            cout<<" ENTER QUANTITY "<<endl;
            cin>>quantity;
            bill_amount=bill_amount+quantity*2500;
        }
        else if(item==4)
        {

            cout<<" ENTER QUANTITY "<<endl;
            cin>>quantity;
            bill_amount=bill_amount+quantity*400;
        }
        else if(item==5)
        {
            cout<<" ENTER QUANTITY "<<endl;
            cin>>quantity;
            bill_amount=bill_amount+quantity*950;
        }
        else
        {
            cout<<"you entered wrong value"<<endl;
            goto t_details;
        }

        break;
    }

    case 5:
    {
        cout<<" ELECTRIC VEHICLES DETAILS"<<endl;
e_details:
        cout<<"(1) AMPERE MAGNUS EX-> Rs 70000 "<<endl;
        cout<<"(2) OKAYA FREEDUM LI-2-> Rs 70000 "<<endl;
        cout<<"(3) OKAYA FAAST F2B -> Rs 80000 "<<endl;
        cout<<"(4) BOUNCE INFINITY E1  -> Rs 70000 "<<endl;
        cout<<"(5) OKAYA FAAST F4 -> Rs 80000 "<<endl;
        cin>>item;
        if(item==1)
        {
            cout<<" ENTER QUANTITY "<<endl;
            cin>>quantity;
            bill_amount=bill_amount+quantity*70000 ;
        }
        else if(item==2)
        {
            cout<<" ENTER QUANTITY "<<endl;
            cin>>quantity;
            bill_amount=bill_amount+quantity*70000 ;
        }
        else if(item==3)
        {
            cout<<" ENTER QUANTITY "<<endl;
            cin>>quantity;
            bill_amount=bill_amount+quantity*80000 ;
        }
        else if(item==4)
        {

            cout<<" ENTER QUANTITY "<<endl;
            cin>>quantity;
            bill_amount=bill_amount+quantity*70000;
        }
        else if(item==5)
        {
            cout<<" ENTER QUANTITY "<<endl;
            cin>>quantity;
            bill_amount=bill_amount+quantity*80000 ;
        }
        else
        {
            cout<<"you entered wrong value"<<endl;
            goto e_details;
        }


        break;
    }

    default:
    {
        cout<<" you entered wrong value"<<endl;
    }
    }
    return bill_amount;
}






