#include <iostream>
using namespace std;
//Implementation of Multiple inheritance classes A & B give rise to class C
//illustrating an example of the said type of inheritance
class facebook
{
    int dob, friends;

public:
    void input_facebook();
    int date();
    int friends1();
};
void facebook::input_facebook()
{
    cout << "Enter the number of friends\n";
    cin >> friends;
    cout << "Enter the date of birth\n";
    cin >> dob;
}
int facebook::date()
{
    return dob;
}
int facebook::friends1()
{
    return friends;
}
class instagram
{
    string username;
    int followers, following;

public:
    void input_instagram();
    string user();
    int follow(), follow1();
};
void instagram::input_instagram()
{
    cout << "Enter the username\n";
    cin >> username;
    cout << "Enter the number of followers\n";
    cin >> followers;
    cout << "Enter the number of following\n";
    cin >> following;
}
string instagram::user()
{
    return username;
}
int instagram::follow()
{
    return followers;
}
int instagram::follow1()
{
    return following;
}
class social_media : public instagram, facebook
{
public:
    facebook f;
    instagram i;
    string s1 = i.user();
    int n1 = i.follow();
    int n2 = i.follow1();
    int fri = f.friends1();
    int f1 = f.date();
};
int main()
{
}
