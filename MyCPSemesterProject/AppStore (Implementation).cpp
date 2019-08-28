#include<iostream>
#include"AppStore.h"

using namespace std;

Admin::Admin()
{
    Pass="Admin";
}

int Admin::ChkPass(string a)
{
    if(a.compare(Pass) == 0)
    {
        cout << "\n\t\t Access Granted !!! \n\n\t\t Welcome Administrator !!!";
        return 0;
    }
    else
    {
        cout << "\n\t\t Access Denied !!!";
        return 1;
    }
}

int Admin::AskOp()
{
    int a;
    cout << "\n\n\t Please Select Operation \n\n\t Press 1 To Add An App \n\t Press 2 To View Apps \n\t Press 3 To Remove An App \n\t Press 4 To Go Back \n\t >>";
    cin >> a;
    return a;
}


User::User()
{
     cout<<"\n\t\tWelcome To The Faddy's App Store !!!!\n";
     Name="\0";
     Email="\0";
     Age=0;
     NIC="\0";
     Tele="\0";
}

void User::GetData()
{
    cout<<"\n\tEnter Your Name: ";
    getline(cin,Name);

    cout<<"\n\tEnter Your E-mail ID: ";
    getline(cin,Email);

    cout<<"\n\tEnter Your Age: ";
    cin>>Age;

    cout<<"\n\tEnter Your NIC no: ";
    fflush(stdin);
    getline(cin,NIC);

    cout<<"\n\tEnter Your Telephone Number: ";
    //fflush(stdin);
    getline(cin,Tele);
}

void User::ShowData()
{
    cout<<"\n\tName: " << Name << endl;
    cout<<"\tEmail ID: " << Email << endl;
    cout<<"\tAge: " << Age << endl;
    cout<<"\tNIC No: " << NIC << endl;
    cout<<"\tTelephone Number: " << Tele << endl;
}

int User::AskOp()
{
    int a;
    cout << "\n\t\t Welcome "<< Name <<
    "!!! \n\n\t Please Select Operation \n\n\t Press 1 To View Apps \n\t Press 2 To Search An App \n\t Press 3 To View User Information \n\t Press 4 To View Apps in Dowloadable mode \n\t Press 5 To Go Back \n\t >>";
    cin >> a;
    return a;
}

App::App()
{
    AppName="\0";
    Lang="\0";
    Dev="\0";
    ID="\0";
    Version="\0";
    Size="\0";
    Des="\0";
    Rating=0;
}

int App::AskCat()
{
    int a;
    cout << "\n\t\t Please Select App Category \n\n\t Press 1 For Gaming Apps \n\t Press 2 For News Apps \n\t Press 3 For Educational Apps \n\t >>";
    cin >> a;
    return a;
}

void App::Add()
{
    cout << "\nEnter The Name Of App: ";
    getline(cin,AppName);

    cout << "\nEnter The ID Of App: ";
    getline(cin,ID);

    cout << "\nEnter The Language Of App: ";
    getline(cin,Lang);

    cout << "\nEnter The App's Developer Name: ";
    getline(cin,Dev);

    cout << "\nEnter The Version Of App: ";
    getline(cin,Version);

    cout << "\nEnter The Size Of App (In MB): ";
    getline(cin,Size);

    cout << "\nEnter Compatible Platform for Application: ";
    getline(cin,Des);

}

void App::Print(int a)
{
    cout<<endl; 
    cout << a+1 << ")" <<"\t Application Name: "<< AppName << "\n\t Application ID: "
    << ID << "\n\t Application Language: "  << Lang <<"\n\t App's Developer Name: "
    << Dev << "\n\t Application's Version: "
    << Version << "\n\t Size of Application: " << Size << "\n\t Compatible Platform: " << Des << endl;
    
}


Game::Game() : App()
{
   Genre="\0";
}

int Game::AskCat()
{
    int a;
    cout << "\n\t\tPlease Select Genre Of Game \n\n\t Press 1 For Action Games \n\t Press 2 For Racing Games \n\t Press 3 For Puzzle Games \n\t >>";
    cin>>a;
    return a;
}

void Game::Add(int a)
{
    App::Add();
    if(a==1)
    {
        Genre="Action";
    }
    else if(a==2)
    {
        Genre="Racing";
    }
    else if(a==3)
    {
        Genre="Puzzle";
    }
}

int Game::Print(int a)
{
    if(AppName=="\0") return 0;
    App::Print(a);
     cout << "\t" << Genre << endl;
     
    ofstream outfact("Action Games.txt",ios::app);
    //outfact<<endl; 
    outfact<< endl <<"\n\t Application Name: "<< AppName << "\n\t Application ID: "
    << ID << "\n\t Application Language: "  << Lang <<"\n\t App's Developer Name: "
    << Dev << "\n\t Application's Version: "
    << Version << "\n\t Size of Application: " << Size << "\n\t Compatible Platform: " << Des << endl;
    outfact.close();
}

