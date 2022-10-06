
#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include<iomanip>
using namespace std;
class account
{
public:
    
    char my_name[50];
    char father_n[50];
    char mother_n[550];
    char address[200];
    char nominee[50];
    long long mob_no;
    long long addhar_no;
    char login_user[50];
    char login_pass[50];
    int pin_no;
    long long acc_bal;
    int account_no;
    int activity=1;
    //variables regarding loans starts
    //variables regarding home loan starts
    char homeloan_newadd[200];
    long homeloan_principal;
    int homeloan_no;
    long current_income;
    int homeloan_rate=8;
    int homeloan_time;
    long homeloan_totalamount=0;
    //variables regarding home loan ends
    //variables regarding vehicle loan starts
    char vehicle_model[100];
    char vehicle_info[500];
    int vehicleloan_time;
    long vehicleloan_principal;
    long vehicleloan_totalamount=0;
    int vehicleloan_rate=9; 
    //variables regarding vehicle loan ends
    //variables regarding gold loan starts
    float gold_amount;
    float goldloan_value;
    int goldloan_time;
    long goldloan_totalamount=0;
    int goldloan_rate=5;
    int goldloan_principal;

    //variables regarding gold loan ends
    //variables regarding education loan starts
    char edu_field[100];
    int edu_duration;
    long eduloan_principal;
    int edu_time;
    long eduloan_totalamount=0;
    int eduloan_rate=3;
    //variables regarding education loan ends
    //varialbes regarding agricultural loan starts
    char agri_crop[200];
    char agri_address[800];
    float agri_area;
    long agri_amount;
    int agri_time;
    long agroloan_totalamount=0;
    int agriloan_rate=5;
    //varialbes regarding agricultural loan ends
    //variables regaring LOANS ends
    long long sav_funds=0;
    long long pen_funds=0;
    long long gold_fund=0;

    //function prototype regarding BASICS starts from here
    void allot_acc_no(int);
    int login_check( char arr1[50],    char arr2[50],int i){
        if(strcmp(arr1,login_user)==0){
            if(strcmp(arr2,login_pass)==0){
                return i;
            }
            else 
                return -50;
        }
        else 
            return -50;
    }
    void first_window();
    void show_details();
    void get_det();
    void change_det();
    void deposit();
    void show_bal();
    int check_pin(int);
    void close_acc()
    {
        cout<<"\nACCOUNT "<<account_no<<" IS NOW CLOSED. COLLECT YOUR REMANING ACCOUNT BALANCE FROM BRANCH.";
        login_pass[0]=50;
        login_user[0]=50;
        activity=0;
    }

    //function prototype regarding BASICS ends here

    //functions prototype regarding PAYMENTS starts from here
    void pay(int);
    void pay_intro();
    void electricity_pay();
    void water_pay();
    void dth_pay();
    void premobile_pay();
    void fastag_pay();
    void merchant_pay();
    void book_train();
    void book_bus();
    void transfer_fund();
    //functions prototype regarding PAYMENTS end here

    //functions prototype regarding LOAN start from here
    void loan_intro();
    void loan_pay();
    void loan_apply_intro();
    void home_loan_apply();
    void vehicle_loan_apply();
    void gold_loan_apply();
    void edu_loan_apply();
    void emi_loan_apply();
    void agri_loan_apply();
    void home_loan_pay();
    void vehicle_loan_pay();
    void gold_loan_pay();
    void edu_loan_pay();
    void emi_loan_pay();
    void agri_loan_pay();
    //function prototype regarding LOAN ends here

    //functions prototype regarding INSURANCE starts from here
    //void insurance_intro();
    void life_insurance();
    void car_insurance();
    void health_insurance();

    // functions prototype regarding INSURANCE end here
    //function prototype regarding DONATION starts here
    void donate_pay();
    void donatef1();
    void donatef2();
    void donatef3();
    void donatef4();
    void donate_intro();
    //function prototype regarding DONATION ends here 
    //functions prototype regarding INVEST starts from here
    void invest_intro();
    void saving_funds();
    void pension_funds();
    void gold_funds();
    // functions prototype regarding INVEST end here
    //variables regarding PAY_TAXES starts
    long long salary;
    char pan_number[10];
    //variables regarding PAY_TAXES ends
    void pay_taxes();
};

