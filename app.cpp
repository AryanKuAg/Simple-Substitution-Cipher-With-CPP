#include<iostream>
#include<string>

using namespace std;
// Substitution Cipher
int main(){
    const string letter {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    const string key {"ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba"};
    string plainText {};
    cout << "Enter your message : " ;
    getline(cin, plainText);
    // now i have plainText and all things to start my encryption process.
    
    string etext {};
    cout << "Encrypting your message..."<< endl;
    for (size_t i {}; i < plainText.length(); ++i){
        
        int single = plainText.at(i);
        int pos = letter.find(single);
        if (pos != string::npos){
            etext += key.at(pos);
            
            }else{
                etext += " ";
                }
        }
        
    cout << "Your encrypted message is : "<< etext << endl;
//  Now, etext contain the encrypted message   
// Its time to decrypt the message
        string dtext {};
       cout  << "Decrypting your message..." << endl;
        for (size_t i {}; i < etext.length(); ++i){
            
                
                int single = etext.at(i);
                int pos = key.find(single);
                if (pos != string::npos){
                    dtext += letter.at(pos);
                    
                    }else{
                        dtext += " ";
                        }
         }
        cout << "Your decrypted message is : " << dtext << endl;
        
    return 0;
    }

