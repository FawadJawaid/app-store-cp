#ifndef APPSTORE_H_INCLUDED
#define APPSTORE_H_INCLUDED
#include<iostream>

using namespace std;

class Admin
{
    private:
        string Pass;

    public:
        Admin();
        int ChkPass(string a);
        int AskOp();
};


class User
{
    private:
        string Name,Email;
        int Age;
        string NIC,Tele;

    public:
        User();
        void GetData();
        void ShowData();
        int AskOp();
};

class App
{
    protected:
        string AppName,Lang,Dev,Des,ID,Version,Size;
        float Rating;

    public:
        App();
        int AskCat();
        void Add();
        void Print(int a);
};

class Game:public App
{
    protected:
        string Genre;

    public:

        Game();
        int AskCat();
        void Add(int a);
        int Print(int a);
        bool SearchApp(string a);
        int Download(int a);
};

class GameA:public App
{
    protected:
        string Genre1;

    public:

        GameA();
        //int AskCat();
        void Add(int a);
        int Print(int a);
        bool SearchApp(string a);
        int Download(int a);
};

class GameB:public App
{
    protected:
        string Genre2;

    public:

        GameB();
        //int AskCat();
        void Add(int a);
        int Print(int a);
        bool SearchApp(string a);
        int Download(int a);
};

class News:public App
{
  protected:
        string NewsType;

  public:

        News();
        int AskCat();
        void Add(int a);
        int Print(int a);
        bool SearchApp(string a);
        int Download(int);
};

class NewsA:public App
{
  protected:
        string NewsType1;

  public:

        NewsA();
        //int AskCat();
        void Add(int a);
        int Print(int a);
        bool SearchApp(string a);
        int Download(int);
};

class NewsB:public App
{
  protected:
        string NewsType2;

  public:

        NewsB();
        //int AskCat();
        void Add(int a);
        int Print(int a);
        bool SearchApp(string a);
        int Download(int);
};


class Education:public App
{
  protected:
        string Field;

  public:

        Education();
        int AskCat();
        void Add(int a);
        int Print(int a);
        bool SearchApp(string a);
        int Download(int a);
};

class EducationA:public App
{
  protected:
        string Field1;

  public:

        EducationA();
        //int AskCat();
        void Add(int a);
        int Print(int a);
        bool SearchApp(string a);
        int Download(int a);
};

class EducationB:public App
{
  protected:
        string Field2;

  public:

        EducationB();
        //int AskCat();
        void Add(int a);
        int Print(int a);
        bool SearchApp(string a);
        int Download(int a);
};

#endif // APPSTORE_H_INCLUDED