// functions defination regarding BASICS starts here
void account::first_window()
{
    
    int choice;
    do
    {
        system("CLS");
        cout << "\n HOW CAN WE HELP YOU:-";
        cout << "\n 01.SHOW DETAILS";
        cout << "\n 02.CHANGE DETAILS";
        cout << "\n 03.DEPOSIT MONEY";
        cout << "\n 04.CHECK BALANCE";
        cout << "\n 05.PAY TO MERCHANT";
        cout << "\n 06.TRANSFER FUNDS";
        cout << "\n 07.PAY TAXES";
        cout << "\n 08.APPLY FOR LOAN";
        cout << "\n 09.DONATION";
        cout << "\n 10.INVEST";
        cout << "\n 11.CLOSE ACCOUNT";
        cout << "\n 12.TALK TO CUSTOMER CARE";
        cout << "\n 13.BACK TO MAIN MENU";
        cout << "\n 14.EXIT PROGRAM";
        cout << "\n ENTER YOUR CHOICE(1-13):-";
        cin >> choice;

        switch (choice)
        {
        case 1:
            show_details();
            break;
        case 2:
            change_det();
            break;
        case 3:
            deposit();
            break;
        case 4:
            show_bal();
            break;
        case 5:
            pay_intro();
            break;
        case 6:
            transfer_fund();
            break;
        case 7:
            pay_taxes();
            break;
        case 8:
            loan_intro();
            break;
       
        case 9:
            donate_intro();
            break;
        case 10:
            invest_intro();
            break;
        case 11:
            close_acc();
            getch();
            break;
        case 12:
            cout<<"\n WE ARE HERE FOR YOU 24*7";
            cout<<"\n CONTACT US ON 7999538548";
            getch();
            break;
         case 13:

            break;
         case 14:
            exit(0);
            break;

        default:
            cout << "\n WRONG CHOICE";
            getch();
        }
    } while (choice != 13);


}
void account::get_det()
{      
    cout << "\n ENTER YOUR NAME:-\t";
    cin.clear();
    cin.sync();
    cin.getline(my_name,50);
    cout << "\n ENTER YOUR FATHER'S NAME:-\t";
    cin.clear();
    cin.sync();
    cin.getline(father_n,50);
    cout << "\n ENTER YOUR MOTHER'S NAME:-\t";
    cin.clear();
    cin.sync();
    cin.getline(mother_n,50);
    cout << "\n ENTER YOUR PERMANENT ADDRESS:-\t";
    cin.clear();
    cin.sync();
    cin.getline(address,200);
    cout << "\n ENTER YOUR MOBILE NUMBER:-\t";
    cin >> mob_no;
    cout << "\n ENTER YOUR ADDHAR NUMBER:-\t";
    cin >> addhar_no;
    
    cout << "\n ENTER YOUR NOMINEE:-\t";
    cin.clear();
    cin.sync();
    cin.getline(nominee,50);
    cout << "\n ENTER YOUR USERNAME FOR LOGIN:-\t";
    cin.clear();
    cin.sync();
    cin.getline(login_user,50);
    cout << "\n ENTER YOUR PASSWORD FOR LOGIN:-\t";
    cin.clear();
    cin.sync();
    cin.getline(login_pass,50);    
    cout << "\n SET UP YOUR PIN NO. FOR FURTHER TRANSACTIONS:-\t";
    cin >> pin_no;

}
void account::allot_acc_no(int temp){
    account_no=1000+temp;
}

void account::show_details(){
    if(activity==1){
        cout<<"\n\n\t ACCOUNT NO:-"<<account_no;
        cout<<"\n\t\t BASIC DETAILS:- ";
        cout<<"\n\t NAME OF ACCOUNT HOLDER:-"<<my_name;
        cout<<"\n\t FATHER'S NAME OF ACCOUNT HOLDER:-"<<father_n;
        cout<<"\n\t MOTHER'S NAME OF ACCOUNT HOLDER:-"<<mother_n;
        cout<<"\n\t ADDRESS OF ACCOUNT HOLDER:-"<<address;
        cout<<"\n\t NOMINEE OF ACCOUNT HOLDER:-"<<nominee;
        cout<<"\n\t TOTAL BALANCE OF ACCOUNT HOLDER:-"<<acc_bal;
        cout<<"\n\t MOBILE NO. ACCOUNT HOLDER:-"<<fixed<<mob_no;
        cout<<"\n\t ADDHAR NO. OF ACCOUNT HOLDER:-"<<fixed<<addhar_no;
        cout<<"\n\n\t\t LOAN DETAILS:- ";
        cout<<"\n\t VEHICLE LOAN:-"<<vehicleloan_totalamount;
        cout<<"\n\t GOLD LOAN:-"<<goldloan_totalamount;
        cout<<"\n\t EDUCATION LOAN:-"<<eduloan_totalamount;
        cout<<"\n\t AGRICULTURE LOAN:-"<<agroloan_totalamount;
        cout<<"\n\n\t\t INVESTMENT DETAILS:-";
        cout<<"\n\t SAVINGS FUND:-" <<sav_funds;
        cout<<"\n\t PENSION FUND:-" <<pen_funds;
        cout<<"\n\t GOLD FUND:-" <<gold_fund;
        getch();
    }
    
}
void account::change_det()
{
    int choice;
    do
    {
        system("cls");
        cout << "\n WHAT YOU WANT TO CHANGE:-";
        cout << "\n 01.NAME";
        cout << "\n 02.FATHER'S NAME";
        cout << "\n 03.MATHER'S NAME";
        cout << "\n 04.MOBILE NO.";
        cout << "\n 05.ADDHAR NUMBER";
        cout << "\n 06.PERMANENT ADDRESS";
        cout << "\n 07.PIN NO";
        cout << "\n ENTER YOUR CHOICE(1-6):-";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\n ENTER NAME:-\t";
            cin.clear();
            cin.sync();
            cin.getline( my_name,50);
            break;
        case 2:
            cout << "\n ENTER FATHER'S NAME:-\t";
            cin.clear();
            cin.sync();
            cin.getline(father_n,50);
            break;
        case 3:
            cout << "\n ENTER MOTHER'S NAME:-\t";
            cin.clear();
            cin.sync();
            cin.getline(mother_n,50);
            break;
        case 4:
            cout << "\n ENTER MOBILE NUMBER:-\t";
            cin >> mob_no;
            break;
        case 5:
            cout << "\n ENTER ADDHAR NO.:-\t";
            cin >> addhar_no;
            break;
       
        case 6:
            cout << "\n ENTER PERMANENT ADDRESS:-\t";
            cin.clear();
            cin.sync();
            cin.getline(address,200);
            break;
         case 7:
            cout << "\n ENTER PIN NO:-\t";
            cin >> pin_no;
            break;
        default:
            cout << "\n WRONG CHOICE";
            getch();
        }
    } while (choice > 7);
}
void account::show_bal()
{
    
    cout << "\n YOUR CURRENT BALANCE IS:- "<<acc_bal; 
    getch();   
}
int account::check_pin(int check_p)
{    
    if(check_p==pin_no)
    {
        return 1;
    }
    else
    {
        return 0;
    }
  
}
void account::deposit()
{
    system("CLS");
    int x;
    int temp_pin;
    int amount;
    cout << "\n ENTER THE AMOUNT TO BE DEPOSITED:- \t";
    cin>>amount;
    cout<<"\nENTER YOUR PIN:-\t";
    cin>>temp_pin;
    x=check_pin(temp_pin);
    if(x==1){
        acc_bal=acc_bal+amount;
        cout<<"\nWE ADDED "<<amount<<" IN YOUR ACCOUNT";
        cout<<"\nYOUR CURRENT BALANCE IS:-\t "<<acc_bal;
        getch();
    }
    if(x!=1){
        system("cls");
        cout<<"\nWRONG PIN";
        getch();
    }
}
//functions defination regarding BASICS ends here