bool Game::SearchApp(string a)
 {
     if(AppName.compare(a) == 0 || ID.compare(a) ==0 )
     {
         Game::Print(0);
         return true;
     }
 }

int Game::Download(int a)
{
    if(AppName=="\0") return 0;
    App::Print(a);
    cout << "\t" << Genre << endl;
    char cha;
    cout<<"\nIf you want to download this appliacation, press 'd'."<<endl;
    cout<<"If not press any other key."<<endl;
    cin>>cha;
    if(cha=='d')
    {
        cout<<"\n\t Your Downloading will start in a minute."<<endl;
        cout<<"\n\t App Downloaded!!"<<endl;
       
        ofstream outf("Downloaded App's.txt",ios::app);
        outf<<"\nApplication Name: "<<App::AppName<<"   "<<"App ID: "<<ID;
    }
}

GameA::GameA() : App()
{
   Genre1="\0";
}

void GameA::Add(int a)
{
    App::Add();
}

int GameA::Print(int a)
{
    if(AppName=="\0") return 0;
    App::Print(a);
     
    ofstream outfrac("Racing Games.txt",ios::app);
    //outfrac<<endl; 
    outfrac<< endl <<"\n\t Application Name: "<< AppName << "\n\t Application ID: "
    << ID << "\n\t Application Language: "  << Lang <<"\n\t App's Developer Name: "
    << Dev << "\n\t Application's Version: "
    << Version << "\n\t Size of Application: " << Size << "\n\t Compatible Platform: " << Des << endl;
    outfrac.close();
}

bool GameA::SearchApp(string a)
 {
     if(AppName.compare(a) == 0 || ID.compare(a) ==0 )
     {
         GameA::Print(0);
         return true;
     }
 }

int GameA::Download(int a)
{
    if(AppName=="\0") return 0;
    App::Print(a);
    char cha;
    cout<<"\nIf you want to download this appliacation, press 'd'."<<endl;
    cout<<"If not press any other key."<<endl;
    cin>>cha;
    if(cha=='d')
    {
        cout<<"\n\t Your Downloading will start in a minute."<<endl;
        cout<<"\n\t App Downloaded!!"<<endl;
       
        ofstream outf("Downloaded App's.txt",ios::app);
        outf<<"\nApplication Name: "<<App::AppName<<"   "<<"App ID: "<<ID;
    }
}
    
GameB::GameB() : App()
{
   Genre2="\0";
}

void GameB::Add(int a)
{
    App::Add();
}

int GameB::Print(int a)
{
    if(AppName=="\0") return 0;
    App::Print(a);
     
    ofstream outfpuz("Puzzle Games.txt",ios::app);
    //outfpuz<<endl; 
    outfpuz<< endl <<"\n\t Application Name: "<< AppName << "\n\t Application ID: "
    << ID << "\n\t Application Language: "  << Lang <<"\n\t App's Developer Name: "
    << Dev << "\n\t Application's Version: "
    << Version << "\n\t Size of Application: " << Size << "\n\t Compatible Platform: " << Des << endl;
    outfpuz.close();
}

bool GameB::SearchApp(string a)
 {
     if(AppName.compare(a) == 0 || ID.compare(a) ==0 )
     {
         GameB::Print(0);
         return true;
     }
 }

int GameB::Download(int a)
{
    if(AppName=="\0") return 0;
    App::Print(a);
    char cha;
    cout<<"\nIf you want to download this appliacation, press 'd'."<<endl;
    cout<<"If not press any other key."<<endl;
    cin>>cha;
    if(cha=='d')
    {
        cout<<"\n\t Your Downloading will start in a minute."<<endl;
        cout<<"\n\t App Downloaded!!"<<endl;
       
        ofstream outf("Downloaded App's.txt",ios::app);
        outf<<"\nApplication Name: "<<App::AppName<<"   "<<"App ID: "<<ID;
    }
}    
    
News::News() : App()
{
   NewsType="\0";
}

int News::AskCat()
{
    int a;
    cout << "\n\t\t Please Select Type Of News \n\n\t Press 1 For Current Affairs \n\t Press 2 For Sports News \n\t Press 3 For Entertainment News \n\t >>";
    cin >> a;
    return a;
}

void News::Add(int a)
{
    App::Add();
    if(a==1)
    {
        NewsType="Current Affairs";
    }
    else if(a==2)
    {
        NewsType="Sports News";
    }
    else if(a==3)
    {
        NewsType="Entertainment News";
    }
}

