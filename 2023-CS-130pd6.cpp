#include<iostream>
using namespace std;
string activity(string te, string hu);
main()
{
	cout << "Enter temperature (warm or cold): ";
	string tem, hum;
	string b;
	cin >> tem;
	cout << "Enter humidity (dry or humid): ";
	cin >> hum;
	b= activity(tem, hum);
	cout <<"Recommended activity: "<< b;
}
string activity(string te, string hu)
{
string a;
if(te=="warm"&&hu=="dry")
{
	a = "Play tennis";
}
if (te == "warm" && hu == "humid")
{
	a = "Swim";
}
if (te == "cold" && hu == "dry")
{
	a = "Play basketball";

}
if (te == "cold" && hu == "humid")
{
	a = "Watch TV";
}
return a;
}




#include<iostream>
using namespace std;
string stuna(string n);
float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology);
string calculateGrade(float average);
float c;
main()
{
string name,q;
float EM,MM,CM,SM,BM;
cout<<"Enter student name: ";
cin>> name;
cout<<"Enter marks for English: ";
cin>>EM;
cout<<"Enter marks for Maths: ";
cin >>MM;
cout<<"Enter marks for Chemistry: ";
cin >>CM;
cout<<"Enter marks for Social Science: ";
cin >>SM;
cout<<"Enter marks for Biology: ";
cin >>BM;
stuna(name);
c=calculateAverage(EM,MM,CM,SM,BM);
cout<<"Percentage: "<<c<<"%"<<endl;
q=calculateGrade(c);
cout<<"Grade: "<<q;
}
string stuna(string n)
{
cout<<"Student Name: "<<n<<endl;
}
float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology)
{

float a,b;
a=marksEnglish+marksMaths+marksChemistry+ marksSocialScience+marksBiology;
b=a/500;
c=b*100;
return c;
}
string calculateGrade(float average)
{
string b;
if(average<=100 && average>=90)
{
b="A+";
}
if(average<90 && average>=80)
{
b="A";
}
if(average<80 && average>=70)
{
b="B+";
}
if(average<70 && average>=60)
{
b="B";
}
if(average<60 && average>=50)
{
b="C";
}
if(average<50 && average>=40)
{
b="D";
}
if(average<30)
{
b="F";
}
return b;
}



#include<iostream>
using namespace std;
string findZodiacSign(int day, string month);
main()
{
int d;
string m,a;
cout<<"Enter the day of birth: ";
cin>> d;
cout<<"Enter the month of birth (e.g., January, February): ";
cin>> m;
a=findZodiacSign(d,m);
cout<<"Zodiac Sign: "<<a;
}
string findZodiacSign(int day, string month)
{
string a;
if(month=="March"&& (day>=21&&day<=31))
{
a="Aries";
}
if(month=="April"&& (day>=1&&day<=19))
{
a="Aries"; 
}
if((month=="April"&& (day>=20&&day<=30))||(month=="May"&& (day>=1&&day<=20)))
{
a="Taurus";
}
if((month=="May"&& (day>=21&&day<=31))||(month=="June"&& (day>=1&&day<=20)))
{
a="Gemini";
}
if((month=="June"&& (day>=21&&day<=30))||(month=="July"&& (day>=1&&day<=22)))
{
a="Cancer";
}
if((month=="July"&& (day>=23&&day<=31))||(month=="August"&& (day>=1&&day<=22)))
{
a="Leo";
}
if((month=="August"&& (day>=23&&day<=31))||(month=="September"&& (day>=1&&day<=22)))
{
a="Virgo";
}
if((month=="September"&& (day>=23&&day<=30))||(month=="October"&& (day>=1&&day<=22)))
{
a="Libra";
}
if((month=="october"&& (day>=23&&day<=31))||(month=="november"&& (day>=1&&day<=21)))
{
a="Scorpio";
}
if((month=="November"&& (day>=22&&day<=30))||(month=="December"&& (day>=1&&day<=21)))
{
a="Sagittarius";
}
if((month=="December"&& (day>=22&&day<=31))||(month=="January"&& (day>=1&&day<=19)))
{
a="Capricorn";
}
if((month=="January"&& (day>=20&&day<=31))||(month=="February"&& (day>=1&&day<=18)))
{
a="Aquaris";
}
return a;
}



#include<iostream>
using namespace std;
string serviceCode(char a);
float minutes(char d,int mi, string k);