//functioms definations regarding PAYMENTS starts from here
void account::pay(int amount){
    int temp_pin;
    cout<<"\nENTER YOUR PIN:-\t";
    cin>>temp_pin;
    int x=check_pin(temp_pin);
     if (x ==1)
    {
        if (acc_bal >= amount)
        {
            acc_bal = acc_bal - amount;
            cout << "\nYOUR TRANSACTION IS SUCCESSFUL";
            cout<<"\nWE DEDUCTED "<<amount<<" FROM ACCOUNT";
            cout<<"\nTHANK YOU FOR CHOOSING US";
            cout<<"\nYOUR REMAINING BALANCE IS "<<acc_bal;
            getch();
        }
        if (acc_bal < amount)
        {
            cout << "\nINSUFFIECIENT BALANCE";
            getch();
        }
    }
    else
        cout<<"\nYOU ENTERED WRONG PIN";
        getch();

};
void account::pay_intro()
{
    int choice;
    do
    {   
        system("cls");
        cout << "\n WHICH BILL YOU WANT TO PAY:-" ;
        cout << "\n 01.ELECTRICITY";
        cout << "\n 02.WATER";
        cout << "\n 03.DTH";
        cout << "\n 04.PREPAID MOBILLE";
        cout << "\n 05.FASTAG";
        cout << "\n 06.MERCHANT PAYMENT";
        cout << "\n 07.BOOK TRAIN";
        cout << "\n 08.BOOK BUS";
        cout << "\n 09.BACK TO PREVIOUS MENU";
        cout << "\n 10.EXIT";
        cout << "\n ENTER YOUR CHOICE:-\t";
        cin>>choice;

        switch (choice)
        {
        case 1:
            electricity_pay();
            break;
        case 2:
            water_pay();
            break;
        case 3:
            dth_pay();
            break;
        case 4:
            premobile_pay();
            break;
        case 5:
            fastag_pay();
            break;
        case 6:
            merchant_pay();
            break;
        case 7:
            book_train();
            break;
        case 8:
            book_bus();
            break;
        case 9:
            break;
        case 10:
            exit(0);
        default:
            cout<<"\nWRONG CHOICE";
            getch();
        }

    } while (choice!=9);
};
void account::electricity_pay()
{
    int amount;
    long ivrs_no;
    int pin1;
    system("CLS");
    cout << "\nELECTRICITY BILL PAYMENT:-\t";
    cout << "\nENTER YOUR IVRS NO.:-\t";
    cin >> ivrs_no;
    cout << "\nENTER THE AMOUNT TO BE PAID:-\t";
    cin >> amount;
    pay(amount);
}
void account::water_pay(){
    int bill_no;
    int amount;
    

    cout << "ENTER YOUR WATER BILL NO:-\t";
    cin >> bill_no;
    cout << "ENTER AMOUNT TO PAID:-\t";
    cin >> amount;
    pay(amount);
}
void account::dth_pay(){
    int card_no;
    int amount;
    int pin1;

    cout << "ENTER YOUR CARD NO:-\t";
    cin >> card_no;
    cout << "ENTER AMOUNT TO PAID:-\t";
    cin >> amount;
    pay(amount);
}
void account::premobile_pay()
{
    int mobile_no;
    int amount;
    int pin1;

    cout << "ENTER YOUR MOBILE NO:-\t";
    cin >> mobile_no;
    cout << "ENTER AMOUNT TO PAID:-\t";
    cin >> amount;
    pay(amount);
}
void account::fastag_pay()
{
    int fastag_no;
    int amount;
    int pin1;

    cout << "ENTER YOUR FASTAG CARD NO:-\t";
    cin >> fastag_no;
    cout << "ENTER AMOUNT TO PAID:-\t";
    cin >> amount;
    pay(amount);   
}
void account::merchant_pay()
{
    int shop_no;
    int amount;
    int pin1;

    cout << "ENTER SHOP ID NO:-\t";
    cin >> shop_no;
    cout << "ENTER AMOUNT TO PAID:-\t";
    cin >> amount;
    pay(amount);
}
void account::book_bus()
{   system("cls");
    char boarding[100];
    char destinattion[100];
    int distance;
    int price;
    int temp_pin;
    int choice;
    cout<<"\n------------------------------------------------------------";
    cout<<"\n\t\tWELCOME TO BUS TICKET BOOKING WINDOW";
    cout<<"\n------------------------------------------------------------";
    cout<<"\n\tENTER YOUR BOARDING POINT:-\t";
    cin.clear();
    cin.sync();
    cin.getline(boarding,100);
    cout<<"\n\tENTER YOUR DESTINATION:-";
    cin.clear();
    cin.sync();
    cin.getline(destinattion,100);
    cout<<"\n\tENTER THE  DISTANCE BETWEEN TWO POINTS:-";
    cin>>distance;
    price=distance*2;
    cout<<"\n\tTOTAL COST OF YOUR TRAVEL IS:-"<<price;
    cout<<"\n\tDO YOU WANT TO CONFIRM YOUR TRAVEL(TYPE 1 FOR YES, 2 FOR NO):- \t";
    cin>>choice;
    switch(choice){
        case 1:
            pay(price);
            break;
        case 2:
            break;
        default:
            cout<<"\nWRONG CHOICE";                                                                                 
            getch();

    }
}
void account::book_train()
{   system("cls");
    char boarding[100];
    char destinattion[100];
    int distance;
    int price;
    int temp_pin;
    int choice;
    cout<<"\n------------------------------------------------------------";
    cout<<"\n\t\tWELCOME TO TRAIN TICKET BOOKING WINDOW";
    cout<<"\n------------------------------------------------------------";
    cout<<"\n\tENTER YOUR BOARDING STATION:-\t";
    cin.clear();
    cin.sync();
    cin.getline(boarding,100);
    cout<<"\n\tENTER YOUR DESTINATION STATION:-";
    cin.clear();
    cin.sync();
    cin.getline(destinattion,100);
    cout<<"\n\tENTER THE  DISTANCE BETWEEN TWO POINTS:-";
    cin>>distance;
    price=distance*2;
    cout<<"\n\tTOTAL COST OF YOUR TRAVEL IS:-"<<price;
    cout<<"\n\tDO YOU WANT TO CONFIRM YOUR TRAVEL(TYPE 1 FOR YES, 2 FOR NO):- \t";
    cin>>choice;
    switch(choice){
        case 1:
            pay(price);
            break;
        case 2:
            break;
        default:
            cout<<"\nWRONG CHOICE";                                                                                 
            getch();

    }
}
void account::transfer_fund(){
    int amount;
    int temp_acc_no;
    system("CLS");
    cout<<"\nENTER THE ACCOUNT NO TO WHICH YOU WANT TO TRANSFER FUND:-\t";
    cin>>temp_acc_no;
    cout<<"\nENTER THE AMOUNT TO BE TRANSFER:-\t";
    cin>>amount;
    pay(amount);
}

