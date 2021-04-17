#include "functions.hpp"

string ChooseStr () {
    
    string str = "";
    
    string str_1 = "dog, bra, canoe, claim, furniture, deck, cola, fashion, bike, sound, money, opportunity";
    cout << "String #1: '" << str_1 << "';" << endl;
    
    string str_2 = "hi, Valera, Samsung, Marina, deer, socket, mouse, college, enough, all, how, lamp";
    cout << "String #2: '" << str_2 << "';" << endl;

    string str_3 = "cup, monitor, keyboard, sofa, notebook, space, blanket, taxi, shop, feed, python, brain";
    cout << "String #3: '" << str_3 << "'." << endl;
    
    int str_num;
    
    do {
    cout << "Which string do you choose (1/2/3): ";
    cin >> str_num;
    } while (!(str_num < 4)  &&  !(str_num > 0));
    
    switch (str_num) {
            case 1:
                str = str_1;
                break;
                
            case 2:
                str = str_2;
                break;
            
            case 3:
                str = str_3;
                break;
                
            default:
                break;
    }
    
    return str;
}


void PushWords (string str, List &words) {

    while (!str.empty()) {
        
        int pos = 0;
        
        while (isalpha(str[pos])) {
            pos++;
        }
        if (pos == 0) {
            str.erase(0,1);
        }
        else {
            string word = str.substr(0, pos);
            words.Push(word);
            str.erase(0, pos);
        }
    }
}
