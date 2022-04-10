#include <iostream>

using namespace std;

int main()
{
    top:
        system("cls");
        system("color 3");
    cout<<"                            Welcome to the program!!!! " <<endl;
    cout<<endl;
    cout<<"1. Mathematics table"<<endl;
    cout<<endl;
    cout<<"2. Quiz"<<endl;
    cout<<endl;
    cout<<"3. Calculator(Under Development)"<<endl;
    cout<<endl;
    cout<<"4. To find inverse of 2 X 2 matrix"<<endl;
    cout<<endl;
    cout<<"5. Fraction to decimal convertor"<<endl;
    cout<<endl;
    cout<<"6. Number system Convertor (Under Development)"<<endl;
    cout<<endl;
    cout<<endl;
    string choice;
    cout<<"Enter your choice : ";
    cin>>choice;
    if ( choice=="1" )
{
    system("color 5");
        first:
        double integer;
            system("cls");
        cout<<"Which table do you want : ";
        cin>>integer;
        cout<<endl;
        for (double i= 1; i<=10; i++)
        {
            cout<< integer << " * " << i << " = " << integer * i <<endl;
        }
        cout<<endl;
        string input;
        cout<<"Press X to goto main menu or Y to redo it again : ";
        cin>>input;
        if ( input == "x")
    goto top;
            else if (input=="y")
                 goto first;
}
   else if ( "2" == choice )
 {
     system("color 6");
    second:
    system("cls");
    string name;
    cout<<"Enter your name to continue: ";
    cin>>name;
    system("cls");
    cout<<"(Note enter all the answers in lowercase letters)"<<endl;
    cout<<endl;
    int s1;
    int s2;
    int s3;
    int s4;
    int s5;
    int s6;
    int s7;
    int s8;
    int s9;
    int s10;
    string a1;
    string b1="aryabhatt";
    string c1;
    string d1;
    cout<<"1. What was the first satellite of India? ";
    cin>>a1;
    cout<<endl;
    string a2;
    string b2="argentina";
    cout<<"2. Which country did Messi played for? ";
    cin>>a2;
    cout<<endl;
    string a3;
    string  b3="10";
    cout<<"3. What is the jersey number of Sachin Tendulkar? ";
    cin>>a3;
    cout<<endl;
    string a4;
    string b4="london";
    cout<<"4. From which country is GMT measured? ";
    cin>>a4;
    cout<<endl;
    string a5;
    string b5="sundar";
    cout<<"5. Who is the present CEO of Google? (Enter the first name only) ";
    cin>>a5;
    cout<<endl;
    string a6;
    string b6="tim";
    cout<<"6. Who is the CEO of Apple? (Enter the first name only) ";
    cin>>a6;
    cout<<endl;
    string a7;
    string b7="indonesia";
    cout<<"7. Which country has more number of island? ";
    cin>>a7;
    cout<<endl;
    string a8;
    string b8="sahara";
    cout<<"8. Which is the largest desert of World? ";
    cin>>a8;
    cout<<endl;
    string a9;
    string b9="nile";
    cout<<"9. Which is the longest river of world? ";
    cin>>a9;
    cout<<endl;
    string a10;
    string b10="saudi";
    cout<<"10. Which country has no cinema hall? ";
    cin>>a10;
   system("cls");
   cout<<endl;
   cout<<"    Correct answers       |       Answers you entered"<<endl;
   cout<<endl;
   if (a1==b1)
    {
        c1="Correct";
        s1=1;
   cout<<"   1.  aryabhatt                     "<<   a1   <<"         |           "<<   c1   <<endl;
    }
    else if(a1!=b1)
    {
        d1="Incorrect";
         s1=0;
   cout<<"   1.  aryabhatt                     "<<   a1   <<"         |          "<<   d1   <<endl;

    }
   if (a2==b2)
    {
        c1="Correct";
        s2=1;


   cout<<"   2.  argentina                     "<<   a2   <<"         |        "<<   c1   <<endl;
    }
    else if(a2!=b2)
    {
        d1="Incorrect";
         s2=0;
   cout<<"   2.  argentina                     "<<   a2   <<"         |          "<<   d1   <<endl;

    }
   if (a3==b3)
   {
       c1="Correct";
         s3=1;
   cout<<"   3.  10                            "<<   a3   <<"         |          "<<   c1   <<endl;
   }
   else if(a3!=b3)
   {
       d1="Incorrect";
          s3=0;
   cout<<"   3.  10                            "<<   a3   <<"         |          "<<   d1   <<endl;

   }
   if (a4==b4)
   {
       c1="Correct";
      s4=1;
    cout<<"   4.  london                        "<<   a4   <<"                    "<<   c1  <<endl;
   }
   else if(a4!=b4)
   {
       d1="Incorrect";
s4=0;
    cout<<"   4.  london                        "<<   a4   <<"                    "<<  d1   <<endl;

   }
   if (a5==b5)
   {
       c1="Correct";
s5=1;
    cout<<"   5.  sundar                        "<<   a5   <<"                    "<<c1<<endl;
   }
   else if(a5!=b5)
   {
       d1="Incorrect";
s5=0;
    cout<<"   5.  sundar                        "<<   a5   <<"                    "<<d1<<endl;

   }
   if (a6==b6)
   {
       c1="Correct";
s6=1;
    cout<<"   6.  tim                           "<<   a6   <<"                    "<<c1<<endl;
   }
   else if(a6!=b6)
   {
       d1="Incorrect";
s6=0;
    cout<<"   6.  tim                           "<<   a6   <<"                    "<<d1<<endl;

   }
   if (a7==b7)
   {
       c1="Correct";
s7=1;
    cout<<"   7.  indonesia                     "<<   a7   <<"                    "<<c1<<endl;
   }
   else if(a7!=b7)
   {
       d1="Incorrect";
s7=0;
    cout<<"   7.  indonesia                     "<<   a7   <<"                    "<<d1<<endl;

   }
   if (a8==b8)
   {
       c1="Correct";
s8=1;
    cout<<"   8.  sahara                        "<<   a8   <<"                    "<<c1<<endl;
   }
   else if(a8!=b8)
   {
       d1="Incorrect";
s8=0;
    cout<<"   8.  sahara                        "<<   a8   <<"                    "<<d1<<endl;

   }
   if (a9==b9)
   {
      c1="Correct";
s9=1;
    cout<<"   9.  nile                          "<<   a9   <<"                    "<<c1<<endl;
   }
   else if(a9!=a9)
   {
       d1="Icorrect";
s9=0;
    cout<<"   9.  nile                          "<<   a9   <<"                    "<<d1<<endl;

   }
          if (a10==b10)
   {
      c1="Correct";
s10=1;
    cout<<"  10.  saudi                         "<<   a10  <<"                    "<<c1<<endl;

   }
   else if(a10!=a10)
   {
       d1="Icorrect";
s10=0;
    cout<<"   10.  saudi                        "<<   a10  <<"                    "<<d1<<endl;
      cout<<endl;
   }
   int total;
   cout<<endl;
   total=s1+s2+s3+s4+s5+s6+s7+s8+s9+s10;
   if (total==10)
   {
   cout<<name<<"."<<" Congrats!!!!!! You scored "<<total<<" out of 10";
   }
   else
   {
   cout<<name<<" you scored "<<total<<" out of 10 "<<endl;
   }

   cout<<endl;
       string input;
    cout<<endl;
        cout<<"Press X to goto main menu or Y to play again : ";
        cin>>input;
        if ( input == "x")
    goto top;
            else if (input=="y")
                 goto second;
}
   else if("3"==choice)
    {
        system("color 9");
   third:
    system("cls");
       string input;
        cout<<"Press X to goto main menu or Y to calculate again : ";
        cin>>input;
        if ( input == "x")
    goto top;
            else if (input=="y")
                 goto third;
    }
    else if(choice=="4")
    {
        system("color 6");
    fourth:
        system("cls");
        cout<<"Enter the value of A matrix in the given form below"<<endl;
        cout<<"Eg. | 3 4 |"<<endl;
        cout<<"    | 4 5 |"<<endl;
        double b1;
        double b2;
        double b3;
        double b4;
        cout<<endl;
        cin>>b1>>b2;
        cout<<endl;
        cin>>b3 >>b4;
        cout<<endl;
        double determinant1 = b1 * b4;
        double determinant2 = b2 * b3;
        double determinant = determinant1 - determinant2;
        cout<<endl;
        system("cls");
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"                                       Determinant = "<<determinant;
        double inverse1=b4/determinant;
        double inverse2=(-b2)/determinant;
        double inverse3=(-b3)/determinant;
        double inverse4=(b1)/determinant;
        cout<<endl;
          cout<<endl;
        cout<<endl;
        cout<<"Inverse = "<<" |"<<inverse1<< "   " <<inverse2<<"|"<<endl;
        cout<<"          "<<" |"<<inverse3<< "   "<<inverse4<<"|";
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        string input;
   cout<<endl;
        cout<<"Press X to goto main menu or Y to find inverse again  : ";
        cin>>input;
        if ( input == "x")
    goto top;
            else if (input=="y")
                 goto fourth;
    }
    else if(choice=="5")
    {
        fifth:
        system("cls");
        double numerator;
        double denominator;
        cout<<"Enter numerator : ";
        cin>>numerator;
        cout<<endl;
        cout<<"Enter denominator : ";
        cin>>denominator;
        cout<<endl;
        cout<<" " <<numerator<<endl;
        cout<<" "<<"-"<< "  " << "  =  "  << "  " << numerator/denominator<<endl;
        cout<<" " <<denominator<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        string input;
         cout<<"Press X to goto main menu or Y convert again  : ";
        cin>>input;
        if ( input == "x")
    goto top;
            else if (input=="y")
                 goto fifth;
    }
    else if (choice=="6")
    {
        sixth:
            system("cls");
            int number;
        cout<<"1. Binary to Decimal"<<endl;
        cout<<"2. Decimal to Bianry"<<endl;
        cin>>number;

    string input;
         cout<<"Press X to goto main menu or Y convert again  : ";
        cin>>input;
        if ( input == "x")
    goto top;
            else if (input=="y")
                 goto sixth;
    }
    else if(choice>="6" || choice<="10000000" || choice=="0")
    system("cls");
        system("color 7");
    cout<<"Error"<<"         "<<"Error"<<"          "<<"Error"<<"          "<<"Error"<<"          "<<"Error"<<"          "<<"Error"<<        endl;
    cout<<endl;
    cout<<endl;
    cout<<"Error"<<"         "<<"Error"<<"          "<<"Error"<<"          "<<"Error"<<"          "<<"Error"<<"          "<<"Error"<<        endl;
    cout<<endl;
    cout<<endl;
    cout<<"Error"<<"         "<<"Error"<<"          "<<"Error"<<"          "<<"Error"<<"          "<<"Error"<<"          "<<"Error"<<        endl;
    cout<<endl;
    cout<<endl;
    cout<<"Error"<<"         "<<"Error"<<"          "<<"Error"<<"          "<<"Error"<<"          "<<"Error"<<"          "<<"Error"<<        endl;
    cout<<endl;
    cout<<endl;
    cout<<"Error"<<"         "<<"Error"<<"          "<<"Error"<<"          "<<"Error"<<"          "<<"Error"<<"          "<<"Error"<<        endl;
    cout<<endl;
    cout<<endl;
    cout<<"Error"<<"         "<<"Error"<<"          "<<"Error"<<"          "<<"Error"<<"          "<<"Error"<<"          "<<"Error"<<        endl;
    cout<<endl;
    cout<<endl;
    cout<<"Error"<<"         "<<"Error"<<"          "<<"Error"<<"          "<<"Error"<<"          "<<"Error"<<"          "<<"Error"<<        endl;
    cout<<endl;
    cout<<endl;
    cout<<"Error"<<"         "<<"Error"<<"          "<<"Error"<<"          "<<"Error"<<"          "<<"Error"<<"          "<<"Error"<<        endl;
    cout<<endl;
    cout<<endl;
    cout<<"Error"<<"         "<<"Error"<<"          "<<"Error"<<"          "<<"Error"<<"          "<<"Error"<<"          "<<"Error"<<        endl;
    cout<<endl;
    cout<<endl;
    //
    goto top;
}
