#include <iostream>

using namespace std;

int str_dec (string str1){
    unsigned long str_length;
    str_length = str1.length();
    int total = 0;

    for (int i = 0; i < str_length; ++i) {
        int tmp;
        unsigned char tmp_char = str1[i];
        tmp = tmp_char;
        total += tmp;
    }

    return total;
}

string output_logic (string words[], const int decimals[]) {
    string return_word;
    int return_decimal;
    string return_string;

    for (int i = 0; i < 3; ++i) {
        for (int j = i+1; j < 3; ++j) {
            if (decimals[i]>decimals[j]){
                return_decimal = decimals[i];
                return_word = words[i];
            }
            else {
                return_decimal = decimals[j];
                return_word = words[j];
            }
        }
    }
    return_string = "String with largest sum is '" + return_word + "'" + ", with a sum of " + to_string(return_decimal)+".";
    return return_string ;
}

int main() {
    string user_in[3];
    int values[3];

    for (int i = 0; i < 3; ++i) {
        cout<< "Enter a word and press enter: ";
        cin>>user_in[i];
        cout<<endl;
        values[i] = str_dec(user_in[i]);
    }

    cout<<output_logic(user_in, values)<<endl;

    return 0;
}


