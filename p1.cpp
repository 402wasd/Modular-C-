#include <iostream>
#include <math.h>
#include <string>

using namespace std;
int randn(int a);
int randr(int a, int b);
int roll_dice();

int roll_dice()
{
    return (rand()%6 + 1);
}
int randn(int higher)
{
    return (rand()%higher + 1);
}
int randr(int lower, int higher)
{
    int Z = 0;
    Z = lower + (rand()%(higher-lower)+ 1);

    return Z;
}

class fruit
{
    public:
        const char* name; //https://www.geeksforgeeks.org/char-vs-stdstring-vs-char-c/
        /*
        char* name;
        This works fine in C but writing in this form is a bad idea in C++. That’s why compiler shows warning
        of “deprecated conversion from string constant to ‘char*'” because in C string literals are arrays of char but
        in C++ they are constant array of char. Therefore use const keyword before char*.

        const char* str = "This is GeeksForGeeks";
        */
        string name1;
        string colour; //or std::string colour;
        int age;
        void eat(void);
        void f_throw(void);
        void dice(void);
        fruit(); 
};

fruit::fruit()
{
    cout<<"\nEnter Fruit "<<" Name: ";
    getline(cin, name1);
    cout<<"\nEnter Fruit "<<" Colour: ";
    getline(cin, colour);
    age = randn(20);
    cout<<"\nAlright, "<<name1<<" created with colour "<<colour<<" and age "<<age;
}

void fruit :: eat(void)
{
    cout<<"\neaten bro!";
}
void fruit :: f_throw(void)
{
    cout<<"\nthrown bro!";
}
void fruit :: dice(void)
{
    cout<<"\ndiced bro!";
}

int main()
{   
    int N;
    int X;

    srand(time(0));

    cout<<"enter the number of fruits bro!";
    cin>>N;
    fruit o[N]; 
    /*all objects from [0] to [N] will be initialized one after another here on its own.
    And can be used later on as you like!
    like so!*/

    o[0].eat();
    o[1].dice();

    return 0;   
}
//g++ -o a p1.cpp