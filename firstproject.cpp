#include<iostream>
using namespace std;
int main()
{
  int choice1,choice2,choice3,ratings;
  char choice4;
  double bill=0;
  double total_bill=0;
  double discount=0;
  string things_to_improve;
  cout<<"PAK FOODS is a well-known food restaurant in Islamabad, Rawalpindi, and Lahore. People of the twin city love their Pulao Kabab. In fact, it is one of the top eating places in Rawalpindi and Islamabad because of its extensive menu, pleasant environment, high food quality, distinct taste, and reasonable price.We’ve designed a complete Savour Foods price list for your consideration.PAK foods price list is more affordable for metropolitan city dwellers than other Islamabad big restaurants. It has many branches in Islamabad, Rawalpindi, Wah Cantt, and Lahore where they deliver quality pulao, burgers, fried goods, beverages, and traditional sweets to their customers. Not only local residents but tourists enjoy their meals at Savour foods. If you enjoy pulao and ice cream, you must try this restaurant. You won’t be disappointed while grabbing a bite at PAK Foods\n";
  cout <<"********************  Welcome To ZAINI foods *******************************\n"  "************************** Welcome to our Menu ************************************\n" 
  "***********************************************************************************\n"  
  "*                  Burgers                                                        *\n"
  "*      1)  Mack Burger________________ 699                                        *\n"
  "*      2)  Zinger Burger______________ 599                                        *\n"
  "*      3)  Hot Burger ________________ 449                                        *\n"
  "*      4)  Patty Burger_______________ 699                                        *\n"
  "*                                                                                 *\n"
  "***********************************************************************************\n"
  "*                Paratha Roll                                                     *\n"
  "*      1)   Platter_______________    299                                         *\n"
  "*      2)   Cheese________________    349                                         *\n"
  "*      3)   Crispy________________    399                                         *\n"
  "*      4)   Double trouble________    699                                         *\n"
  "***********************************************************************************\n"
  "*               Desi food                                                         *\n"
  "*      1)   Haleem________________  1998                                          *\n"
  "*      2)   Nihaari________________ 299                                           *\n"
  "*      3)   Daal  _________________ 149                                           *\n"
  "*      4)   Chiken karahi _________ 300                                           *\n"
  "*                                                                                 *\n"
  "***********************************************************************************\n"
  "                                                                                   \n";
  cout<<"Press 0 to take select Take away\n"
    "Press 1 to select Dine In \n"
    "Press 2 to select delivery\n"
    "Please choose one of the following options\n";
    cin>>choice1;
    if ( choice1==0)
    {  
      cout<<" _______Press 0 for burger ________\n"
     "________Press 1 for Paratha Roll_____\n"
     "________Press 2 for Pakistani food____\n"
     " which category do you want to choose \n";
     cin>>choice2;
     if (choice2==0)
      {
         cout<< "Please select your desired burger type\n"
         "  1)  Mack Burger_________699 \n"
         "  2)  Zinger Burger_______599 \n"
         "  3)  Hot Burger __________ 449 \n"
         "  4)  Patty Burger_________699 \n"
         "Please select your desired burger type\n";
         cin>>choice3;
         if(choice3==1)
         {
         bill=bill+699;
          }
         else if (choice3==2)
         {
          bill=bill+599;
         }
         else if(choice3==3)
         {
          bill=bill+449;
         }
         else 
         {
          bill=bill+699;
          }
        }
        else if( choice2==1)
        {
           cout<<" Which category do you want to choose \n "
           "select Paratha Roll Type\n"
          " 1)   Platter_______299  \n"
          " 2)   Cheese________349 \n"
          " 3)   Crispy________399\n "
          " 4)   Double trouble_______699\n";

          cin>>choice3;
      
         if(choice3==1)
          {
          bill=bill+299;
          }
          else if(choice3==2)
          {
         bill=bill+349;
          }
         else if (choice3==3)
         {
          bill=bill+399;
          }
          else 
          {
          bill=bill+699;
          }
        }
        else 
       {
          cout<< "Which category do you want to choose\n"
         "select the desi food type \n"
          "Haleem________________199\n"
          "Nihaari________________299\n"
          "Daal  __________________149\n"
         "Chiken karahi _________300\n";

          cin>>choice3;
          if (choice3==1)
          {
          bill=bill+199;
          }
          else if(choice3==2)
          {
          bill=bill+299;
          }
          else if (choice3==3)
          {
          bill=bill+149;
          }
          else 
          {
           bill=bill+300;
          }
        }  
    }
    else 
   {  
      cout<<" _______Press 0 for burger ________\n"
     "________Press 1 for Paratha Roll_____\n"
     "________Press 2 for Pakistani food____\n"
     " which category do you want to choose \n";
     cin>>choice2;
     if (choice2==0)
      {
         cout<< "Please select your desired burger type\n"
         "  1)  Mack Burger_________699 \n"
         "  2)  Zinger Burger_______599 \n"
         "  3)  Hot Burger __________ 449 \n"
         "  4)  Patty Burger_________699 \n"
         "Please select your desired burger type\n";
         cin>>choice3;
         if(choice3==1)
         {
         bill=bill+699;
          }
         else if (choice3==2)
         {
          bill=bill+599;
         }
         else if(choice3==3)
         {
          bill=bill+449;
         }
         else 
         {
          bill=bill+699;
          }
        }
        else if( choice2==1)
        {
           cout<<" Which category do you want to choose \n "
           "select Paratha Roll Type\n"
          " 1)   Platter_______299  \n"
          " 2)   Cheese________349 \n"
          " 3)   Crispy________399\n "
          " 4)   Double trouble_______699\n";

          cin>>choice3;
      
         if(choice3==1)
          {
          bill=bill+299;
          }
          else if(choice3==2)
          {
         bill=bill+349;
          }
         else if (choice3==3)
         {
          bill=bill+399;
          }
          else 
          {
          bill=bill+699;
          }
        }
        else 
       {
          cout<< "Which category do you want to choose\n"
         "select the desi food type \n"
          "Haleem________________199\n"
          "Nihaari________________299\n"
          "Daal  __________________149\n"
         "Chiken karahi _________300\n";

          cin>>choice3;
          if (choice3==1)
          {
          bill=bill+199;
          }
          else if(choice3==2)
          {
          bill=bill+299;
          }
          else if (choice3==3)
          {
          bill=bill+149;
          }
          else 
          {
           bill=bill+300;
          }
        }  
    }
   cout<<"Do you want to order anything else Y/N "<<endl;
   cin>>choice4;
   while(choice4=='Y' || choice4=='y')
   {
    
       cout<<" _______Press 0 for burger ________\n"
      "________Press 1 for Paratha Roll_____\n"
      "________Press 2 for Pakistani food____\n"
      " which category do you want to choose \n";
      cin>>choice2;
      if (choice2==0)
       {
         cout<< "Please select your desired burger type\n"
         "  1)  Mack Burger_________699 \n"
         "  2)  Zinger Burger_______599 \n"
         "  3)  Hot Burger __________ 449 \n"
         "  4)  Patty Burger_________699 \n"
         "Please select your desired burger type\n";
         cin>>choice3;
         if(choice3==1)
         {
         bill=bill+699;
          }
         else if (choice3==2)
         {
          bill=bill+599;
         }
         else if(choice3==3)
         {
          bill=bill+449;
         }
         else 
         {
          bill=bill+699;
          }
        }
        else if( choice2==1)
        {
           cout<<" Which category do you want to choose \n "
           "select Paratha Roll Type\n"
          " 1)   Platter_______299  \n"
          " 2)   Cheese________349 \n"
          " 3)   Crispy________399\n "
          " 4)   Double trouble_______699\n";

          cin>>choice3;
      
         if(choice3==1)
          {
          bill=bill+299;
          }
          else if(choice3==2)
          {
         bill=bill+349;
          }
         else if (choice3==3)
         {
          bill=bill+399;
          }
          else 
          {
          bill=bill+699;
          }
        }
        else 
       {
          cout<< "Which category do you want to choose\n"
         "select the desi food type \n"
          "Haleem________________199\n"
          "Nihaari________________299\n"
          "Daal  __________________149\n"
         "Chiken karahi _________300\n";

          cin>>choice3;
          if (choice3==1)
          {
          bill=bill+199;
          }
          else if(choice3==2)
          {
          bill=bill+299;
          }
          else if (choice3==3)
          {
          bill=bill+149;
          }
          else 
          {
           bill=bill+300;
          }
        } 
        cout<<"Do you want to order anything else Y/N "<<endl;
       cin>>choice4;
    } 
    if(bill>0 && bill<1000)
    {
    discount=bill*0.05;
    }
    else if (bill>=1000 && bill <1500)
    {
      discount=bill*0.1;
    }
    else if (bill>=1500 && bill<2000)
    {
      discount=bill*0.15;
    }
    else if ( bill>=2000 && bill <2500)
    {
     discount=bill*0.2;
    }
    else if( bill>=2500 && bill<3000)
    {
     discount=bill*0.3;
    }
    else 
    {
      discount=bill*0.5;
    } 
    cout<<" Your Discount is "<<discount<<endl;
    total_bill=bill-discount;
    cout<<" Your Bill Is "<<total_bill<<endl;   
    cout<<"                                                               \n"
      " Plzz give ratings to our resturant                                \n"
      "How was our services                                               \n"
       "please give ratings                                                \n";
    cin>>ratings;
    cout<<"please type which services  needs  to improve"<<endl;
    cin>>things_to_improve;
     cout<<"Thanks for choosing our sevices                                  \n" ;






return 0;
}