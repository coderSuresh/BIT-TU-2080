 #include <bits/stdc++.h>
using namespace std;

int permChoiceOne[] = {
   57, 49, 41, 33, 25, 17, 9 ,
   1 , 58, 50, 42, 34, 26, 18,
   10, 2 , 59, 51, 43, 35, 27,
   19, 11, 3 , 60, 52, 44, 36,
   63, 55, 47, 39, 31, 23, 15,
   7 , 62, 54, 46, 38, 30, 22,
   14, 6 , 61, 53, 45, 37, 29,
   21, 13, 5 , 28, 20, 12, 4 };

int permChoiceTwo[] = {
   14, 17, 11, 24, 1 , 5 , 3 , 28,
   15, 6 , 21, 10, 23, 19, 12, 4 ,
   26, 8 , 16, 7 , 27, 20, 13, 2 ,
   41, 52, 31, 37, 47, 55, 30, 40,
   51, 45, 33, 48, 44, 49, 39, 56,
   34, 53, 46, 42, 50, 36, 29, 32 };

int leftShiftTable[] = {1, 1, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 1};

string rotateSubKey(string s , int rot) // rot is the number of left shift rotation
{
    return s.substr(rot, s.length()-rot) + s.substr(0, rot) ;
}

string firstPermute(string input)
{
    string res = "" ;
    for(int i=0 ; i<56 ; i++)
    {
        res += input[permChoiceOne[i]-1];
    }
    return res ;
}

string secondPermute(string input)
{
    string res = "" ;
    for(int i=0 ; i<48 ; i++)
    {
        res += input[permChoiceTwo[i]-1];
    }
    return res ;
}

void genKeys(string left, string right)
{
    ofstream fout ;
    fout.open("keygen.txt"); //saving output to keygen.txt file

    for (int i=0; i<16; i++)
    {
        left  = rotateSubKey(left , leftShiftTable[i]);
        right = rotateSubKey(right, leftShiftTable[i]);

        string key = secondPermute(left+right);
        
        cout << "key " << i+1 << " \t: " << key << endl; // display
        fout << key << endl; // save to file
    }
}

int main()
{
    unsigned long long hexkey;
    cout << "\nEnter 64-bit key in hexadecimal(16-digits) : " ;
    cin >> hex >> hexkey; // to read hex input cin >> hex >> input

    string key = bitset<64>(hexkey).to_string(); // to convert hex to binary string
    cout << "Binary key (k) \t: " << key << endl;

    key = firstPermute(key) ;
    cout <<  "PC-1 key (k+) \t: " << key << endl;

    cout << "\nSubKeys: " << endl;
    genKeys(key.substr(0,28) , key.substr(28,28));

    cout<<endl<<endl ;
}