//functions definations regarding PAYMENTS ends here

//functions defination regarding LOAN start from here
void account::home_loan_pay()
{   
    int choice;
    int amount;
    cout<<"\nYOUR EXISTING HOME LOAN IS :-\t"<<homeloan_totalamount;
    cout<<"\n\tDO YOU WANT TO CONFIRM YOUR PAYMENT (TYPE 1 FOR YES, 2 FOR NO):- \t";
    cin>>choice;
    switch(choice)
    {
        case 1:
            cout<<"\nENTER AMOUNT YOU WANT TO PAY:-\t";
            cin>>amount;
            pay(amount);
            homeloan_totalamount=homeloan_totalamount-amount;
            break;
        case 2:
            break;
        default:
            cout<<"\nWRONG CHOICE";                                                                                 
            getch();
    }
}
void account::vehicle_loan_pay()
{
    int choice;
    int amount;
    cout<<"\nYOUR EXISTING HOME LOAN IS :-\t"<<vehicleloan_totalamount;
    cout<<"\n\tDO YOU WANT TO CONFIRM YOUR PAYMENT (TYPE 1 FOR YES, 2 FOR NO):- \t";
    cin>>choice;
    switch(choice)
    {
        case 1:
            cout<<"\nENTER AMOUNT YOU WANT TO PAY:-\t";
            cin>>amount;
            pay(amount);
            vehicleloan_totalamount=vehicleloan_totalamount-amount;
            break;
        case 2:
            break;
        default:
            cout<<"\nWRONG CHOICE";                                                                                 
            getch();
    }

}
void account::gold_loan_pay()
{
    int choice;
    int amount;
    cout<<"\nYOUR EXISTING HOME LOAN IS :-\t"<<goldloan_totalamount;
    cout<<"\n\tDO YOU WANT TO CONFIRM YOUR PAYMENT (TYPE 1 FOR YES, 2 FOR NO):- \t";
    cin>>choice;
    switch(choice)
    {
        case 1:
            cout<<"\nENTER AMOUNT YOU WANT TO PAY;-\t";
            cin>>amount;
            pay(amount);
            goldloan_totalamount=goldloan_totalamount-amount;
            break;
        case 2:
            break;
        default:
            cout<<"\nWRONG CHOICE";                                                                                 
            getch();
    }

}
void account::edu_loan_pay()
{
    int choice;
    int amount;
    cout<<"\nYOUR EXISTING HOME LOAN IS :-\t"<<eduloan_totalamount;
    cout<<"\n\tDO YOU WANT TO CONFIRM YOUR PAYMENT (TYPE 1 FOR YES, 2 FOR NO):- \t";
    cin>>choice;
    switch(choice)
    {
        case 1:
            cout<<"\nENTER AMOUNT YOU WANT TO PAY:-\t";
            cin>>amount;
            pay(amount);
            eduloan_totalamount=eduloan_totalamount-amount;
            break;
        case 2:
            break;
        default:
            cout<<"\nWRONG CHOICE";                                                                                 
            getch();
    }

}
void account::agri_loan_pay()
{
    int choice;
    int amount;
    cout<<"\nYOUR EXISTING HOME LOAN IS :-\t"<<agroloan_totalamount;
    cout<<"\n\tDO YOU WANT TO CONFIRM YOUR PAYMENT (TYPE 1 FOR YES, 2 FOR NO):- \t";
    cin>>choice;
    switch(choice)
    {
        case 1:
            cout<<"\nENTER AMOUNT YOU WANT TO PAY:-\t";
            cin>>amount;
            pay(amount);
            agroloan_totalamount=agroloan_totalamount-amount;
            break;
        case 2:
            break;
        default:
            cout<<"\nWRONG CHOICE";                                                                                 
            getch();
    }

}
void account::loan_pay()
{
    int choice;
    do
    {   system("CLS");
        cout << "\nWHICH LOAN YOU WANT OT PAY:-"  ;
        cout << "\n01.HOME LOAN" ;
        cout << "\n02.VEHICLE LOAN";
        cout << "\n03.GOLD LOAN";
        cout << "\n04.EDUCATION LOAN";
        cout << "\n05.AGRICULTURE LOAN";
        cout << "\n06.BACK TO PREVIOUS MENU";
        cout << "\nENTER YOUR CHOICE(1-6):-\t";
        cin >> choice;
        
        switch (choice)
        {
        case 1:
            home_loan_pay();
            break;
        case 2:
            vehicle_loan_pay();
            break;
        case 3:
            gold_loan_pay();
            break;
        case 4:
            edu_loan_pay();
            break;
        case 5:
            agri_loan_pay();
            break;
        case 6:
            break;
        default:
            cout << "\n WRONG CHOICE";
            getch();
        }

    } while (choice != 6);

}
void account::loan_intro()
{
    int choice;
    do
    {   system("CLS");
        cout << "\nHOW CAN WE HELP YOU"  ;
        cout << "\n01.APPLY FOR NEW LOAN" ;
        cout << "\n02.PAY FOR EXISTING LOAN";
        cout << "\n03.BACK TO MAIN MENU";
        cout << "\nENTER YOUR CHOICE(1-3):-\t";
        cin >> choice;
        
        switch (choice)
        {
            case 1:
                loan_apply_intro();
                break;
            case 2:
                loan_pay();
                break;
            case 3:
                break;
            
            default:
                cout << "\n WRONG CHOICE";
                getch();
        }

    } while (choice !=3);
}
void account::loan_apply_intro()
{
    int choice;
    do
    {   system("CLS");
        cout << "\nFOLLOWING LOAN ARE AVAILABLE IN OUR BANK:-"  ;
        cout << "\n01.HOME LOAN (Rate- 8%)" ;
        cout << "\n02.VEHICLE LOAN(Rate- 9%)";
        cout << "\n03.GOLD LOAN(Rate- 5%)";
        cout << "\n04.EDUCATION LOAN(Rate- 3%)";
        cout << "\n05.AGRICULTURE LOAN(Rate- 5%)";
        cout << "\n06.BACK TO PREVIOUS MENU";
        cout << "\nENTER YOUR CHOICE(1-6):-\t";
        cin >> choice;

        switch (choice)
        {
        case 1:
            home_loan_apply();
            break;
        case 2:
            vehicle_loan_apply();
            break;
        case 3:
            gold_loan_apply();
            break;
        case 4:
            edu_loan_apply();
            break;
        case 5:
            agri_loan_apply();
            break;
        case 6:
            break;
        default:
            cout << "\n WRONG CHOICE";
            getch();
        }

    } while (choice != 6);
}
void account::home_loan_apply()
{   
    if(homeloan_totalamount==0)
    {
        cout << "\n HOME LOAN";
        cout << "\n ENTER LOCATION OF HOME FOR WHICH YOU NEED LOAN:-";
        cin.clear();
        cin.sync();
        cin.getline(homeloan_newadd,200);
        cout << "\n ENTER YOUR CURRENT INCOME:- \t";
        cin >> current_income;
        cout << "\n ENTER THE AMOUNT YOU NEED:-\t";
        cin >> homeloan_principal;
        cout << "\n ENTER THE TIME(IN YEARS) NEEDED TO FULFILL AMOUNT:-";
        cin >> homeloan_time;
        homeloan_totalamount=homeloan_principal+((homeloan_principal*homeloan_rate*homeloan_time)/100);
        cout<<"\n YOU HAVE TO PAY BACK "<<homeloan_totalamount<<" IN "<<homeloan_time<<" YEARS";
        getch();
    }
    else
    {
        cout<<"\n FIRST PAY EXISTING LOAN THEN APPLY FOR NEW ONE";
        getch();
    }
}
void account::vehicle_loan_apply()
{   
    if(vehicleloan_totalamount==0)
    {
        cout << "\n VEHICLE LOAN";
        cout << "\n ENTER YOUR CURRENT INCOME:- \t";
        cin >> current_income;
        cout << "\n ENTER THE AMOUNT YOU NEED:-\t";
        cin >> vehicleloan_principal;
        cout << "\n ENTER THE TIME(IN YEARS) NEEDED TO FULFILL AMOUNT:-";
        cin >> vehicleloan_time;
        vehicleloan_totalamount=vehicleloan_principal+((vehicleloan_principal*vehicleloan_rate*vehicleloan_time)/100);
        cout<<"\n YOU HAVE TO PAY BACK "<<vehicleloan_totalamount<<" IN "<<vehicleloan_time<<" YEARS";
        getch();

    }
    else
    {
        cout<<"\n FIRST PAY EXISTING LOAN THEN APPLY FOR NEW ONE";
        getch();
    }
}
void account::gold_loan_apply()
{   
    if(goldloan_totalamount==0)
    {
        cout << "\n GOLD LOAN";
        cout << "\n ENTER THE AMOUNT OF GOLD YOU ARE LENDING(IN GRAM)";
        cin >> gold_amount;
        cout << "\n THE RATE OF INTEREST IS 5%";
        goldloan_value = gold_amount*4370;
        cout << "\n THE AMOUNT YOU GET FROM LENDING THE GOLD:- \t" << goldloan_value ;
        goldloan_principal=goldloan_value;
        cout << "\n ENTER THE TIME(IN YEARS) NEEDED TO REPAY THE AMOUNT:-";
        cin >> goldloan_time;
        goldloan_totalamount=goldloan_principal+((goldloan_principal*goldloan_rate*goldloan_time)/100);
        cout<<"\n YOU HAVE TO PAY BACK "<<goldloan_totalamount<<" IN "<<goldloan_time<<" YEARS";
        getch();
    }
    else
    {
        cout<<"\n FIRST PAY EXISTING LOAN THEN APPLY FOR NEW ONE";
        getch();
    }
}
void account::edu_loan_apply()
{   
    if(eduloan_totalamount==0)
    {
        cout << "\n EDUCATION LOAN";
        cout << "\n ENTER YOUR FIELD OF EDUCATION";
        cin.clear();
        cin.sync();
        cin.getline(edu_field,100);
        cout << "\n ENTER COURSE DURATION(IN MONTHS)";
        cin >> edu_duration;
        cout << "\n ENTER THE AMOUNT YOU NEED:-\t";
        cin >> eduloan_principal;
        cout << "\n ENTER THE TIME(IN YEARS) NEEDED TO FULFILL AMOUNT:-";
        cin >> edu_time;
        eduloan_totalamount=eduloan_principal+((eduloan_principal*eduloan_rate*edu_time)/100);
        cout<<"\n YOU HAVE TO PAY BACK "<<eduloan_totalamount<<" IN "<<edu_time<<" YEARS";
        getch();
    }
    else
    {
        cout<<"\n FIRST PAY EXISTING LOAN THEN APPLY FOR NEW ONE";
        getch();
    }
}
void account::agri_loan_apply()
{
    if(agroloan_totalamount==0)
    {
        cout << "\n AGRICULTURE LOAN";
        cout << "\n ENTER THE CORPS GROWN IN THE FIELD:-\t";
        cin.clear();
        cin.sync();
        cin.getline(agri_crop,200);
        cout << "\n ENTER THE ADDRESS FIELD:-\t";
        cin.clear();
        cin.sync();
        cin.getline(agri_address,800);
        cout << "\n ENTER YOUR AREA OF THE FIELD:-\t";
        cin >> agri_area;
        cout << "\n ENTER THE AMOUNT YOU NEED:-\t";
        cin >> agri_amount;
        cout << "\n ENTER THE TIME(IN YEARS) NEEDED TO FULFILL AMOUNT:-\t";
        cin >> agri_time;
        agroloan_totalamount=agri_amount+((agri_amount*agriloan_rate*agri_time)/100);
        cout<<"\n YOU HAVE TO PAY BACK "<<agroloan_totalamount<<" IN "<<agri_time<<" YEARS";
        getch();
    }
    else
    {
        cout<<"\n FIRST PAY EXISTING LOAN THEN APPLY FOR NEW ONE";
        getch();
    }
}
//functions defination regarding LOAN ends here

