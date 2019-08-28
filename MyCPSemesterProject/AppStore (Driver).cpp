#include<iostream>                                      /*
                                                            Name: Muhammad Fawad Jawaid Malik
                                                            ID: 11-2116
                                                            CP Semester Project
                                                            Submitted To: Sir Fahim Rajputt
                                                        */                                                                   
#include<fstream>
#include<string>
#include"AppStore (Implementation).cpp"

using namespace std;

int main()
{

Admin ADO;
User UO;
App AO[75];
Game GO[25];
GameA GOA[25];
GameB GOB[25];
News NO[25];
NewsA NOA[25];
NewsB NOB[25];
Education EO[25];
EducationA EOI[25];
EducationB EOT[25];
string Search,Pass;
bool SearchChk=false;
int Cat,Op,Chk,j,k,i=0,Ch;
ofstream outfact("Action Games.txt",ios::app);
ofstream outfrac("Racing Games.txt",ios::app);
ofstream outfpuz("Puzzle Games.txt",ios::app);
ofstream outfcur("Current Affairs News.txt",ios::app);
ofstream outfspo("Sports News.txt",ios::app);
ofstream outfent("Entertainment News.txt",ios::app);
ofstream outfmat("Maths Learning.txt",ios::app);
ofstream outflan("Language Learning.txt",ios::app);
ofstream outfisl("Islamic Education.txt",ios::app);
ofstream outf("Downloaded App's.txt",ios::app);

Login:
    cout << "\n\n\t\t Please Enter Mode Of AppStore \n\n\t\t Press 1 For Administrator \n\n\t\t Press 2 For User \n\n\t\t Press 3 To Exit \n\n\t\t >>";
    cin>>Chk;

//Admin
if(Chk==1)
{
        fflush(stdin);
        cout << "\n\tEnter Administrator Password: ";
        getline(cin, Pass);
        if(ADO.ChkPass(Pass)){goto Login;}

Operation:

       Op=ADO.AskOp();
        if(Op>4)
        {
            cout << "\n\t\t Wrong Selection !!!   Please Select Again !!!";
            goto Operation;
        }

        else if(Op==4)
        {
            goto Login;
        }

        Cat=AO[i].AskCat();
        if(Cat==1)
        {
            Ch=GO[i].AskCat();
          if(Ch==1)
          {   
            if(Op==1)
            {
                fflush(stdin);
                GO[i].Add(Ch);
                i++;
                goto Operation;
            }

            else if(Op==2)
            {
                cout<<endl<<"\tApplication Name: Stret Fighter"<<endl;
                cout<<"\tApplication ID: 1111"<<endl;
                cout<<"\tApplication Language: English"<<endl;
                cout<<"\tApp's Developer Name: Jack"<<endl;
                cout<<"\tApplication's Version: 4"<<endl;
                cout<<"\tSize of Application: 232"<<endl;
                cout<<"\tCompatible Platform: Apple/Android"<<endl;
                 
                for(j=0;(GO[j].Print(j)!=0);j++);
                if(j==0) cout << "\n\tNo More App In This Category !!!\n";
                goto Operation;
            }

            else if(Op==3)
            {
                fflush(stdin);
                cout << "\n\tEnter Name Or ID Of The App: ";
                getline(cin,Search);
                if(Search=="1111")
                {     cout<<endl<<"\n\t\t App Removed\n";
                      ofstream outfact("Action Games.txt",ios::trunc);
                      outfact<<"\n\t\t App Removed\n";
                      outfact.close();
                      for(j=0;(GO[j].Print(j)!=0);j++);
                }
                for(j=0;j<25;j++)
                {
                    SearchChk=GO[j].SearchApp(Search);
                    if(SearchChk==1){break;}
                }

                for(k=j;k<24-j;k++)
                {
                    GO[k]=GO[k+1];
                    cout << "\n\t\t App Removed\n";
                    
                    ofstream outfact("Action Games.txt",ios::trunc);
                    
                    outfact<<"\n\tApplication Name: Street Fighter";
	                outfact<<"\n\tApplication ID: 1111";
	                outfact<<"\n\tApplication Language: English";
	                outfact<<"\n\tApp's Developer Name: Jack";
	                outfact<<"\n\tApplication's Version: 4";
	                outfact<<"\n\tSize of Application: 232";
	                outfact<<"\n\tCompatible Platform: Apple/Android";
	                outfact<<"\n\n\t\t App Removed\n";
	                outfact.close();
                }

                if(SearchChk!=1 && Search!="1111"){cout << "\n\t App Not Found \n";}
                goto Operation;
            }
          }
          
          else if(Ch==2)
          {   
            if(Op==1)
            {
                fflush(stdin);
                GOA[i].Add(Ch);
                i++;
                goto Operation;
            }

            else if(Op==2)
            {
                cout<<endl<<"\tApplication Name: Need for Speed"<<endl;
                cout<<"\tApplication ID: 1121"<<endl;
                cout<<"\tApplication Language: English"<<endl;
                cout<<"\tApp's Developer Name: Jack and Joe"<<endl;
                cout<<"\tApplication's Version: 4"<<endl;
                cout<<"\tSize of Application: 236"<<endl;
                cout<<"\tCompatible Platform: Apple/Android"<<endl;
                 
                for(j=0;(GOA[j].Print(j)!=0);j++);
                if(j==0) cout << "\n\tNo App In This Category !!!\n";
                goto Operation;
            }

            else if(Op==3)
            {
                fflush(stdin);
                cout << "\n\tEnter Name Or ID Of The App: ";
                getline(cin,Search);
                if(Search=="1121")
                {     cout<<endl<<"\n\t\t App Removed\n";
                      ofstream outfrac("Racing Games.txt",ios::trunc);
                      outfrac<<"\n\t\t App Removed\n";
                      outfrac.close();
                      for(j=0;(GOA[j].Print(j)!=0);j++);
                }
                for(j=0;j<25;j++)
                {
                    SearchChk=GOA[j].SearchApp(Search);
                    if(SearchChk==1){break;}
                }

                for(k=j;k<24-j;k++)
                {
                    GOA[k]=GOA[k+1];
                    cout << "\n\t\t App Removed\n";
                    
                    ofstream outfrac("Racing Games.txt",ios::trunc);
                    
                    outfrac<<"\n\tApplication Name: Need for Speed";
	                outfrac<<"\n\tApplication ID: 1121";
	                outfrac<<"\n\tApplication Language: English";
	                outfrac<<"\n\tApp's Developer Name: Jack and Joe";
	                outfrac<<"\n\tApplication's Version: 4";
	                outfrac<<"\n\tSize of Application: 236";
	                outfrac<<"\n\tCompatible Platform: Apple/Android";
	                outfrac<<"\n\n\t\t App Removed\n";
	                outfrac.close();
                }

                if(SearchChk!=1 && Search!="1121"){cout << "\n\t App Not Found \n";}
                goto Operation;
            }
          }
          
          else if(Ch==3)
          {   
            if(Op==1)
            {
                fflush(stdin);
                GOB[i].Add(Ch);
                i++;
                goto Operation;
            }

            else if(Op==2)
            {
                cout<<endl<<"\tApplication Name: Bloxers"<<endl;
                cout<<"\tApplication ID: 1131"<<endl;
                cout<<"\tApplication Language: English"<<endl;
                cout<<"\tApp's Developer Name: Gerad"<<endl;
                cout<<"\tApplication's Version: 2"<<endl;
                cout<<"\tSize of Application: 123"<<endl;
                cout<<"\tCompatible Platform: Apple/Android"<<endl;
                 
                for(j=0;(GOB[j].Print(j)!=0);j++);
                if(j==0) cout << "\n\tNo More App In This Category !!!\n";
                goto Operation;
            }

            else if(Op==3)
            {
                fflush(stdin);
                cout << "\n\tEnter Name Or ID Of The App: ";
                getline(cin,Search);
                if(Search=="1131")
                {     cout<<endl<<"\n\t\t App Removed\n";
                      ofstream outfpuz("Puzzle Games.txt",ios::trunc);
                      outfpuz<<"\n\t\t App Removed\n";
                      outfpuz.close();
                      for(j=0;(GOB[j].Print(j)!=0);j++);
                }
                for(j=0;j<25;j++)
                {
                    SearchChk=GOB[j].SearchApp(Search);
                    if(SearchChk==1){break;}
                }

                for(k=j;k<24-j;k++)
                {
                    GOB[k]=GOB[k+1];
                    cout << "\n\t\t App Removed\n";
                    
                    ofstream outfpuz("Puzzle Games.txt",ios::trunc);
                    
                    outfpuz<<"\n\tApplication Name: Bloxers";
	                outfpuz<<"\n\tApplication ID: 1131";
	                outfpuz<<"\n\tApplication Language: English";
	                outfpuz<<"\n\tApp's Developer Name: Gerad";
	                outfpuz<<"\n\tApplication's Version: 2";
	                outfpuz<<"\n\tSize of Application: 123";
	                outfpuz<<"\n\tCompatible Platform: Apple/Android";
	                outfpuz<<"\n\n\t\t App Removed\n";
	                outfpuz.close();
                }

                if(SearchChk!=1 && Search!="1131"){cout << "\n\t App Not Found \n";}
                goto Operation;
            }
          }
            
        }//End of Cat==1 (Admin) 
        
        else if(Cat==2)
        {
          Ch=NO[i].AskCat();
          if(Ch==1)
          {
            if(Op==1)
            {
                fflush(stdin);
                NO[i].Add(Ch);
                i++;
                goto Operation;
            }

            else if(Op==2)
            {
                cout<<endl<<"\tApplication Name: Musims Burnt in Burma"<<endl;
                cout<<"\tApplication ID: 1171"<<endl;
                cout<<"\tApplication Language: English"<<endl;
                cout<<"\tApp's Developer Name: Fawad"<<endl;
                cout<<"\tApplication's Version: 2"<<endl;
                cout<<"\tSize of Application: 123"<<endl;
                cout<<"\tCompatible Platform: Apple/Android"<<endl;
            
                for(j=0;(NO[j].Print(j)!=0);j++);
                if(j==0) cout << "\n\tNo More App In This Category !!!\n";
                goto Operation;
            }

            else if(Op==3)
            {
                fflush(stdin);
                cout << "\n\tEnter Name Or ID Of The App: ";
                getline(cin,Search);
                if(Search=="1171")
                {     cout<<endl<<"\n\t\t App Removed\n";
                      ofstream outfcur("Current Affairs News.txt",ios::trunc);
                      outfcur<<"\n\t\t App Removed\n";
                      outfcur.close();
                      for(j=0;(NO[j].Print(j)!=0);j++);
                }
                for(j=0;j<25;j++)
                {
                    SearchChk=NO[j].SearchApp(Search);
                    if(SearchChk==1){break;}
                }

                for(k=j;k<24-j;k++)
                {
                    NO[k]=NO[k+1];
                    cout << "\n\t\t App Removed\n";
                    
                    ofstream outfcur("Current Affairs News.txt",ios::trunc);
                    
                    outfcur<<"\n\tApplication Name: Muslims Burnt in Burma";
	                outfcur<<"\n\tApplication ID: 1171";
	                outfcur<<"\n\tApplication Language: English";
	                outfcur<<"\n\tApp's Developer Name: Fawad";
	                outfcur<<"\n\tApplication's Version: 2";
	                outfcur<<"\n\tSize of Application: 123";
	                outfcur<<"\n\tCompatible Platform: Apple/Android";
	                outfcur<<"\n\n\t\t App Removed\n";
	                outfcur.close();
                }

                if(SearchChk!=1 && Search!="1171"){cout << "\n\t App Not Found \n";}
                goto Operation;
            }
          } 
          
          else if(Ch==2)
          {
            if(Op==1)
            {
                fflush(stdin);
                NOA[i].Add(Ch);
                i++;
                goto Operation;
            }

            else if(Op==2)
            {
                cout<<endl<<"\tApplication Name: London Olympics 2012"<<endl;
                cout<<"\tApplication ID: 1181"<<endl;
                cout<<"\tApplication Language: English"<<endl;
                cout<<"\tApp's Developer Name: Susan"<<endl;
                cout<<"\tApplication's Version: 2"<<endl;
                cout<<"\tSize of Application: 124"<<endl;
                cout<<"\tCompatible Platform: Apple/Android"<<endl;
            
                for(j=0;(NOA[j].Print(j)!=0);j++);
                if(j==0) cout << "\n\tNo More App In This Category !!!\n";
                goto Operation;
            }

            else if(Op==3)
            {
                fflush(stdin);
                cout << "\n\tEnter Name Or ID Of The App: ";
                getline(cin,Search);
                if(Search=="1181")
                {     cout<<endl<<"\n\t\t App Removed\n";
                      ofstream outfspo("Sports News.txt",ios::trunc);
                      outfspo<<"\n\t\t App Removed\n";
                      outfspo.close();
                      for(j=0;(NOA[j].Print(j)!=0);j++);
                }
                for(j=0;j<25;j++)
                {
                    SearchChk=NOA[j].SearchApp(Search);
                    if(SearchChk==1){break;}
                }

                for(k=j;k<24-j;k++)
                {
                    NOA[k]=NOA[k+1];
                    cout << "\n\t\t App Removed\n";
                    
                    ofstream outfspo("Sports News.txt",ios::trunc);
                    
                    outfspo<<"\n\tApplication Name: London Olympics 2012";
	                outfspo<<"\n\tApplication ID: 1181";
	                outfspo<<"\n\tApplication Language: English";
	                outfspo<<"\n\tApp's Developer Name: Susan";
	                outfspo<<"\n\tApplication's Version: 2";
	                outfspo<<"\n\tSize of Application: 124";
	                outfspo<<"\n\tCompatible Platform: Apple/Android";
	                outfspo<<"\n\n\t\t App Removed\n";
	                outfspo.close();
                }

                if(SearchChk!=1 && Search!="1181"){cout << "\n\t App Not Found \n";}
                goto Operation;
            }
          } 
          
          else if(Ch==3)
          {
            if(Op==1)
            {
                fflush(stdin);
                NOB[i].Add(Ch);
                i++;
                goto Operation;
            }

            else if(Op==2)
            {
                cout<<endl<<"\tApplication Name: Dark Knight Rises BoxOffice"<<endl;
                cout<<"\tApplication ID: 1191"<<endl;
                cout<<"\tApplication Language: English"<<endl;
                cout<<"\tApp's Developer Name: John Carter"<<endl;
                cout<<"\tApplication's Version: 2"<<endl;
                cout<<"\tSize of Application: 133"<<endl;
                cout<<"\tCompatible Platform: Apple/Android"<<endl;
            
                for(j=0;(NOB[j].Print(j)!=0);j++);
                if(j==0) cout << "\n\tNo More App In This Category !!!\n";
                goto Operation;
            }

            else if(Op==3)
            {
                fflush(stdin);
                cout << "\n\tEnter Name Or ID Of The App: ";
                getline(cin,Search);
                if(Search=="1191")
                {     cout<<endl<<"\n\t\t App Removed\n";
                      ofstream outfent("Entertainment News.txt",ios::trunc);
                      outfent<<"\n\t\t App Removed\n";
                      outfent.close();
                      for(j=0;(NOB[j].Print(j)!=0);j++);
                }
                for(j=0;j<25;j++)
                {
                    SearchChk=NOB[j].SearchApp(Search);
                    if(SearchChk==1){break;}
                }

                for(k=j;k<24-j;k++)
                {
                    NOB[k]=NOB[k+1];
                    cout << "\n\t\t App Removed\n";
                    
                    ofstream outfent("Entertainment News.txt",ios::trunc);
                    
                    outfent<<"\n\tApplication Name: Dark Knight Rises BoxOffice";
	                outfent<<"\n\tApplication ID: 1191";
	                outfent<<"\n\tApplication Language: English";
	                outfent<<"\n\tApp's Developer Name: John Carter";
	                outfent<<"\n\tApplication's Version: 2";
	                outfent<<"\n\tSize of Application: 133";
	                outfent<<"\n\tCompatible Platform: Apple/Android";
	                outfent<<"\n\n\t\t App Removed\n";
	                outfent.close();
                }

                if(SearchChk!=1 && Search!="1191"){cout << "\n\t App Not Found \n";}
                goto Operation;
            }
          } 
            
        }//End of Cat==2 (Admin)
        
        else if(Cat==3)
        {
            Ch=EO[i].AskCat();
           if(Ch==1)
           { 
            if(Op==1)
            {
                fflush(stdin);
                EO[i].Add(Ch);
                i++;
                goto Operation;
            }

            else if(Op==2)
            {
                cout<<endl<<"\tApplication Name: Easy Mathematics"<<endl;
                cout<<"\tApplication ID: 1141"<<endl;
                cout<<"\tApplication Language: English"<<endl;
                cout<<"\tApp's Developer Name: Howard"<<endl;
                cout<<"\tApplication's Version: 4"<<endl;
                cout<<"\tSize of Application: 232"<<endl;
                cout<<"\tCompatible Platform: Apple"<<endl;
                
                for(j=0;(EO[j].Print(j)!=0);j++);
                if(j==0) cout << "\n\tNo More App In This Category !!!\n";
                goto Operation;
            }

            else if(Op==3)
            {
                fflush(stdin);
                cout << "\n\tEnter Name Or ID Of The App: ";
                getline(cin,Search);
                if(Search=="1141")
                {     cout<<endl<<"\n\t\t App Removed\n";
                      ofstream outfmat("Maths Learning.txt",ios::trunc);
                      outfmat<<"\n\t\t App Removed\n";
                      outfmat.close();
                      for(j=0;(EO[j].Print(j)!=0);j++);
                }
                for(j=0;j<25;j++)
                {
                    SearchChk=EO[j].SearchApp(Search);
                    if(SearchChk==1){break;}
                }

                for(k=j;k<24-j;k++)
                {
                    EO[k]=EO[k+1];
                    cout << "\n\t\t App Removed\n";
                    
                    ofstream outfmat("Maths Learning.txt",ios::trunc);
                    
                    outfmat<<"\n\tApplication Name: Easy Mathematics";
	                outfmat<<"\n\tApplication ID: 1141";
	                outfmat<<"\n\tApplication Language: English";
	                outfmat<<"\n\tApp's Developer Name: Howard";
	                outfmat<<"\n\tApplication's Version: 4";
	                outfmat<<"\n\tSize of Application: 232";
	                outfmat<<"\n\tCompatible Platform: Apple";
	                outfmat<<"\n\n\t\t App Removed\n";
	                outfmat.close();
                    
                }

                if(SearchChk!=1 && Search!="1141"){cout << "\n\t App Not Found \n";}
                goto Operation;
            }
          }

          else if(Ch==2)
          { 
            if(Op==1)
            {
                fflush(stdin);
                EOI[i].Add(Ch);
                i++;
                goto Operation;
            }

            else if(Op==2)
            {
                cout<<endl<<"\tApplication Name: English Language"<<endl;
                cout<<"\tApplication ID: 1151"<<endl;
                cout<<"\tApplication Language: English"<<endl;
                cout<<"\tApp's Developer Name: Howard"<<endl;
                cout<<"\tApplication's Version: 4"<<endl;
                cout<<"\tSize of Application: 232"<<endl;
                cout<<"\tCompatible Platform: Android"<<endl;
                
                for(j=0;(EOI[j].Print(j)!=0);j++);
                if(j==0) cout << "\n\tNo More App In This Category !!!\n";
                goto Operation;
            }

            else if(Op==3)
            {
                fflush(stdin);
                cout << "\n\tEnter Name Or ID Of The App: ";
                getline(cin,Search);
                if(Search=="1151")
                {     cout<<endl<<"\n\t\t App Removed\n";
                      ofstream outflan("Language Learning.txt",ios::trunc);
                      outflan<<"\n\t\t App Removed\n";
                      outflan.close();
                      for(j=0;(EOI[j].Print(j)!=0);j++);
                }
                for(j=0;j<25;j++)
                {
                    SearchChk=EOI[j].SearchApp(Search);
                    if(SearchChk==1){break;}
                }

                for(k=j;k<24-j;k++)
                {
                    EOI[k]=EOI[k+1];
                    cout << "\n\t\t App Removed\n";
                    
                    ofstream outflan("Language Learning.txt",ios::trunc);
                    
                    outflan<<"\n\tApplication Name: English Language";
                    outflan<<"\n\tApplication ID: 1151";
                    outflan<<"\n\tApplication Language: English";
                    outflan<<"\n\tApp's Developer Name: Howard";
                    outflan<<"\n\tApplication's Version: 4";
                    outflan<<"\n\tSize of Application: 232";
                    outflan<<"\n\tCompatible Platform: Android";
                    outflan<<"\n\n\t\t App Removed\n";
                    outflan.close();
                }

                if(SearchChk!=1 && Search!="1151"){cout << "\n\t App Not Found \n";}
                goto Operation;
            }
         }
         
         else if(Ch==3)
          { 
            if(Op==1)
            {
                fflush(stdin);
                EOT[i].Add(Ch);
                i++;
                goto Operation;
            }

            else if(Op==2)
            {
                cout<<endl<<"\tApplication Name: Sirat-e-Mustaqim Pdf"<<endl;
                cout<<"\tApplication ID: 1161"<<endl;
                cout<<"\tApplication Language: Urdu"<<endl;
                cout<<"\tApp's Developer Name: Aziz"<<endl;
                cout<<"\tApplication's Version: 2"<<endl;
                cout<<"\tSize of Application: 23"<<endl;
                cout<<"\tCompatible Platform: Android"<<endl;
                
                for(j=0;(EOT[j].Print(j)!=0);j++);
                if(j==0) cout << "\n\tNo More App In This Category !!!\n";
                goto Operation;
            }

            else if(Op==3)
            {
                fflush(stdin);
                cout << "\n\tEnter Name Or ID Of The App: ";
                getline(cin,Search);
                if(Search=="1161")
                {     cout<<endl<<"\n\t\t App Removed\n";
                      ofstream outfisl("Islamic Education.txt",ios::trunc);
                      outfisl<<"\n\t\t App Removed\n";
                      outfisl.close();
                      for(j=0;(EOT[j].Print(j)!=0);j++);
                }
                for(j=0;j<25;j++)
                {
                    SearchChk=EOT[j].SearchApp(Search);
                    if(SearchChk==1){break;}
                }

                for(k=j;k<24-j;k++)
                {
                    EOT[k]=EOT[k+1];
                    cout << "\n\t\t App Removed\n";
                    
                    ofstream outfisl("Islamic Education.txt",ios::trunc);
                    
                    outfisl<<"\n\tApplication Name: Sirat-e-Mustaqim Pdf";
                    outfisl<<"\n\tApplication ID: 1161";
                    outfisl<<"\n\tApplication Language: Urdu";
                    outfisl<<"\n\tApp's Developer Name: Aziz";
                    outfisl<<"\n\tApplication's Version: 2";
                    outfisl<<"\n\tSize of Application: 23";
                    outfisl<<"\n\tCompatible Platform: Android";
                    outfisl<<"\n\n\t\t App Removed\n";
                    outfisl.close();
                }

                if(SearchChk!=1 && Search!="1161"){cout << "\n\t App Not Found \n";}
                goto Operation;
            }
         }
}//End of Cat==3 (Admin)
}//End of chk==1 i.e. End of Admin.

//User
else if(Chk==2)
{
    fflush(stdin);
    UO.GetData();

 Label1:
    Op=UO.AskOp();
        if(Op==3)
        {
            UO.ShowData();
            goto Label1;
        }

        else if(Op==5)
        {
            goto Login;
        }

        else if(Op>5)
        {
            cout << "\n\t\t Wrong Selection !!!   Please Select Again !!!";
            goto Label1;
        }

    Cat=AO[i].AskCat();
    if(Cat==1)
    {
       Ch=GO[i].AskCat();
       if(Ch==1)
       {
        if(Op==1)
        {
            cout<<endl<<"\tApplication Name: Street Fighter"<<endl;
            cout<<"\tApplication ID: 1111"<<endl;
            cout<<"\tApplication Language: English"<<endl;
            cout<<"\tApp's Developer Name: Jack"<<endl;
            cout<<"\tApplication's Version: 4"<<endl;
            cout<<"\tSize of Application: 232"<<endl;
            cout<<"\tCompatible Platform: Apple/Android"<<endl;
                
            for(j=0;(GO[j].Print(j)!=0);j++);
            if(j==0) cout << "\n\tNo More App In This Category !!!\n";
            goto Label1;
        }

        else if(Op==2)
        {
            fflush(stdin);
            cout << "\n\tEnter Name Or ID Of The App: ";
            getline(cin,Search);
            if(Search=="1111")
            {
                cout<<endl<<"\tApplication Name: Street Fighter"<<endl;
                cout<<"\tApplication ID: 1111"<<endl;
                cout<<"\tApplication Language: English"<<endl;
                cout<<"\tApp's Developer Name: Jack"<<endl;
                cout<<"\tApplication's Version: 4"<<endl;
                cout<<"\tSize of Application: 232"<<endl;
                cout<<"\tCompatible Platform: Apple/Android"<<endl;
            }
            for(j=0;j<25;j++)
            {
                SearchChk=GO[j].SearchApp(Search);
                if(SearchChk==1){break;}
            }

            if(SearchChk!=1 && Search!="1111"){cout << "\n\t App Not Found \n";}
            goto Label1;
        }
        
        else if(Op==4)
        {
            cout<<endl<<"\tApplication Name: Street Fighter"<<endl;
            cout<<"\tApplication ID: 1111"<<endl;
            cout<<"\tApplication Language: English"<<endl;
            cout<<"\tApp's Developer Name: Jack"<<endl;
            cout<<"\tApplication's Version: 4"<<endl;
            cout<<"\tSize of Application: 232"<<endl;
            cout<<"\tCompatible Platform: Apple/Android"<<endl;
            
            cout<<"\nIf you want to download this application, press 'd'."<<endl;
            cout<<"If not press any other key."<<endl;
            char cha;
            cin>>cha;
            if(cha=='d')
            {
               cout<<"\n\t Your Downloading will start in a minute."<<endl;
               cout<<"\n\t App Downloaded!!"<<endl;
       
               ofstream outf("Downloaded App's.txt",ios::app);
               outf<<"\nApplication Name: Street Fighter"<<"   "<<"App ID: 1111";
            } 
             
            for(j=0;(GO[j].Download(j)!=0);j++);
            //if(j==0) cout << "\n\tNo App In This Category !!!\n";
            goto Label1;
        }
        
       }
       
       else if(Ch==2)
       {
        if(Op==1)
        {    
            cout<<endl<<"\tApplication Name: Need for Speed"<<endl;
            cout<<"\tApplication ID: 1121"<<endl;
            cout<<"\tApplication Language: English"<<endl;
            cout<<"\tApp's Developer Name: Jack and Joe"<<endl;
            cout<<"\tApplication's Version: 4"<<endl;
            cout<<"\tSize of Application: 236"<<endl;
            cout<<"\tCompatible Platform: Apple/Android"<<endl;
                
            for(j=0;(GOA[j].Print(j)!=0);j++);
            if(j==0) cout << "\n\tNo More App In This Category !!!\n";
            goto Label1;
        }

        else if(Op==2)
        {
            fflush(stdin);
            cout << "\n\tEnter Name Or ID Of The App: ";
            getline(cin,Search);
            if(Search=="1121")
            {
                 cout<<endl<<"\tApplication Name: Need for Speed"<<endl;
                 cout<<"\tApplication ID: 1121"<<endl;
                 cout<<"\tApplication Language: English"<<endl;
                 cout<<"\tApp's Developer Name: Jack and Joe"<<endl;
                 cout<<"\tApplication's Version: 4"<<endl;
                 cout<<"\tSize of Application: 236"<<endl;
                 cout<<"\tCompatible Platform: Apple/Android"<<endl; 
            }            
            for(j=0;j<25;j++)
            {
                SearchChk=GOA[j].SearchApp(Search);
                if(SearchChk==1){break;}
            }

            if(SearchChk!=1 && Search!="1121"){cout << "\n\t App Not Found \n";}
            goto Label1;
        }
        
        else if(Op==4)
        {    
            cout<<endl<<"\tApplication Name: Need for Speed"<<endl;
            cout<<"\tApplication ID: 1121"<<endl;
            cout<<"\tApplication Language: English"<<endl;
            cout<<"\tApp's Developer Name: Jack and Joe"<<endl;
            cout<<"\tApplication's Version: 4"<<endl;
            cout<<"\tSize of Application: 236"<<endl;
            cout<<"\tCompatible Platform: Apple/Android"<<endl;
            
            cout<<"\nIf you want to download this application, press 'd'."<<endl;
            cout<<"If not press any other key."<<endl;
            char cha;
            cin>>cha;
            if(cha=='d')
            {
               cout<<"\n\t Your Downloading will start in a minute."<<endl;
               cout<<"\n\t App Downloaded!!"<<endl;
       
               ofstream outf("Downloaded App's.txt",ios::app);
               outf<<"\nApplication Name: Need for Speed"<<"   "<<"App ID: 1121";
            } 
                
            for(j=0;(GOA[j].Download(j)!=0);j++);
            //if(j==0) cout << "\n\tNo App In This Category !!!\n";
            goto Label1;
        }
       }
       
       else if(Ch==3)
       {
        if(Op==1)
        {    
            cout<<endl<<"\tApplication Name: Bloxers"<<endl;
            cout<<"\tApplication ID: 1131"<<endl;
            cout<<"\tApplication Language: English"<<endl;
            cout<<"\tApp's Developer Name: Gerad"<<endl;
            cout<<"\tApplication's Version: 2"<<endl;
            cout<<"\tSize of Application: 123"<<endl;
            cout<<"\tCompatible Platform: Apple/Android"<<endl;
                
            for(j=0;(GOB[j].Print(j)!=0);j++);
            if(j==0) cout << "\n\tNo More App In This Category !!!\n";
            goto Label1;
        }

        else if(Op==2)
        {
            fflush(stdin);
            cout << "\n\tEnter Name Or ID Of The App: ";
            getline(cin,Search);
            if(Search=="1131")
            {
                cout<<endl<<"\tApplication Name: Bloxers"<<endl;
                cout<<"\tApplication ID: 1131"<<endl;
                cout<<"\tApplication Language: English"<<endl;
                cout<<"\tApp's Developer Name: Gerad"<<endl;
                cout<<"\tApplication's Version: 2"<<endl;
                cout<<"\tSize of Application: 123"<<endl;
                cout<<"\tCompatible Platform: Apple/Android"<<endl;\
            }
            for(j=0;j<25;j++)
            {
                SearchChk=GOB[j].SearchApp(Search);
                if(SearchChk==1){break;}
            }

            if(SearchChk!=1 && Search=="1131"){cout << "\n\t App Not Found \n";}
            goto Label1;
        }
        
        else if(Op==4)
        {    
            cout<<endl<<"\tApplication Name: Bloxers"<<endl;
            cout<<"\tApplication ID: 1131"<<endl;
            cout<<"\tApplication Language: English"<<endl;
            cout<<"\tApp's Developer Name: Gerad"<<endl;
            cout<<"\tApplication's Version: 2"<<endl;
            cout<<"\tSize of Application: 123"<<endl;
            cout<<"\tCompatible Platform: Apple/Android"<<endl;
            
            cout<<"\nIf you want to download this application, press 'd'."<<endl;
            cout<<"If not press any other key."<<endl;
            char cha;
            cin>>cha;
            if(cha=='d')
            {
               cout<<"\n\t Your Downloading will start in a minute."<<endl;
               cout<<"\n\t App Downloaded!!"<<endl;
       
               ofstream outf("Downloaded App's.txt",ios::app);
               outf<<"\nApplication Name: Bloxers"<<"   "<<"App ID: 1131";
            } 
                
            for(j=0;(GOB[j].Download(j)!=0);j++);
            //if(j==0) cout << "\n\tNo App In This Category !!!\n";
            goto Label1;
        }
       }
    }//End of Cat==1 (User).
    
    else if(Cat==2)
    {
      Ch=NO[i].AskCat();
      if(Ch==1)
      {
        if(Op==1)
        {
            cout<<endl<<"\tApplication Name: Muslims Burnt in Burma"<<endl;
            cout<<"\tApplication ID: 1171"<<endl;
            cout<<"\tApplication Language: English"<<endl;
            cout<<"\tApp's Developer Name: Fawad"<<endl;
            cout<<"\tApplication's Version: 2"<<endl;
            cout<<"\tSize of Application: 123"<<endl;
            cout<<"\tCompatible Platform: Apple/Android"<<endl;
        
            for(j=0;(NO[j].Print(j)!=0);j++);
            if(j==0) cout << "\n\tNo More App In This Category !!!\n";
            goto Label1;
        }

        else if(Op==2)
        {
            fflush(stdin);
            cout << "Enter Name Or ID Of The App: ";
            getline(cin,Search);
            if(Search=="1171")
            {
                 cout<<endl<<"\tApplication Name: Muslims Burnt in Burma"<<endl;
                 cout<<"\tApplication ID: 1171"<<endl;
                 cout<<"\tApplication Language: English"<<endl;
                 cout<<"\tApp's Developer Name: Fawad"<<endl;
                 cout<<"\tApplication's Version: 2"<<endl;
                 cout<<"\tSize of Application: 123"<<endl;
                 cout<<"\tCompatible Platform: Apple/Android"<<endl;
            } 
            for(j=0;j<25;j++)
            {
                SearchChk=NO[j].SearchApp(Search);
                if(SearchChk==1){break;}
            }

            if(SearchChk!=1 && Search!="1171"){cout << "\n\t App Not Found \n";}
            goto Label1;
        }
        
        else if(Op==4)
        {
            cout<<endl<<"\tApplication Name: Muslims Burnt in Burma"<<endl;
            cout<<"\tApplication ID: 1171"<<endl;
            cout<<"\tApplication Language: English"<<endl;
            cout<<"\tApp's Developer Name: Fawad"<<endl;
            cout<<"\tApplication's Version: 2"<<endl;
            cout<<"\tSize of Application: 123"<<endl;
            cout<<"\tCompatible Platform: Apple/Android"<<endl;
            
            cout<<"\nIf you want to download this application, press 'd'."<<endl;
            cout<<"If not press any other key."<<endl;
            char cha;
            cin>>cha;
            if(cha=='d')
            {
               cout<<"\n\t Your Downloading will start in a minute."<<endl;
               cout<<"\n\t App Downloaded!!"<<endl;
       
               ofstream outf("Downloaded App's.txt",ios::app);
               outf<<"\nApplication Name: Muslims Burnt in Burma"<<"   "<<"App ID: 1171";
            } 
        
            for(j=0;(NO[j].Download(j)!=0);j++);
            //if(j==0) cout << "\n\tNo App In This Category !!!\n";
            goto Label1;
        }
      }
      
      else if(Ch==2)
      {
        if(Op==1)
        {
            cout<<endl<<"\tApplication Name: London Olympics 2012"<<endl;
            cout<<"\tApplication ID: 1181"<<endl;
            cout<<"\tApplication Language: English"<<endl;
            cout<<"\tApp's Developer Name: Susan"<<endl;
            cout<<"\tApplication's Version: 2"<<endl;
            cout<<"\tSize of Application: 124"<<endl;
            cout<<"\tCompatible Platform: Apple/Android"<<endl;
        
            for(j=0;(NOA[j].Print(j)!=0);j++);
            if(j==0) cout << "\n\tNo More App In This Category !!!\n";
            goto Label1;
        }

        else if(Op==2)
        {
            fflush(stdin);
            cout << "Enter Name Or ID Of The App: ";
            getline(cin,Search);
            if(Search=="1181")
            {
                 cout<<endl<<"\tApplication Name: London Olympics 2012"<<endl;
                 cout<<"\tApplication ID: 1181"<<endl;
                 cout<<"\tApplication Language: English"<<endl;
                 cout<<"\tApp's Developer Name: Susan"<<endl;
                 cout<<"\tApplication's Version: 2"<<endl;
                 cout<<"\tSize of Application: 124"<<endl;
                 cout<<"\tCompatible Platform: Apple/Android"<<endl;
            }
            for(j=0;j<25;j++)
            {
                SearchChk=NOA[j].SearchApp(Search);
                if(SearchChk==1){break;}
            }

            if(SearchChk!=1 && Search!="1181"){cout << "\n\t App Not Found \n";}
            goto Label1;
        }
        
        else if(Op==4)
        {
            cout<<endl<<"\tApplication Name: London Olympics 2012"<<endl;
            cout<<"\tApplication ID: 1181"<<endl;
            cout<<"\tApplication Language: English"<<endl;
            cout<<"\tApp's Developer Name: Susan"<<endl;
            cout<<"\tApplication's Version: 2"<<endl;
            cout<<"\tSize of Application: 124"<<endl;
            cout<<"\tCompatible Platform: Apple/Android"<<endl;
            
            cout<<"\nIf you want to download this application, press 'd'."<<endl;
            cout<<"If not press any other key."<<endl;
            char cha;
            cin>>cha;
            if(cha=='d')
            {
               cout<<"\n\t Your Downloading will start in a minute."<<endl;
               cout<<"\n\t App Downloaded!!"<<endl;
       
               ofstream outf("Downloaded App's.txt",ios::app);
               outf<<"\nApplication Name: London Olympics 2012"<<"   "<<"App ID: 1181";
            }
                     
            for(j=0;(NOA[j].Download(j)!=0);j++);
            //if(j==0) cout << "\n\tNo App In This Category !!!\n";
            goto Label1;
        }
      }
      
      else if(Ch==3)
      {
        if(Op==1)
        {
            cout<<endl<<"\tApplication Name: Dark Knight Rises BoxOffice"<<endl;
            cout<<"\tApplication ID: 1191"<<endl;
            cout<<"\tApplication Language: English"<<endl;
            cout<<"\tApp's Developer Name: John Carter"<<endl;
            cout<<"\tApplication's Version: 2"<<endl;
            cout<<"\tSize of Application: 133"<<endl;
            cout<<"\tCompatible Platform: Apple/Android"<<endl;
        
            for(j=0;(NOB[j].Print(j)!=0);j++);
            if(j==0) cout << "\n\tNo More App In This Category !!!\n";
            goto Label1;
        }

        else if(Op==2)
        {
            fflush(stdin);
            cout << "Enter Name Or ID Of The App: ";
            getline(cin,Search);
            if(Search=="1191")
            {
                 cout<<endl<<"\tApplication Name: Dark Knight Rises BoxOffice"<<endl;
                 cout<<"\tApplication ID: 1191"<<endl;
                 cout<<"\tApplication Language: English"<<endl;
                 cout<<"\tApp's Developer Name: John Carter"<<endl;
                 cout<<"\tApplication's Version: 2"<<endl;
                 cout<<"\tSize of Application: 133"<<endl;
                 cout<<"\tCompatible Platform: Apple/Android"<<endl;
            }
            for(j=0;j<25;j++)
            {
                SearchChk=NOB[j].SearchApp(Search);
                if(SearchChk==1){break;}
            }

            if(SearchChk!=1 && Search!="1191"){cout << "\n\t App Not Found \n";}
            goto Label1;
        }
        
        else if(Op==4)
        {
            cout<<endl<<"\tApplication Name: Dark Knight Rises BoxOffice"<<endl;
            cout<<"\tApplication ID: 1191"<<endl;
            cout<<"\tApplication Language: English"<<endl;
            cout<<"\tApp's Developer Name: John Carter"<<endl;
            cout<<"\tApplication's Version: 2"<<endl;
            cout<<"\tSize of Application: 133"<<endl;
            cout<<"\tCompatible Platform: Apple/Android"<<endl;
            
            cout<<"\nIf you want to download this application, press 'd'."<<endl;
            cout<<"If not press any other key."<<endl;
            char cha;
            cin>>cha;
            if(cha=='d')
            {
               cout<<"\n\t Your Downloading will start in a minute."<<endl;
               cout<<"\n\t App Downloaded!!"<<endl;
       
               ofstream outf("Downloaded App's.txt",ios::app);
               outf<<"\nApplication Name: Dark Knight Rises BoxOffice"<<"   "<<"App ID: 1191";
            }
             
            for(j=0;(NOB[j].Download(j)!=0);j++);
            //if(j==0) cout << "\n\tNo App In This Category !!!\n";
            goto Label1;
        }
      }
        
    }//End of Cat==2 (User).
    
    else if(Cat==3)
    {
        Ch=EO[i].AskCat();
      if(Ch==1)
      {
        if(Op==1)
        {
            cout<<endl<<"\tApplication Name: Easy Mathematics"<<endl;
            cout<<"\tApplication ID: 1141"<<endl;
            cout<<"\tApplication Language: English"<<endl;
            cout<<"\tApp's Developer Name: Howard"<<endl;
            cout<<"\tApplication's Version: 4"<<endl;
            cout<<"\tSize of Application: 232"<<endl;
            cout<<"\tCompatible Platform: Apple"<<endl;
            
            for(j=0;(EO[j].Print(j)!=0);j++);
            if(j==0) cout << "\n\tNo More App In This Category !!!\n";
            goto Label1;
        }

        else if(Op==2)
        {
            fflush(stdin);
            cout << "Enter Name Or ID Of The App: ";
            getline(cin,Search);
            if(Search=="1141")
            {
                cout<<endl<<"\tApplication Name: Easy Mathematics"<<endl;
                cout<<"\tApplication ID: 1141"<<endl;
                cout<<"\tApplication Language: English"<<endl;
                cout<<"\tApp's Developer Name: Howard"<<endl;
                cout<<"\tApplication's Version: 4"<<endl;
                cout<<"\tSize of Application: 232"<<endl;
                cout<<"\tCompatible Platform: Apple"<<endl;
            }  
            for(j=0;j<25;j++)
            {
                SearchChk=EO[j].SearchApp(Search);
                if(SearchChk==1){break;}
            }

            if(SearchChk!=1 && Search!="1141"){cout << "\n\t App Not Found \n";}
            goto Label1;
        }
        
        else if(Op==4)
        {
            cout<<endl<<"\tApplication Name: Easy Mathematics"<<endl;
            cout<<"\tApplication ID: 1141"<<endl;
            cout<<"\tApplication Language: English"<<endl;
            cout<<"\tApp's Developer Name: Howard"<<endl;
            cout<<"\tApplication's Version: 4"<<endl;
            cout<<"\tSize of Application: 232"<<endl;
            cout<<"\tCompatible Platform: Apple"<<endl;
            
            cout<<"\nIf you want to download this application, press 'd'."<<endl;
            cout<<"If not pres any other key."<<endl;
            char cha;
            cin>>cha;
            if(cha=='d')
            {
               cout<<"\n\t Your Downloading will start in a minute."<<endl;
               cout<<"\n\t App Downloaded!!"<<endl;
       
               ofstream outf("Downloaded App's.txt",ios::app);
               outf<<"\nApplication Name: Easy Mathematics"<<"   "<<"App ID: 1141";
            } 
            
            for(j=0;(EO[j].Download(j)!=0);j++);
            //if(j==0) cout << "\n\tNo App In This Category !!!\n";
            goto Label1;
        }
        
      }
      
      else if(Ch==2)
      {
        if(Op==1)
        {
            cout<<endl<<"\tApplication Name: English Language"<<endl;
            cout<<"\tApplication ID: 1151"<<endl;
            cout<<"\tApplication Language: English"<<endl;
            cout<<"\tApp's Developer Name: Howard"<<endl;
            cout<<"\tApplication's Version: 4"<<endl;
            cout<<"\tSize of Application: 232"<<endl;
            cout<<"\tCompatible Platform: Android"<<endl;
            
            for(j=0;(EOI[j].Print(j)!=0);j++);
            if(j==0) cout << "\n\tNo More App In This Category !!!\n";
            goto Label1;
        }

        else if(Op==2)
        {
            fflush(stdin);
            cout << "Enter Name Or ID Of The App: ";
            getline(cin,Search);
            if(Search=="1151")
            {
                cout<<endl<<"\tApplication Name: English Language"<<endl;
                cout<<"\tApplication ID: 1151"<<endl;
                cout<<"\tApplication Language: English"<<endl;
                cout<<"\tApp's Developer Name: Howard"<<endl;
                cout<<"\tApplication's Version: 4"<<endl;
                cout<<"\tSize of Application: 232"<<endl;
                cout<<"\tCompatible Platform: Android"<<endl;
            }
            for(j=0;j<25;j++)
            {
                SearchChk=EOI[j].SearchApp(Search);
                if(SearchChk==1){break;}
            }

            if(SearchChk!=1 && Search!="1151"){cout << "\n\t App Not Found \n";}
            goto Label1;
        }
        
        else if(Op==4)
        {
            cout<<endl<<"\tApplication Name: English Language"<<endl;
            cout<<"\tApplication ID: 1151"<<endl;
            cout<<"\tApplication Language: English"<<endl;
            cout<<"\tApp's Developer Name: Howard"<<endl;
            cout<<"\tApplication's Version: 4"<<endl;
            cout<<"\tSize of Application: 232"<<endl;
            cout<<"\tCompatible Platform: Android"<<endl;
            
            cout<<"\nIf you want to download this application, press 'd'."<<endl;
            cout<<"If not pres any other key."<<endl;
            char cha;
            cin>>cha;
            if(cha=='d')
            {
               cout<<"\n\t Your Downloading will start in a minute."<<endl;
               cout<<"\n\t App Downloaded!!"<<endl;
       
               ofstream outf("Downloaded App's.txt",ios::app);
               outf<<"\nApplication Name: English Language"<<"   "<<"App ID: 1151";
            } 
            
            for(j=0;(EOI[j].Download(j)!=0);j++);
            //if(j==0) cout << "\n\tNo App In This Category !!!\n";
            goto Label1;
        }
        
      }
      
      else if(Ch==3)
      {
        if(Op==1)
        {
            cout<<endl<<"\tApplication Name: Sirat-e-Mustaqim Pdf"<<endl;
            cout<<"\tApplication ID: 1161"<<endl;
            cout<<"\tApplication Language: Urdu"<<endl;
            cout<<"\tApp's Developer Name: Aziz"<<endl;
            cout<<"\tApplication's Version: 2"<<endl;
            cout<<"\tSize of Application: 23"<<endl;
            cout<<"\tCompatible Platform: Android"<<endl;
            
            for(j=0;(EOT[j].Print(j)!=0);j++);
            if(j==0) cout << "\n\tNo More App In This Category !!!\n";
            goto Label1;
        }

        else if(Op==2)
        {
            fflush(stdin);
            cout << "Enter Name Or ID Of The App: ";
            getline(cin,Search);
            if(Search=="1161")
            {
                cout<<endl<<"\tApplication Name: Sirat-e-Mustaqim Pdf"<<endl;
                cout<<"\tApplication ID: 1161"<<endl;
                cout<<"\tApplication Language: Urdu"<<endl;
                cout<<"\tApp's Developer Name: Aziz"<<endl;
                cout<<"\tApplication's Version: 2"<<endl;
                cout<<"\tSize of Application: 23"<<endl;
                cout<<"\tCompatible Platform: Android"<<endl;
                
            }               
            for(j=0;j<25;j++)
            {
                SearchChk=EOT[j].SearchApp(Search);
                if(SearchChk==1){break;}
            }

            if(SearchChk!=1 && Search!="1161"){cout << "\n\t App Not Found \n";}
            goto Label1;
        }
        
        else if(Op==4)
        {
            cout<<endl<<"\tApplication Name: Sirat-e-Mustaqim Pdf"<<endl;
            cout<<"\tApplication ID: 1161"<<endl;
            cout<<"\tApplication Language: Urdu"<<endl;
            cout<<"\tApp's Developer Name: Aziz"<<endl;
            cout<<"\tApplication's Version: 2"<<endl;
            cout<<"\tSize of Application: 23"<<endl;
            cout<<"\tCompatible Platform: Android"<<endl;
            
            cout<<"\nIf you want to download this application, press 'd'."<<endl;
            cout<<"If not pres any other key."<<endl;
            char cha;
            cin>>cha;
            if(cha=='d')
            {
               cout<<"\n\t Your Downloading will start in a minute."<<endl;
               cout<<"\n\t App Downloaded!!"<<endl;
       
               ofstream outf("Downloaded App's.txt",ios::app);
               outf<<"\nApplication Name: Sirat-e-Mustaqim Pdf"<<"   "<<"App ID: 1161";
            } 
            
            
            for(j=0;(EOT[j].Download(j)!=0);j++);
            //if(j==0) cout << "\n\tNo App In This Category !!!\n";
            goto Label1;
        }
      }
      
    }//End of Cat==3 (User)
}//End of Chk==2 i.e. End of User.

//Exit
else if(Chk==3)
{
    cout << "\n\t\t Thank You !!! Visit Us Again !!!\n";
    system("pause");
    return 0;
}
 //   return 0;
}
