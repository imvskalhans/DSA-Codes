#include<iostream>
using namespace std;

class vishal
{
    public:
    //properties
        string name;
        float hieght;
        int weight;

    //default constructor
        vishal()
        {
            cout << "deafult cunstrutor called" << endl;
        }

        // parametrised constructor
        vishal(string name, float height, int weight)
        {
            cout << " parametrised cunstuctor called" << endl;
            this->name = name;
            this->hieght = height;
            this->weight = weight;
    }

    void print()
    {
            cout << name << endl;
            cout << hieght << endl;
            cout << weight << endl;
    }

    int bmi(int hieght , int weight)
    {
            cout << "BMI = " ;
            return hieght * hieght / weight;
    }
};

int main(){
    // vishal v;
    vishal vis("vishal",5.4,74);
    vis.print();
    //v.print();
    cout<< vis.bmi(60, 74);
}