//functions defination regarding INSURANCE starts from here

//functions defination regarding INSURANCE end here
//function defination regarding DONATION starts here
void account::donate_pay()
{
    int amount, total; // total is the fund collected till date
    long acc_bal;
    cout << "\n Enter the amount :";
    cin >> amount;
    if (acc_bal >= amount)
    {
        cout << "\n YOUR TRANSACTION IS SUCCESSFUL";
        acc_bal = acc_bal - amount;
        total = total + amount;
        //add show balance
        getch();
    }
    if (acc_bal < amount)
    {
        cout << "\n INSUFFIECIENT BALANCE";
        getch();
    }
}

void account::donatef1() // function for donatiion in cm fund
{
    int df1;
    int total = 505000;
    cout << "   CM Relief Fund \n";
    cout << "1). Donate \n";
    cout << "2). See how many people have donated till date \n";
    cout << "3). See the amount money donated till date \n";
    cout << "Press a number \n";
    cin >> df1;

    if (df1 == 1)
    {
            int amount;
        cout << "\n Enter the amount :";
    cin >> amount;
        pay(amount);
    }
    else if (df1 == 2)
    {
        cout << "1,200+ people have donated till date \n";
    }
    else if (df1 == 3)
    {
        cout << total << " Rs have been donated till date \n";
    }
    else
    {
        cout << "Invalid input \n";
    }
}

