#include <iostream>

using namespace std;

int main()
{
    int numvowel;
    char input[1000];
    cout<<"Type Your Desired String"<<endl;
    gets(input);
    for(int i = 0;input[i]!='\0';i++)
    {
        if(input[i]== 'a' || input[i]== 'e' || input[i]== 'i'|| input[i]== 'o' ||input[i]== 'u')
        {
            ++numvowel;
        }
    }
    cout<<"number of vowel is : "<<numvowel<<endl;

    return 0;
}
