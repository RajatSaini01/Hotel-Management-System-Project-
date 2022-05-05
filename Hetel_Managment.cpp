#include<iostream>
#include<string>
using namespace std;

int main(){
    int Aroom=50,ACRoom=15, NACRoom=35;
    int  ACBroom=0,NABRoom=0;

    choice:
    cout<<"Enter Your Choice\n\t\t1: Room Booking.\n\t\t2: Order Food\n\t\t3: exit"<<endl;
    int choice1;
    cin>>choice1;
    switch (choice1)
    {
    case 1:
        loop1:
        cout<<"Enter the Room Choice:"<<endl;
        cout<<"\t\t1: AC\n\t\t2: Non-AC\n\t\t3: Back\n\t\t4: Exit"<<endl;
        int choice2;
        cin>>choice2;
        switch (choice2)
        {
        case 1:
            cout<<"Enter the Number of Room/Rooms:"<<endl;
            int NoRoom;
            cin>>NoRoom;
            if((ACRoom-ACBroom)>=NoRoom){
                cout<<"Your Booking is Confirmed"<<endl;
                ACBroom=ACBroom+NoRoom;
                cout<<"Would you like to explore other options."<<endl;
                string choice3;
                cout<<"Enter YES or NO"<<endl;
                cin>>choice3;
                if(choice3=="YES"||choice3=="yes"){
                    goto choice;
                }
                else if(choice3=="NO"|| choice3=="no"){
                    cout<<"Bye-Bye! Have happy time."<<endl;
                    exit(0);
                }
                else{
                    cout<<"Enter valid choice"<<endl;
                }
            }
            else{
                cout<<"Booking is not confirmed"<<endl;
                cout<<"\t\tOnly "<<(ACRoom-ACBroom)<<" AC Room/Rooms are available\n\n\t\tYou can Try other options"<<endl;
                goto loop1;
            }
            
            break;
        case 2: 
            cout<<"Enter the Number of Room/Rooms:"<<endl;
            int NoRoom2;
            cin>>NoRoom2;
            if((NACRoom-NABRoom)>=NoRoom2){
                cout<<"Your Booking is Confirmed"<<endl;
                NABRoom=NABRoom+NoRoom2;
                cout<<"Would you like to explore other options."<<endl;
                string choice3;
                cout<<"Enter YES or NO"<<endl;
                cin>>choice3;
                if(choice3=="YES"||choice3=="yes"){
                    goto choice;
                }
                else if(choice3=="NO"|| choice3=="no"){
                    cout<<"Bye-Bye! Have happy time."<<endl;
                    exit(0);
                }
                else{
                    cout<<"Enter valid choice"<<endl;
                }
            }
            else{
                cout<<"Booking is not Confirmed"<<endl;
                cout<<"\t\tOnly "<<(NACRoom-NABRoom)<<" Non-AC Room/Rooms are availabe\n\n\t\tYou can try other options"<<endl;
                goto loop1;
            }
            
            break;
        case 3:
              goto choice;

        case 4: 
             exit(0); 
        default:
             cout<<"Enter the valid Choice."<<endl;
             goto loop1;
            break;
        }
        break;
    case 2:
       loop3:
        cout<<"Indian"<<endl;
        cout<<"\t\t1: Paneer Butter Masala\n\t\t2: Paneer Tikka\n\t\t3: Daal Fry\n\t\t4: Daal Tadka"<<endl;
        cout<<"\t\t5: Mix Veg\n\t\t6: Rice\n\t\t7: Chapati"<<endl;
        cout<<"chinees:"<<endl;
        cout<<"\t\t8: Noodles\n\t\t9: Spring Rolls\n\t\t10: Honey Chilli Potato\n\t\t11: Peri Peri"<<endl;
        int choice4;
        cout<<"Enter the choice:"<<endl;
        cin>>choice4;
        if(choice4==1){
            loop2:
            cout<<"Enter the quantity:"<<endl;
            cout<<"\t\tHalf\n\t\tFull"<<endl;
            string quant1;
            cin>>quant1;
            if(quant1=="Half"||quant1=="half"||quant1=="HALF"){
                    cout<<"\t\tYour Order for half Paneer Butter Masala is confirmed"<<endl;
                    cout<<"\t\tOrder is being prepared. Please wait."<<endl;
                    cout<<"Would you like to order something else?(Yes/NO)"<<endl;
                    string decision;
                    cin>>decision;
                    if(decision=="yes"||decision=="Yes"||decision=="YES"){
                         goto loop3; 
                    }
                    else if(decision=="no"|| decision=="No"|| decision=="NO"){
                        exit(0);
                    }
                    else{
                        cout<<"Enter valid Choice.";
                    }

                }
            else if(quant1=="Full"||quant1=="full"||quant1=="FULL"){
                    cout<<"\t\tYour Order for full Paneer Butter Masala is confirmed"<<endl;
                    cout<<"\t\tOrder is being prepared. Please wait."<<endl; 
                    cout<<"Would you like to order something else?(Yes/No)"<<endl;
                    string decision;
                    cin>>decision;
                    if(decision=="yes"||decision=="Yes"||decision=="YES"){
                         goto loop3; 
                    }
                   else if(decision=="no"|| decision=="No"|| decision=="NO"){
                        exit(0);
                    }
                    else{
                        cout<<"Enter valid Choice.";
                    }
                      
            }
            else{
                cout<<"Enter the valid Quantity."<<endl;
                goto loop2;
            }
            
        }
        else if(choice4==2){
            loop4:
            cout<<"Enter the quantity:"<<endl;
            cout<<"\t\tHalf\n\t\tFull"<<endl;
            string quant1;
            cin>>quant1;
            if(quant1=="Half"||quant1=="half"||quant1=="HALF"){
                    cout<<"\t\tYour Order for half Paneer Tikka is confirmed"<<endl;
                    cout<<"\t\tOrder is being prepared. Please wait."<<endl;
                    cout<<"Would you like to order something else?(Yes/NO)"<<endl;
                    string decision;
                    cin>>decision;
                    if(decision=="yes"||decision=="Yes"||decision=="YES"){
                         goto loop3; 
                    }
                    else if(decision=="no"|| decision=="No"|| decision=="NO"){
                        exit(0);
                    }
                    else{
                        cout<<"Enter valid Choice.";
                    }

                }
            else if(quant1=="Full"||quant1=="full"||quant1=="FULL"){
                    cout<<"\t\tYour Order for full Paneer Tikka is confirmed"<<endl;
                    cout<<"\t\tOrder is being prepared. Please wait."<<endl; 
                    cout<<"Would you like to order something else?(Yes/No)"<<endl;
                    string decision;
                    cin>>decision;
                    if(decision=="yes"||decision=="Yes"||decision=="YES"){
                         goto loop3; 
                    }
                   else if(decision=="no"|| decision=="No"|| decision=="NO"){
                        exit(0);
                    }
                    else{
                        cout<<"Enter valid Choice.";
                    }
                      
            }
            else{
                cout<<"Enter the valid Quantity."<<endl;
                goto loop4;
            }
            
        }
        if(choice4==3){
            loop5:
            cout<<"Enter the quantity:"<<endl;
            cout<<"\t\tHalf\n\t\tFull"<<endl;
            string quant1;
            cin>>quant1;
            if(quant1=="Half"||quant1=="half"||quant1=="HALF"){
                    cout<<"\t\tYour Order for half Daal Fry is confirmed"<<endl;
                    cout<<"\t\tOrder is being prepared. Please wait."<<endl;
                    cout<<"Would you like to order something else?(Yes/NO)"<<endl;
                    string decision;
                    cin>>decision;
                    if(decision=="yes"||decision=="Yes"||decision=="YES"){
                         goto loop3; 
                    }
                    else if(decision=="no"|| decision=="No"|| decision=="NO"){
                        exit(0);
                    }
                    else{
                        cout<<"Enter valid Choice.";
                    }

                }
            else if(quant1=="Full"||quant1=="full"||quant1=="FULL"){
                    cout<<"\t\tYour Order for full Daal Fry is confirmed"<<endl;
                    cout<<"\t\tOrder is being prepared. Please wait."<<endl; 
                    cout<<"Would you like to order something else?(Yes/No)"<<endl;
                    string decision;
                    cin>>decision;
                    if(decision=="yes"||decision=="Yes"||decision=="YES"){
                         goto loop3; 
                    }
                   else if(decision=="no"|| decision=="No"|| decision=="NO"){
                        exit(0);
                    }
                    else{
                        cout<<"Enter valid Choice.";
                    }
                      
            }
            else{
                cout<<"Enter the valid Quantity."<<endl;
                goto loop5;
            }
            
        }
        if(choice4==4){
            loop6:
            cout<<"Enter the quantity:"<<endl;
            cout<<"\t\tHalf\n\t\tFull"<<endl;
            string quant1;
            cin>>quant1;
            if(quant1=="Half"||quant1=="half"||quant1=="HALF"){
                    cout<<"\t\tYour Order for half Daal Tadka is confirmed"<<endl;
                    cout<<"\t\tOrder is being prepared. Please wait."<<endl;
                    cout<<"Would you like to order something else?(Yes/NO)"<<endl;
                    string decision;
                    cin>>decision;
                    if(decision=="yes"||decision=="Yes"||decision=="YES"){
                         goto loop3; 
                    }
                    else if(decision=="no"|| decision=="No"|| decision=="NO"){
                        exit(0);
                    }
                    else{
                        cout<<"Enter valid Choice.";
                    }

                }
            else if(quant1=="Full"||quant1=="full"||quant1=="FULL"){
                    cout<<"\t\tYour Order for full Daal Tadka is confirmed"<<endl;
                    cout<<"\t\tOrder is being prepared. Please wait."<<endl; 
                    cout<<"Would you like to order something else?(Yes/No)"<<endl;
                    string decision;
                    cin>>decision;
                    if(decision=="yes"||decision=="Yes"||decision=="YES"){
                         goto loop3; 
                    }
                   else if(decision=="no"|| decision=="No"|| decision=="NO"){
                        exit(0);
                    }
                    else{
                        cout<<"Enter valid Choice.";
                    }
                      
            }
            else{
                cout<<"Enter the valid Quantity."<<endl;
                goto loop6;
            }
            
        }
        if(choice4==5){
            loop7:
            cout<<"Enter the quantity:"<<endl;
            cout<<"\t\tHalf\n\t\tFull"<<endl;
            string quant1;
            cin>>quant1;
            if(quant1=="Half"||quant1=="half"||quant1=="HALF"){
                    cout<<"\t\tYour Order for half Mix Veg is confirmed"<<endl;
                    cout<<"\t\tOrder is being prepared. Please wait."<<endl;
                    cout<<"Would you like to order something else?(Yes/NO)"<<endl;
                    string decision;
                    cin>>decision;
                    if(decision=="yes"||decision=="Yes"||decision=="YES"){
                         goto loop3; 
                    }
                    else if(decision=="no"|| decision=="No"|| decision=="NO"){
                        exit(0);
                    }
                    else{
                        cout<<"Enter valid Choice.";
                    }

                }
            else if(quant1=="Full"||quant1=="full"||quant1=="FULL"){
                    cout<<"\t\tYour Order for full Mix Veg is confirmed"<<endl;
                    cout<<"\t\tOrder is being prepared. Please wait."<<endl; 
                    cout<<"Would you like to order something else?(Yes/No)"<<endl;
                    string decision;
                    cin>>decision;
                    if(decision=="yes"||decision=="Yes"||decision=="YES"){
                         goto loop3; 
                    }
                   else if(decision=="no"|| decision=="No"|| decision=="NO"){
                        exit(0);
                    }
                    else{
                        cout<<"Enter valid Choice.";
                    }
                      
            }
            else{
                cout<<"Enter the valid Quantity."<<endl;
                goto loop7;
            }
            
        }
        if(choice4==6){
            loop8:
            cout<<"Enter the quantity:"<<endl;
            cout<<"\t\tHalf\n\t\tFull"<<endl;
            string quant1;
            cin>>quant1;
            if(quant1=="Half"||quant1=="half"||quant1=="HALF"){
                    cout<<"\t\tYour Order for half Rice is confirmed"<<endl;
                    cout<<"\t\tOrder is being prepared. Please wait."<<endl;
                    cout<<"Would you like to order something else?(Yes/NO)"<<endl;
                    string decision;
                    cin>>decision;
                    if(decision=="yes"||decision=="Yes"||decision=="YES"){
                         goto loop3; 
                    }
                    else if(decision=="no"|| decision=="No"|| decision=="NO"){
                        exit(0);
                    }
                    else{
                        cout<<"Enter valid Choice.";
                    }

                }
            else if(quant1=="Full"||quant1=="full"||quant1=="FULL"){
                    cout<<"\t\tYour Order for full Rice is confirmed"<<endl;
                    cout<<"\t\tOrder is being prepared. Please wait."<<endl; 
                    cout<<"Would you like to order something else?(Yes/No)"<<endl;
                    string decision;
                    cin>>decision;
                    if(decision=="yes"||decision=="Yes"||decision=="YES"){
                         goto loop3; 
                    }
                   else if(decision=="no"|| decision=="No"|| decision=="NO"){
                        exit(0);
                    }
                    else{
                        cout<<"Enter valid Choice.";
                    }
                      
            }
            else{
                cout<<"Enter the valid Quantity."<<endl;
                goto loop8;
            }
            
        }
        if(choice4==7){
            loop9:
            cout<<"How many Chapati do you want?: ";
            int Nchapati;

            cin>>Nchapati;
            if(Nchapati<=0){
                    cout<<"Please Enter valid Quantity"<<endl;
                    goto loop9;
            }
            else if(Nchapati>0){
                cout<<"\t\tYour order for "<<Nchapati<<" chapati is confirmed"<<endl;
                cout<<"\t\tOrder is being prepared. Please wait."<<endl;
                cout<<"Would you like to order something else?(Yes/No)"<<endl;
                    string decision;
                    cin>>decision;
                    if(decision=="yes"||decision=="Yes"||decision=="YES"){
                         goto loop3; 
                    }
                   else if(decision=="no"|| decision=="No"|| decision=="NO"){
                        exit(0);
                    }
                    else{
                        cout<<"Enter valid Choice.";
                    }
            }
        }
        
        if(choice4==8){
            loop10:
            cout<<"Enter the quantity:"<<endl;
            cout<<"\t\tHalf\n\t\tFull"<<endl;
            string quant1;
            cin>>quant1;
            if(quant1=="Half"||quant1=="half"||quant1=="HALF"){
                    cout<<"\t\tYour Order for half Noodles is confirmed"<<endl;
                    cout<<"\t\tOrder is being prepared. Please wait."<<endl;
                    cout<<"Would you like to order something else?(Yes/NO)"<<endl;
                    string decision;
                    cin>>decision;
                    if(decision=="yes"||decision=="Yes"||decision=="YES"){
                         goto loop3; 
                    }
                    else if(decision=="no"|| decision=="No"|| decision=="NO"){
                        exit(0);
                    }
                    else{
                        cout<<"Enter valid Choice.";
                    }

                }
            else if(quant1=="Full"||quant1=="full"||quant1=="FULL"){
                    cout<<"\t\tYour Order for full Noodles is confirmed"<<endl;
                    cout<<"\t\tOrder is being prepared. Please wait."<<endl; 
                    cout<<"Would you like to order something else?(Yes/No)"<<endl;
                    string decision;
                    cin>>decision;
                    if(decision=="yes"||decision=="Yes"||decision=="YES"){
                         goto loop3; 
                    }
                   else if(decision=="no"|| decision=="No"|| decision=="NO"){
                        exit(0);
                    }
                    else{
                        cout<<"Enter valid Choice.";
                    }
                      
            }
            else{
                cout<<"Enter the valid Quantity."<<endl;
                goto loop10;
            }
            
        }
        if(choice4==9){
            loop11:
            cout<<"How many Spring Role do you want?: ";
            int Nspring;

            cin>>Nspring;
            if(Nspring<=0){
                    cout<<"Please Enter valid Quantity"<<endl;
                    goto loop11;
            }
            else if(Nspring>0){
                cout<<"\t\tYour order for "<<Nspring<<" Spring Role is confirmed"<<endl;
                cout<<"\t\tOrder is being prepared. Please wait."<<endl;
                cout<<"Would you like to order something else?(Yes/No)"<<endl;
                    string decision;
                    cin>>decision;
                    if(decision=="yes"||decision=="Yes"||decision=="YES"){
                         goto loop3; 
                    }
                   else if(decision=="no"|| decision=="No"|| decision=="NO"){
                        exit(0);
                    }
                    else{
                        cout<<"Enter valid Choice.";
                    }
            }
        }
        if(choice4==10){
            loop12:
            cout<<"How many Honey Chilli Potato do you want?: ";
            int Nchilli;

            cin>>Nchilli;
            if(Nchilli<=0){
                    cout<<"Please Enter valid Quantity"<<endl;
                    goto loop12;
            }
            else if(Nchilli>0){
                cout<<"\t\tYour order for "<<Nchilli<<" Honey Chilli Potato is confirmed"<<endl;
                cout<<"\t\tOrder is being prepared. Please wait."<<endl;
                cout<<"Would you like to order something else?(Yes/No)"<<endl;
                    string decision;
                    cin>>decision;
                    if(decision=="yes"||decision=="Yes"||decision=="YES"){
                         goto loop3; 
                    }
                   else if(decision=="no"|| decision=="No"|| decision=="NO"){
                        exit(0);
                    }
                    else{
                        cout<<"Enter valid Choice.";
                    }
            }
        }
        if(choice4==11){
            loop13:
            cout<<"How many Peri Peri do you want?: ";
            int Nperi;

            cin>>Nperi;
            if(Nperi<=0){
                    cout<<"Please Enter valid Quantity"<<endl;
                    goto loop13;
            }
            else if(Nperi>0){
                cout<<"\t\tYour order for "<<Nperi<<" Peri Peri is confirmed"<<endl;
                cout<<"\t\tOrder is being prepared. Please wait."<<endl;
                cout<<"Would you like to order something else?(Yes/No)"<<endl;
                    string decision;
                    cin>>decision;
                    if(decision=="yes"||decision=="Yes"||decision=="YES"){
                         goto loop3; 
                    }
                   else if(decision=="no"|| decision=="No"|| decision=="NO"){
                        exit(0);
                    }
                    else{
                        cout<<"Enter valid Choice.";
                    }
            }
        }
        else{
            cout<<"Enter valid Choice:"<<endl;
            goto loop3;
        }
        break;
    case 3: 
         exit(0);
    default:
        cout<<"Enter the valid Choice"<<endl;
        goto choice;
        break;
    }
    return 0;
}