void account::donatef2() // donation in pm fund
{
    int df2, total = 1070000;
    cout << "   PM Relief Fund \n";
    cout << "1). Donate \n";
    cout << "2). See how many people have donated till date \n";
    cout << "3). See the amount money donated till date \n";
    cout << "Press a number \n";
    cin >> df2;

    if (df2 == 1)
    {   int amount;
        cout << "\n Enter the amount :";
    cin >> amount;
        pay(amount);
    }
    else if (df2 == 2)
    {
        cout << "2,200+ people have donated till date \n";
    }
    else if (df2 == 3)
    {
        cout << total << " Rs have been donated till date \n";
    }
    else
    {
        cout << "Invalid input \n";
    }
}
void account::donatef3() //function for donation in army charity fund
{
    int df3, total = 2505000;
    cout << "   Army Charity Fund \n";
    cout << "1). Donate \n";
    cout << "2). See how many people have donated till date \n";
    cout << "3). See the amount money donated till date \n";
    cout << "Press a number \n";
    cin >> df3;

    if (df3 == 1)
    {
        int amount;
        cout << "\n Enter the amount :";
    cin >> amount;
        pay(amount);
    }
    else if (df3 == 2)
    {
        cout << "5,600+ people have donated till date \n";
    }
    else if (df3 == 3)
    {
        cout << total << " Rs have been donated till date \n";
    }
    else
    {
        cout << "Invalid input \n";
    }
}

