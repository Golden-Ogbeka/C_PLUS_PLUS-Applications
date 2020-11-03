#include<iostream> //standard headers
#include<string>
#include<cstdlib> //in order to use system("cls")
using namespace std;
int GST211(int a){
    int realdate;
    int days;
    realdate=28;
    if (realdate<a){
        days=a-realdate;
    }
    else{
        days=realdate-a;
    }
    int hours=days*24;
    int minutes=hours * 60;
    cout<<"GST211 comes up on Saturday the 28th of November,2015 by 10am \n";
    cout<<"Therefore, you have "<<days<<" days to the exam which is equals to "<<hours<<" hours"<<" \nor "<<minutes<<" minutes so go and read! "<<endl;

}
int CSC211(int a){
    int realdate;
    int days;
    realdate=27;
    if (realdate<a){
        days=a-realdate;
    }
    else{
        days=realdate-a;
    }
    int hours=days*24;
    int minutes=hours * 60;
    cout<<"CSC211 comes up on Friday the 27th of November, 2015 by 8am \n";
    cout<<"Therefore, you have "<<days<<" days to the exam which is equals to "<<hours<<" hours"<<" \nor "<<minutes<<" minutes so go and read! "<<endl;
}

int CSC213(int a){
    int realdate;
    int days;
    realdate=30;
    if (realdate<a){
        days=a-realdate;
    }
    else{
        days=realdate-a;
    }
    int hours=days*24;
    int minutes=hours * 60;
    cout<<"CSC213 comes up on Monday the 30th of November, 2015 by 12pm \n";
    cout<<"Therefore, you have "<<days<<" days to the exam which is equals to "<<hours<<" hours"<<" \nor "<<minutes<<" minutes so go and read! "<<endl;
}
int CSC214(int a){
    int realdate;
    int days;
    realdate=31;
    if (realdate<a){
        days=a-realdate;
    }
    else{
        days=realdate-a;
    }
    int hours=days*24;
    int minutes=hours * 60;
    cout<<"CSC214 comes up on Tuesday 1st of December, 2015 by 8am\n";
    cout<<"Therefore, you have "<<days<<" days to the exam which is equals to "<<hours<<" hours"<<" \nor "<<minutes<<" minutes so go and read! "<<endl;
}
int CSC215(int a){
    int realdate;
    int days;
    realdate=31;
    if (realdate<a){
        days=a-realdate;
    }
    else{
        days=realdate-a;
    }
    int hours=days*24;
    int minutes=hours * 60;
    cout<<"CSC215 comes up on Tuesday 1st of December, 2015 by 12pm\n";
    cout<<"Therefore, you have "<<days<<" days to the exam which is equals to "<<hours<<" hours"<<" \nor "<<minutes<<" minutes so go and read! "<<endl;
}
int CSC216(int a){
    int realdate;
    int days;
    realdate=32;
    if (realdate<a){
        days=a-realdate;
    }
    else{
        days=realdate-a;
    }
    int hours=days*24;
    int minutes=hours * 60;
    cout<<"CSC216 comes up on Wednesday 2nd of December, 2015 by 12pm\n";
    cout<<"Therefore, you have "<<days<<" days to the exam which is equals to "<<hours<<" hours"<<" \nor "<<minutes<<" minutes so go and read! "<<endl;
}
int TMC211(int a){
    int realdate;
    int days;
    realdate=33;
    if (realdate<a){
        days=a-realdate;
    }
    else{
        days=realdate-a;
    }
    int hours=days*24;
    int minutes=hours * 60;
    cout<<"TMC211 comes up on Thursday 3rd of December, 2015 by 4pm\n";
    cout<<"Therefore, you have "<<days<<" days to the exam which is equals to "<<hours<<" hours"<<" \nor "<<minutes<<" minutes so go and read! "<<endl;
}
int EDS211(int a){
    int realdate;
    int days;
    realdate=21;
    if (realdate<a){
        days=a-realdate;
    }
    else{
        days=realdate-a;
    }
    int hours=days*24;
    int minutes=hours * 60;
    cout<<"EDS211 comes up on Saturaday the 21st of November,2015 by 10am \n";
    cout<<"Therefore, you have "<<days<<" days to the exam which is equals to "<<hours<<" hours"<<" \nor "<<minutes<<" minutes so go and read! "<<endl;
}
int CIT217(int a){
    int realdate;
    int days;
    realdate=34;
    if (realdate<a){    //to check if the real date is greater than the current date
        days=a-realdate;
    }
    else{
        days=realdate-a;
    }
    int hours=days*24;
    int minutes=hours * 60;
    cout<<"CIT217 comes up on Friday 4th of December, 2015 by 12pm \n";
    cout<<"Therefore, you have "<<days<<" days to the exam which is equals to "<<hours<<" hours"<<" \nor "<<minutes<<" minutes so go and read! "<<endl;
}
int main()
{
    cout<<"=======================================WELCOME==================================================================================================================\n";
    int currentdate;
    string course;
    string name;
    cout<<"Enter your name:";
    cin>>name;
    cout<<"Enter today's date (the day alone):";
    cin>>currentdate;
    system("cls");
    cout<<"Okay "<<name<<" this is your exam timetable software \nThat shows the date and time for any course you want to study for\n";
    cout<<"So enter the course you want to study for:";
    cin>>course;
    if(course=="GST211"||course=="gst211"||course=="Gst211"){
        cout<<"\n";
        GST211(currentdate);
            }
    else if (course=="TMC211"||course=="tmc211"||course=="Tmc211"){
        cout<<"\n";
        TMC211(currentdate);
    }
    else if (course=="EDS211"||course=="eds211"||course=="Eds211"){
        cout<<"\n";
        EDS211(currentdate);
    }
    else if (course=="CSC211"||course=="csc211"||course=="Csc211"){
        cout<<"\n";
        CSC211(currentdate);
    }
    else if (course=="CSC213"||course=="csc213"||course=="Csc213"){
        cout<<"\n";
        CSC213(currentdate);
    }
    else if (course=="CSC214"||course=="csc214"||course=="Csc214"){
        cout<<"\n";
        CSC214(currentdate);
    }
    else if (course=="CSC215"||course=="csc215"||course=="Csc215"){
        cout<<"\n";
        CSC215(currentdate);
    }
    else if (course=="CSC216"||course=="csc216"||course=="Csc216"){
        cout<<"\n";
        CSC216(currentdate);
    }
    else if (course=="CIT217"||course=="cit217"||course=="Cit217"){
        cout<<"\n";
        CIT217(currentdate);
    }

    else {
        cout<<"\n";
        cout<<"You entered an invalid course";
    }
    cout<<"\n\n\n\n\nYou are Blessed\n\n\n\n\n\n";
    return 0;
}
