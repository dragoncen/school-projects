#include <iostream>
#include <string>

using namespace std;
class YouTubeChannel{
 public:
 string Name;
 int SubscribersCount;

 YouTubeChannel(string name, int subscribersCount){
 Name = name;
 SubscribersCount = subscribersCount;
 }
 friend ostream operator<<(ostream& COUT, YouTubeChannel& channel);
};
// either  a global function or a friend function
 ostream operator<<(ostream& COUT, YouTubeChannel& channel){
     COUT<<"Name: " <<channel.Name<<endl;
     COUT<<"Subscribers count:"<<channel.SubscribersCount<< endl;
 }




int main () {
 YouTubeChannel yt1 = YouTubeChannel("Grade A Under A", 3680000);
 cout << yt1;
 return 0;
}
