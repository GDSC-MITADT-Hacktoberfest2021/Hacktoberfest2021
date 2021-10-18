#include <iostream>

using namespace std;

int main(void)
{
    int DD = 32, MM = 13, YYYY = -1, NYYYY, NMM, IDAY, day, flag = 0;
    
    string month[] = {"January","February","March","April","May","June","July",
                      "August","September","October","November","December"};

    cout<<"Enter The Date = ";
    cin >> DD;
    cout<<"Enter the Month = ";
    cin >> MM;
    cout<<"Enter the Year = ";
    cin >> YYYY;
    
    if(DD == 32 && MM == 13 && YYYY == -1)
    {
        cout << " Please enter your birthday in this " << endl;
        cout << "     format(including spaces):      " << endl;
        cout << "            DD MM YYYY              " << endl;
        cout << "            22 01 1997              " << endl;
        return -1;
    }
    
    if(DD <= 0)
    {
  
        if(MM <= 0)
        {             
            cout << " We don't have negative or null days and months. " << endl;
            cout << "                   Try again!                    " << endl;
            return -1;
        }
        
 
        cout << " We don't have negative or null days. " << endl;
        cout << "              Try again!              " << endl;
        return -1;
    }
    
    if(MM <= 0)
    {
    
        cout << " We don't have negative or null months. " << endl;
        cout << "               Try again!               " << endl;
        return -1;
    }
    
    if(DD > 31 || MM > 12 || YYYY <= 0)
    {
        if(DD > 31 && MM > 12)
        {

            if(YYYY <= 0)
            {
                cout << " We have 12 months, the days of a month are up to 31 " << endl;
                cout << "       and a year should be a positive number.       " << endl;
                cout << "                     Try again!                      " << endl;
            }

            else
            {
                cout << "       We have 12 months and       " << endl;
                cout << " the days of a month are up to 31. " << endl;
                cout << "            Try again!             " << endl;
            }
                
        }
        else if(DD > 31 && MM <= 12)
        {
    
            if(YYYY <= 0)
            {
                cout << " The days of a month are up to 31 and " << endl;
                cout << " a year should be a positive number.  " << endl;
                cout << "             Try again!               " << endl;
            }

            else 
            {
                cout << " The days of a month are up to 31. " << endl;
                cout << "            Try again!             " << endl;
            }
                
        }
        else if(DD <= 31 && MM > 12)
        {

            if(YYYY <= 0)
            {
                cout << "        We have 12 months and        " << endl;
                cout << " a year should be a positive number. " << endl;
                cout << "             Try again!              " << endl;
            }

            else
            {
                cout << " We have 12 months. " << endl;
                cout << "     Try again!     " << endl;
            }
                
        }
 
        else if(DD <= 31 && MM <= 12 && YYYY <= 0)
        {
            cout << " A year should be a positive number. " << endl;
            cout << "             Try again!              " << endl;
        }
        return -1;
    }
    
    switch(MM)
    {
        case 2:
            
            if((YYYY % 400) == 0 || ((YYYY % 4) == 0 && (YYYY % 100) != 0))
            {
                if(DD > 29)
                {
                    cout << "  The year " << YYYY << " is a leap year. " << endl;
                    cout << " So, February has up to 29 days.          " << endl;
                    cout << "           Try again!                     " << endl;
                    return -1;
                }
            }
            else
            {

                if(DD > 28)
                {
                    cout << " The year " << YYYY << " isn't a leap year. " << endl;
                    cout << " So, February has up to 28 days.            " << endl;
                    cout << "           Try again!                       " << endl;
                    return -1;
                }
            }
            break;
            
        case 4:

            if(DD > 30)
            {
                cout << " April has up to 30 days. " << endl;
                cout << "        Try again!        " << endl;
                return -1;
            }
            break;
              
        case 6:

            if(DD > 30)
            {
                cout << " June has up to 30 days. " << endl;
                cout << "       Try again!        " << endl;
                return -1;
            }
            break;
        
        case 9:

            if(DD > 30)
            {
                cout << " September has up to 30 days. " << endl;
                cout << "          Try again!          " << endl;
                return -1;
            }
            break;
            
        case 11:

            if(DD > 30)
            {
                cout << " November has up to 30 days. " << endl;
                cout << "         Try again!          " << endl;
                return -1;
            }
            break;
    }
    
    if(MM <= 2)
    {
        NYYYY = YYYY - 1;
        NMM = 0;
    }
    else
    {
        NYYYY = YYYY;
        NMM = (4 * MM + 23) / 10;
    }
    

    IDAY = 365 * YYYY + DD + 31 * (MM - 1) - NMM + (NYYYY / 4) - ((3 * ((NYYYY / 100) + 1) / 4));
    
    day = IDAY % 7;
    

    if(DD != 11 && DD != 12 && DD != 13)
        flag = DD % 10;
    
    switch(day)
    {
        case 0:
            cout << " You were born on Saturday, ";
            break;
            
        case 1:
            cout << " You were born on Sunday, ";
            break;
            
        case 2:
            cout << " You were born on Monday, ";
            break;
            
        case 3:
            cout << " You were born on Tuesday, ";
            break;
            
        case 4:
            cout << " You were born on Wednesday, ";
            break;
            
        case 5:
            cout << " You were born on Thursday, ";
            break;
            
        case 6:
            cout << " You were born on Friday, ";
            break;
    }
    
    if(flag == 1){
        cout << DD << "st of ";
    }
    else if(flag == 2){
        cout << DD << "nd of ";
    }
    else if(flag == 3){
        cout << DD << "rd of ";
    }
    else{
        cout << DD << "th of ";
    }
    
    cout << month[MM-1] << " of " << YYYY << "!" << endl;
    
    cout << "            Thank you!               " << endl;
    
    return 0;
}