main()
{
    string k;
char s,t;
int m;
float n;
cout<<"Enter the service code (R/r for regular, P/p for premium): ";
cin>>s;
cout<<"Enter the number of minutes used: ";
cin >>m;
k=serviceCode(s);
cout<<"Service Type: "<<k<<endl;
if(k=="Premium")
{
cout<<"Enter time of thr call (D/d for day, N/n for night): ";
cin>>t;
}
cout<<"Total Minutes used: "<<m<<endl;
n=minutes(t,m,k);
cout<<"Amount Due: $"<<n;
}
string serviceCode(char a)
{
string h;
if(a=='P'||a=='p')
{
h="Premium";
}
if(a=='R'||a=='r')
{
h="Regular";
}
return h;
}
float minutes(char d,int mi,string k)
{
float u;
if(k=="Premium")
{
if(d=='D'||d=='d')
{
    if(mi<=50)
    {
        u=10.0;
    }
if(mi>75)
{
u=mi*0.10;
}
}
if(d=='N'||d=='n')
{
if(mi>100)
{
u=mi*0.05;
}
}
return u;
}
}


#include<iostream>
using namespace std;
float calculateFruitPrice(string fruit, string day, double quantity);
main(){
    string f,d;
    float q;
    float o;
    cout<<"Fruits: ";
    cin>> f;
    cout<<"Day: ";
    cin >>d;
    cout<<"Quantity: ";
    cin>> q;
    o=calculateFruitPrice(f,d,q);
    cout<<o;
}
float calculateFruitPrice(string fruit, string day, double quantity)
{
    float pr,pri;
    if(fruit=="banana"&&day=="Sunday")
    {
        pr=2.70;
        pri=pr*quantity;
    }
     if(fruit=="banana"&&(day=="Monday"||day=="Tuesday"||day=="Wednesday"||day=="Thursday"||day=="Friday"||day=="Saturday"))
    {
        pr=2.50;
        pri=pr*quantity;
    }
    if(fruit=="apple"&&day=="Sunday")
    {
        pr=1.25;
        pri=pr*quantity;
    }
     if(fruit=="apple"&&(day=="Monday"||day=="Tuesday"||day=="Wednesday"||day=="Thursday"||day=="Friday"||day=="Saturday"))
    {
        pr=1.20;
        pri=pr*quantity;
    }
    if(fruit=="orange"&&day=="Sunday")
    {
        pr=0.90;
        pri=pr*quantity;
    }
     if(fruit=="orange"&&(day=="Monday"||day=="Tuesday"||day=="Wednesday"||day=="Thursday"||day=="Friday"||day=="Saturday"))
    {
        pr=0.85;
        pri=pr*quantity;
    }
    if(fruit=="grapefruit"&&day=="Sunday")
    {
        pr=1.60;
        pri=pr*quantity;
    }
     if(fruit=="grapefruit"&&(day=="Monday"||day=="Tuesday"||day=="Wednesday"||day=="Thursday"||day=="Friday"||day=="Saturday"))
    {
        pr=1.45;
        pri=pr*quantity;
    }
    if(fruit=="kiwi"&&day=="Sunday")
    {
        pr=3.00;
        pri=pr*quantity;
    }
     if(fruit=="kiwi"&&(day=="Monday"||day=="Tuesday"||day=="Wednesday"||day=="Thursday"||day=="Friday"||day=="Saturday"))
    {
        pr=2.70;
        pri=pr*quantity;
    }
    if(fruit=="pineapple"&&day=="Sunday")
    {
        pr=5.60;
        pri=pr*quantity;
    }
     if(fruit=="pineapple"&&(day=="Monday"||day=="Tuesday"||day=="Wednesday"||day=="Thursday"||day=="Friday"||day=="Saturday"))
    {
        pr=5.50;
        pri=pr*quantity;
    }
    if(fruit=="grapes"&&day=="Sunday")
    {
        pr=4.20;
        pri=pr*quantity;
    }
     if(fruit=="grapes"&&(day=="Monday"||day=="Tuesday"||day=="Wednesday"||day=="Thursday"||day=="Friday"||day=="Saturday"))
    {
        pr=3.85;
        pri=pr*quantity;
    }

return pri;
}