int News::Print(int a)
{
    if(AppName=="\0") return 0;
    App::Print(a);
    cout << "\t" << NewsType << endl;
    
    ofstream outfcur("Current Affairs News.txt",ios::app);
    //outfcur<<endl; 
    outfcur<< endl <<"\n\t Application Name: "<< AppName << "\n\t Application ID: "
    << ID << "\n\t Application Language: "  << Lang <<"\n\t App's Developer Name: "
    << Dev << "\n\t Application's Version: "
    << Version << "\n\t Size of Application: " << Size << "\n\t Compatible Platform: " << Des << endl;
    outfcur.close();
}

bool News::SearchApp(string a)
 {
     if(AppName.compare(a) == 0 || ID.compare(a) ==0 )
     {
         News::Print(0);
         return true;
     }
 }

int News::Download(int a)
{
    if(AppName=="\0") return 0;
    App::Print(a);
    cout << "\t" << NewsType << endl;
    char cha;
    cout<<"\nIf you want to download this appliacation, press 'd'."<<endl;
    cout<<"If not press any other key."<<endl;
    cin>>cha;
    if(cha=='d')
    {
        cout<<"\n\t Your Downloading will start in a minute."<<endl;
        cout<<"\n\t App Downloaded!!"<<endl;
       
        ofstream outf("Downloaded App's.txt",ios::app);
        outf<<"\nApplication Name: "<<App::AppName<<"   "<<"App ID: "<<ID;
    }
} 

NewsA::NewsA() : App()
{
   NewsType1="\0";
}

void NewsA::Add(int a)
{
    App::Add();
}

int NewsA::Print(int a)
{
    if(AppName=="\0") return 0;
    App::Print(a);
    
    ofstream outfspo("Sports News.txt",ios::app);
    //outfspo<<endl; 
    outfspo<< endl <<"\n\t Application Name: "<< AppName << "\n\t Application ID: "
    << ID << "\n\t Application Language: "  << Lang <<"\n\t App's Developer Name: "
    << Dev << "\n\t Application's Version: "
    << Version << "\n\t Size of Application: " << Size << "\n\t Compatible Platform: " << Des << endl;
    outfspo.close();
}

bool NewsA::SearchApp(string a)
 {
     if(AppName.compare(a) == 0 || ID.compare(a) ==0 )
     {
         NewsA::Print(0);
         return true;
     }
 }

int NewsA::Download(int a)
{
    if(AppName=="\0") return 0;
    App::Print(a);
    char cha;
    cout<<"\nIf you want to download this appliacation, press 'd'."<<endl;
    cout<<"If not press any other key."<<endl;
    cin>>cha;
    if(cha=='d')
    {
        cout<<"\n\t Your Downloading will start in a minute."<<endl;
        cout<<"\n\t App Downloaded!!"<<endl;
       
        ofstream outf("Downloaded App's.txt",ios::app);
        outf<<"\nApplication Name: "<<App::AppName<<"   "<<"App ID: "<<ID;
    }
} 

NewsB::NewsB() : App()
{
   NewsType2="\0";
}

void NewsB::Add(int a)
{
    App::Add();
}

int NewsB::Print(int a)
{
    if(AppName=="\0") return 0;
    App::Print(a);
    
    ofstream outfent("Entertainment News.txt",ios::app);
    //outfent<<endl; 
    outfent<< endl <<"\n\t Application Name: "<< AppName << "\n\t Application ID: "
    << ID << "\n\t Application Language: "  << Lang <<"\n\t App's Developer Name: "
    << Dev << "\n\t Application's Version: "
    << Version << "\n\t Size of Application: " << Size << "\n\t Compatible Platform: " << Des << endl;
    outfent.close();
}

bool NewsB::SearchApp(string a)
 {
     if(AppName.compare(a) == 0 || ID.compare(a) ==0 )
     {
         NewsB::Print(0);
         return true;
     }
 }

int NewsB::Download(int a)
{
    if(AppName=="\0") return 0;
    App::Print(a);
    char cha;
    cout<<"\nIf you want to download this appliacation, press 'd'."<<endl;
    cout<<"If not press any other key."<<endl;
    cin>>cha;
    if(cha=='d')
    {
        cout<<"\n\t Your Downloading will start in a minute."<<endl;
        cout<<"\n\t App Downloaded!!"<<endl;
       
        ofstream outf("Downloaded App's.txt",ios::app);
        outf<<"\nApplication Name: "<<App::AppName<<"   "<<"App ID: "<<ID;
    }
}

Education::Education() :App()
{
   Field="\0";
}

int Education::AskCat()
{
    int a;
    cout << "\n\t\t Please Select Field Of Study \n\n\t Press 1 For Maths Learning \n\t Press 2 For Language Learning \n\t Press 3 For Islamic Education \n\t >>";
    cin >> a;
    return a;
}

