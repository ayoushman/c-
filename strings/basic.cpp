#include <iostream>
#include <string>

using namespace std;

int main()
{

    string name1;
    // cin >> name;
    string name = "ayushman";
    string str1(5, 'n'); /* decalre a string with 5 times n */
    // cout << name << endl;
    cout << str1 << endl;

    // getline(cin, name1); /*This function takes the input of the whole sentence with spaces*/
    cout << name1 << endl;

    // appending in the string

    string a1 = "ayush";
    string a2 = "man";
    string a3 = "ayush";
    // a1.append(a2);
    // or
    string a = a1 + a2;
    // or
    // a1 = a1 + a2;
    // cout << a << endl;

    // Accesing the elements at the positions

    a1[0], a1[4], a[2];

    // clear function will empty the string
    // a2.clear();

    // compare functions out positive if the string is greater than the other string , output neg is the string is less than the other string ,
    // output zero if the strings are equal ;

    cout << a1.compare(a2) << endl;
    cout << a2.compare(a1) << endl;
    cout << a3.compare(a1) << endl;

    // we can use compare function inside the if else functions

    // we got isEMpty function to check the if string is emprty

    // we got erase function to delete the elements inside the string

    string hoe = "holalalaleewwe";
    hoe.erase(2, 4); /*IT takes 2 arguments first is the starting index and second is the number of elements to delete */
    cout << hoe << endl;

    // to find  the substring of the  string we do
    cout << hoe.find("la") << endl;
    if (hoe.find("lee"))
    {
        cout << "ITS THERE " << endl;
    }

    // insert functionn is use to string at a certain index
    // length function to find the length of the string
    // substr to find the substring of a string we give  it the starting index and the length of the substring for eg

    cout << hoe.substr(2, 5) << endl;

    string s = "Ayushman";
    cout << s << endl;
    s = s.substr(1);
    cout << s << endl;

    return 0;
}