void account::donatef4() //Function df4 for Donation in slapps charity fund
{
    int df4, total = 250000;
    cout << "   SLAPPS Charity Fund \n";
    cout << "1). Donate \n";
    cout << "2). See how many people have donated till date \n";
    cout << "3). See the amount money donated till date \n";
    cout << "Press a number \n";
    cin >> df4;

    if (df4 == 1)
    {
            int amount;
            cout << "\n Enter the amount :";
    cin >> amount;
        pay(amount);
    }
    else if (df4 == 2)
    {
        cout << "500+ people have donated till date \n";
    }
    else if (df4 == 3)
    {
        cout << total << " Rs have been donated till date \n";
    }
    else
    {
        cout << "Invalid input \n";
    }
}
void account::donate_intro()
{
    int donate, choose;
    do{
        
        cout << "Donations \n";
        cout << "1). CM Relief Fund \n";
        cout << "2). PM Relief Fund \n";
        cout << "3). Army Charity Fund \n";
        cout << "4). SLAPSS Charity Fund \n";
        cout << "Press a number \n";
        cin >> donate;
        switch (donate)
        {
            case 1:
                donatef1();
                cout << "\n1). Back to Donation  \n";
            cout << "2). Exit \n";
            cin >> choose;
                break;

            case 2:
                donatef2();
                cout << "\n1). Back to Donation  \n";
            cout << "2). Exit \n";
            cin >> choose;
                break;

            case 3:
                donatef3();
                cout << "\n1). Back to Donation  \n";
            cout << "2). Exit \n";
            cin >> choose;
                break;

            case 4:
                donatef4();
                cout << "\n1). Back to Donation  \n";
            cout << "2). Exit \n";
            cin >> choose;
                break;

            default:

                break;
        }
    }
    while (choose == 1);
}
//function defination regarding DONATION ends here
// functions defination regarding INVEST starts here
void account::invest_intro()
{   int choice;
    do
    {
        cout << "\n WHERE YOU WANT TO INVEST:-" ;
        cout << "\n 01.SAVINGS FUNDS";
        cout << "\n 02.PENSION FUND";
        cout << "\n 03.GOLD FUND";
        cout << "\nENTER YOUR CHOICE(1-3):-\t";
        cin>>choice;
        switch (choice)
        {
            case 1:
                saving_funds();
                break;
            case 2:
                pension_funds();
                break;
            case 3:
                gold_funds();
                break;
            default:
                cout<<"\nWRONG CHOICE";
                getch();
        }

    } while (choice > 9);

}
void account::saving_funds()
{
    
    int amount;

    cout<<"ENTER THE PIN NUMBER:-"<<endl;
    cin>>(pin_no);
    int x=check_pin(pin_no);
    if(x==1){
        cout<<"\nENTER THE AMOUNT DEPOSITED FOR SAVINGS FUND:-\t";
        cin>>amount;
        if(amount<acc_bal)
                {
                    acc_bal=acc_bal-amount;
                    sav_funds=sav_funds+amount;
                    cout<<"YOUR TOTAL SAVINGS  FUNDS ARE: "<<sav_funds;
                    getch();
                }
                else
                 cout<<"\nINSUFFICIENT BALANCE";
                    getch();
    }
    else
        cout<<"\n WRONG PIN";
        getch();
}
void account::pension_funds()
{
    
    int amount;

    cout<<"ENTER THE PIN NUMBER:-"<<endl;
    cin>>(pin_no);
    int x=check_pin(pin_no);
    
    if(x==1){
        cout<<"\nENTER THE AMOUNT DEPOSITED FOR PENSION FUND:-\t";
        cin>>amount;
        
        if(amount<acc_bal){
                acc_bal=acc_bal-amount;
                pen_funds=pen_funds+amount;
                cout<<"YOUR TOTAL PENSION FUNDS ARE: "<<pen_funds;
                getch();
            }
            else
             cout<<"\nINSUFFICIENT BALANCE";
                    getch();

    }
    else
        cout<<"\n WRONG PIN";
        getch();
}
void account::gold_funds()
{
   
    int amount;

    cout<<"ENTER THE PIN NUMBER:-"<<endl;
    cin>>(pin_no);
    int x=check_pin(pin_no);
    
    if(x==1){
                cout<<"\nENTER THE AMOUNT DEPOSITED FOR PENSION FUND:-\t";
                cin>>amount;
               
                if(amount<acc_bal){
                    acc_bal=acc_bal-amount;
                    gold_fund=gold_fund+amount;
                    cout<<"YOUR TOTAL GOLD FUNDS ARE: "<<gold_fund;
                    getch();
                }
                else
                    cout<<"\nINSUFFICIENT BALANCE";
                    getch();
    }
    else
        cout<<"\n WRONG PIN";
        getch();
}
// functions defination regarding PAY TAX start here

