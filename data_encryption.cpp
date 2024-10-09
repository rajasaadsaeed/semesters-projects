#include<iostream>
#include <string>
using namespace std;
class Encryptor    //Encryptor class 
{
    public:
        string encryptMessage(const string & message )
        {
            string encryptedMessage = "";
                for (char character : message )  //start of For loop
                {
                    //condition check
                    if (isupper(character))
                    {
                        encryptedMessage += (character - 'A'+3 ) % 26 + 'A';           
                    }
                    else if(islower(character)) 
                    {
                        encryptedMessage += (character - 'a'+3 ) % 26 + 'a';    
                    }
                    else 
                    {
                        encryptedMessage += (character - '0'+3) % 10 + '0';
                    }
                }
        return encryptedMessage; //return the Encrypted message 
        }
        
};  // end of class Encryptor 
int main()           //start of main 
{
    Encryptor encryptor;    //create an object name as encryptor 
    string message ;
    char choice ;
    do                              //using do while method
    {
        cout <<"enter a message: ";
        getline(cin, message);
        cout<<"Encrypted message: "<<encryptor.encryptMessage(message)<<endl;
        cout<<"Do you want to encrypt another message? (y/n):";
        cin>>choice;
        cin.ignore();   //ignore/handle  the new input line 


    } 
    while(choice == 'y'|| choice == 'Y');
    cout<<"3xiting Program"<<endl;
    return 0;
}