#include<iostream>
#include<string>
using namespace std;
string calculateHotelPrices(string month, int numberOfStays);
int main()
{
string m;
int n;
string a;
    cout<<"Enter the month (May, June, July, August, September, October): ";
    cin>>m;
    cout<<"Enter the number of stays: ";
    cin>>n;
   a= calculateHotelPrices(m,n);
   cout<<a;
}
string calculateHotelPrices(string month, int numberOfStays)
{
double st,ap;
    if(month == "May" || month == "October") {
        st = 50.0 * numberOfStays;
        ap = 65.0 * numberOfStays;

        if (numberOfStays > 14) {
            st = st-(st * 0.30);
            ap = ap-(ap * 0.10);
        } else if (numberOfStays > 7) {
            st = st-(st * 0.05);
        }
        } else if (month == "June" || month == "September") {
        st = 75.20 * numberOfStays;
        ap = 68.70 * numberOfStays;

        if (numberOfStays > 14) {
            st= st-(st * 0.20);
            ap= ap-(ap * 0.10);
        }
    } else if (month == "July" || month == "August") {
        st = 76.0 * numberOfStays;
        ap = 77.0 * numberOfStays;
    }
        string result = "Apartment: " + std::to_string(ap) + "$.\n";
    result += "Studio: " + std::to_string(st) + "$.";
    return result;
    
}


#include<iostream>
using namespace std;
string checkStudentStatus(int examHour, int examMinute, int
studentHour, int studentMinute);
int main()
{
int eh,em,sh,sm;
string  m;
cout<<"Enter Exam Starting Time (hour): ";
cin>>eh;
cout<<"Enter Exam Starting Time (minutes): ";
cin>>em;
cout<<"Enter Student hour of arrival: ";
cin>>sh;
cout<<"Enter Student minutes of arrival: ";
cin>>sm;
m=checkStudentStatus(eh,em,sh,sm);
cout<<m;
}
string checkStudentStatus(int eh, int em, int sh, int sm)
{
int t,w,totmi,stumin,dif;
int e,f,b,bh;
string a;
totmi=eh*60+em;
stumin=sh*60+sm;
dif=totmi-stumin;
t=eh-sh;
w=em-sm;
{
if(dif==0||dif<=30)
{
a="On time";
}
}

{
if(dif<30)
{
a="Late";
e=sh-eh;
f=sm-em;
b=e*60+f;
cout<<"Test: "<<b<<endl;
bh=(e*60)+f;
if(bh<59)
{
cout<<e<<":"<<f<<" hours after the start"<<endl ;
}
else 
{
cout<<b<<" minutes after the start"<<endl ;
}
}
}

{
if(dif>0)    
{
a="Early";
e=eh-sh;
f=em-sm;
b=e*60+f;
cout<<"Test: "<<b<<endl;
bh=(e*60)+f;
if(bh>59)
{
cout<<e<<":"<<f<<" hours before the start"<<endl ;
}
else{
cout<<b<<" minutes before the start"<<endl ;
}
}
}
return a;

}


#include<iostream>
using namespace std;
int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends);
main()
{
    string year;
    int noh,now,k;
    cout <<"Enter year type: ";
    cin>> year;
    cout<<"Enter number of holidays: ";
    cin>> noh;
    cout<<"Enter number of weekends: ";
    cin>> now;
    k=calculateVolleyballGames(year,noh,now);
    cout<<k;
}
int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends)
{
    int totalW =48, normalY =0,leapY = 0,tw;
    tw=totalW-hometownWeekends;
    if(yearType=="leap")
    {
        normalY=(3 * totalW /4) + (2 * holidays/3);
        leapY = normalY + (0.15 * normalY);
    }
        else if(yearType=="normal")
        {
            normalY = (3 * totalW/ 4) + (2 * holidays / 3) ;
        }
if (yearType == "leap") {
    return leapY;
} else {
    return normalY;
}
    
}
    
#include <iostream>
#include <string>
using namespace std;

string checkPointPosition(int h, int x, int y);

int main() {
    int hei, xco, yco;
    string result;
    cout<<"Enter height: ";
    cin >> hei;
    cout<<"Enter x coordinate: ";
    cin >> xco;
    cout<<"Enter y coordinate: ";
    cin >> yco;

    result = checkPointPosition(h, x, y);
    cout << result;
}
    
    string checkPointPosition(int h, int x, int y)
    {

if ((x >h && x < 2 * h && y >0 && y < 4 * h)||(x >= 0 && x <=2 * h && y >= 0 && y<= h)||(x >= h && x <= 2 * h && y >= 3 * h && y <= 4 * h)) {
        return "Inside";
    } else if ((x < 0 || x > 2 * h || y < 0 || y > 4 * h) ||
               (x > h && x < 2 * h && y > h && y < 3 * h)) {
        return "Outside";
    } else {
        return "Border";
    }
    }





