#include <iostream>
#include <list>
using namespace std;

class YoutubeChannel{
private:
    string Name;
    string OwnerName;
    int SubscriberCount;
    list<string>PublishedVideoTitles;

public:
    YoutubeChannel(string name, string ownerName){
        Name = name;
        OwnerName = ownerName;
        SubscriberCount = 0;
        }

     void Publishvideo(string videotitle){
         PublishedVideoTitles.push_back(videotitle);

    }

    void Getinfo(){
        cout<<"Name:"<<Name<<endl;
        cout<<"OwnerName:"<<OwnerName<<endl;
        cout<<"Number of Subscribers:"<<SubscriberCount<<endl;
        cout<<"Video:"<<endl;
        for(string videoTitle:PublishedVideoTitles){
            cout<<videoTitle<<endl;
        }
    }

    void Subscribe(){
        SubscriberCount++;
    }

     void Unsubscribe(){
       if(SubscriberCount != 0)
        SubscriberCount--;

    }

};


int main()
{
    YoutubeChannel ytchannel("CS dojo", "YK");
    ytchannel.Publishvideo("Intro to ooop");
    ytchannel.Unsubscribe();

    cout<<"Getting info:"<<endl;
    ytchannel.Getinfo();

    for(int i =0; i<20; i++){
        ytchannel.Subscribe();

    }

    cout<<"Getting info"<<endl;
    ytchannel.Getinfo();
        return 0;
}