void Education::Add(int a)
{
    App::Add();
    if(a==1)
    {
        Field="Maths Learning";
    }
    else if(a==2)
    {
        Field="Language Learning";
    }
    else if(a==3)
    {
        Field="Islamic Education";
    }
}

int Education::Print(int a)
{
    if(AppName=="\0") return 0;
    App::Print(a);
    cout << "\t" << Field << endl;
    
    ofstream outfmat("Maths Learning.txt",ios::app);
    //outfmat<<endl; 
    outfmat<< endl <<"\n\t Application Name: "<< AppName << "\n\t Application ID: "
    << ID << "\n\t Application Language: "  << Lang <<"\n\t App's Developer Name: "
    << Dev << "\n\t Application's Version: "
    << Version << "\n\t Size of Application: " << Size << "\n\t Compatible Platform: " << Des << endl;
    outfmat.close();
}

bool Education::SearchApp(string a)
 {
     if(AppName.compare(a) == 0 || ID.compare(a) ==0 )
     {
         Education::Print(0);
         return true;
     }
 }

int Education::Download(int a)
{
    if(AppName=="\0") return 0;
    App::Print(a);
    cout << "\t" << Field << endl;
    char cha;
    cout<<"\nIf you want to download this appliacation, press 'd'."<<endl;
    cout<<"If not press any other key."<<endl;
    cin>>cha;
    if(cha=='d')
    {
        cout<<"\n\t Your Downloading will start in a minute."<<endl;
        cout<<"\n\t App Downloaded!!"<<endl;
       
        ofstream outf("Downloaded App's.txt",ios::app);
        outf<<"\nApplication Name: "<<App::AppName<<"   "<<"App ID: "<<ID;
    }
}
 
EducationA::EducationA() :App()
{
   Field1="\0";
}

void EducationA::Add(int a)
{
    App::Add();
}

int EducationA::Print(int a)
{
    if(AppName=="\0") return 0;
    App::Print(a);
    ofstream outflan("Language Learning.txt",ios::app);
    //outflan<<endl; 
    outflan<< endl <<"\n\t Application Name: "<< AppName << "\n\t Application ID: "
    << ID << "\n\t Application Language: "  << Lang <<"\n\t App's Developer Name: "
    << Dev << "\n\t Application's Version: "
    << Version << "\n\t Size of Application: " << Size << "\n\t Compatible Platform: " << Des << endl;
    outflan.close();
}

bool EducationA::SearchApp(string a)
 {
     if(AppName.compare(a) == 0 || ID.compare(a) ==0 )
     {
         EducationA::Print(0);
         return true;
     }
 }

int EducationA::Download(int a)
{
    if(AppName=="\0") return 0;
    App::Print(a);
    char cha;
    cout<<"\nIf you want to download this appliacation, press 'd'."<<endl;
    cout<<"If not press any other key."<<endl;
    cin>>cha;
    if(cha=='d')
    {
        cout<<"\n\t Your Downloading will start in a minute."<<endl;
        cout<<"\n\t App Downloaded!!"<<endl;
       
        ofstream outf("Downloaded App's.txt",ios::app);
        outf<<"\nApplication Name: "<<App::AppName<<"   "<<"App ID: "<<ID;
    }
}

EducationB::EducationB() :App()
{
   Field2="\0";
}

void EducationB::Add(int a)
{
    App::Add();
}

int EducationB::Print(int a)
{
    if(AppName=="\0") return 0;
    App::Print(a);
    
    ofstream outfisl("Islamic Education.txt",ios::app);
    //outfisl<<endl; 
    outfisl<< endl <<"\n\t Application Name: "<< AppName << "\n\t Application ID: "
    << ID << "\n\t Application Language: "  << Lang <<"\n\t App's Developer Name: "
    << Dev << "\n\t Application's Version: "
    << Version << "\n\t Size of Application: " << Size << "\n\t Compatible Platform: " << Des << endl;
    outfisl.close();
}

bool EducationB::SearchApp(string a)
{
     if(AppName.compare(a) == 0 || ID.compare(a) ==0 )
     {
         EducationB::Print(0);
         return true;
     }
}

int EducationB::Download(int a)
{
    if(AppName=="\0") return 0;
    App::Print(a);
    char cha;
    cout<<"\nIf you want to download this appliacation, press 'd'."<<endl;
    cout<<"If not press any other key."<<endl;
    cin>>cha;
    if(cha=='d')
    {
        cout<<"\n\t Your Downloading will start in a minute."<<endl;
        cout<<"\n\t App Downloaded!!"<<endl;
       
        ofstream outf("Downloaded App's.txt",ios::app);
        outf<<"\nApplication Name: "<<App::AppName<<"   "<<"App ID: "<<ID;
    }
}