void account::pay_taxes()
{
    int tax;
    cout<<"\nENTER YOUR SALARY:-"<<endl;
    cin>>(salary);
    cout<<"\nENTER YOUR PAN NUMBER:-"<<endl;
    cin>>(pan_number);
    if(salary>0 && salary<=250000)
        tax=0;
    else if(salary>250000 && salary<=500000)
        tax=5;
    else if(salary>500000 && salary<=1000000)
        tax=20;
    else if(salary>1000000)
        tax=30;
    cout<<"\nTOTAL TAX PERCENTAGE: "<<tax<<endl;
    int total_tax=salary*tax/100;
    pay(total_tax); 
    getch();
}


    // functions defination regarding PAY TAX end here
    // functions defination regarding INVEST end here
    int admin_login()
    {
        char login_user[60]="abcd";
        char temp_login_user[60];
        char login_pass[60]="abcd";
        char temp_login_pass[60];
        cout<<"\nENTER THE ADMINISTRATION USERNAME:-\t";
        cin.clear();
        cin.sync();
        cin.getline(temp_login_user,60);
        cout<<"\nENTER THE ADMINISTRATION PASSWORD:-\t";
        cin.clear();
        cin.sync();
        cin.getline(temp_login_pass,60);
        if(strcmp(temp_login_pass,login_user)==0)
        {
            if(strcmp(temp_login_pass,login_pass)==0)
            {
                return 1;
            }
            else 
                return 0;
        }
        else 
            return 0;
        

    }
    void admin_main_menu(int m,account n[100])
    {
        int choice;
        do
        {
            system("CLS");
            cout<<"\nHOW CAN WE HELP YOU:-";
            cout<<"\n01.SEE DETAILS OF ALL ACCOUNTS";
            cout<<"\n02.RETURN TO PREVIOUS MENU";
            cout<<"\n03.EXIT";
            cout<<"\nENTER YOUR CHOICE(1-3):-";
            cin>>choice;

            switch(choice)
            {
                case 1:
                    for (int i = 0; i < m; i++)
                    {
                        n[i].show_details();
                    }
                    break;
                case 2:

                    break;
                case 3:
                    exit(0);
                    break;
                default:
                    cout<<"\nWRONG CHOICE";
                    getch();

            }

            
        } while (choice!=2);
    }
int main()
{
    account customer[100];
    int opening_no = 0;
    int current_no=-50;
    char check_user[50];
    char check_pass[50];
    int choice;
    
    do
    {   
        system("CLS");
        cout << "\n------------------------------------------------------------------------------------";
        cout << "\n------------------------------------------------------------------------------------";
        cout << "\n\t\tWELCOME TO SLAPPS BANK";
        cout << "\n------------------------------------------------------------------------------------";
        cout << "\n------------------------------------------------------------------------------------";
        cout << "\n\t MAIN MENU:-";
        cout << "\n\t 01.NEW CUSTOMER";
        cout << "\n\t 02.REGISTERED CUSTOMER LOGIN";
        cout << "\n\t 03.ADMINSTRAION LOGIN";
        cout << "\n\t 04.EXIT";

        cout << "\n ENTER YOUR CHOICE(1-4):-";
        cin >> choice;
        switch (choice)
        {
            case 1:
                customer[opening_no].get_det();
                customer[opening_no].allot_acc_no(opening_no);
                opening_no++;
                break;

            case 2:
                system("CLS");
                cout << "\n ENTER YOUR USER NAME:-\t";
                cin.clear();
                cin.sync();
                cin.getline(check_user,50);
                cout << "\n ENTER YOUR PASSWORD:-\t";
                cin.clear();
                cin.sync();
                cin.getline(check_pass,50);
                for(int i=0;i<opening_no;i++)
                {
                    int x=customer[i].login_check(check_user,check_pass,i);
                    if(x!=-50){
                        current_no=i;
                        break;
                    }
                    if(x=-50){
                        current_no=-50;
                    }
                }
                if(current_no!=-50)
                {
                    customer[current_no].first_window();
                }
                if(current_no==-50)
                {
                    system("CLS");
                    cout << "\n WRONG USERNAME OR PASSWORD";    
                    getch();            
                }
                break;

            case 3:
                    int admin_log_check;
                    admin_log_check=admin_login();
                    if(admin_log_check==1)
                    {
                        admin_main_menu(opening_no,customer);
                    }
                    else
                    {
                        cout<<"\n WRONG ADMIN USERNAME OR PASSWORD";
                        getch();
                    }
                break;
            case 4:
                exit(0);
            

        default:
            cout << "\n WRONG CHOICE";
            getch();
        }
    } while (choice!= 4);
    
    
    return 0;
}
