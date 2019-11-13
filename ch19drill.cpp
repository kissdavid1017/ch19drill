 #include<std_lib_facilities.h>
using namespace std;

 template<typename T>
 struct S {

     public:
    S(T val){

cout<<"kiir:"<<val<<endl;
   this->val = val;


    }

    T get();
    T set(T x);
    T get() const;
    void valami(const T& x);//operator
     T read_val(T& v);

    private:
     T val;

 };
 template<typename T>
 T  S<T>::set(T x)
 {
     val=x;
 }


 template<typename T>
 T S<T>::get()
{
    return val;
}
template<typename T>
T S<T>::get() const
{
    return val;
}
template<typename T>
void S<T>::valami(const T& x) //operator
{
    val=x;
}
template<typename T>
 read_val(T & v)
{
    cin >> v;

}


 int main()
 {
S<int> s1(5);
S<char> s2('D');
S<double> s3(5.5);
S<string> s4("David");
cout<<"sima cout-tal:"<<endl;
//S<vector<int>> s5(vector<int>{1,2,3});
cout<<"------------------"<<endl<<"get -tel:"<<endl;
cout<<s1.get()<<endl;
cout<<s2.get()<<endl;
cout<<s3.get()<<endl;
cout<<s4.get()<<endl;

cout<<"------------------------"<<"most jon a read val:"<<endl;

cout<<"Irj egy integert!"<<endl;
int itg;
read_val(itg);
s1.valami(itg);
cout<<"kiir:"<<s1.get()<<endl;

cout<<endl<<"------------------------"<<endl;
cout<<endl<<"Irj egy chart!"<<endl;
char chr;
read_val(chr);
s2.valami(chr);
cout<<"kiir:"<<s2.get();

cout<<endl<<"------------------------"<<endl;
cout<<endl<<"Irj egy double-t!"<<endl;
double dbl;
read_val(dbl);
s3.valami(dbl);
cout<<"kiir:"<<s3.get();

cout<<endl<<"------------------------"<<endl;

cout<<endl<<"Irj egy stringet!"<<endl;
string str;
read_val(str);
s4.valami(str);
cout<<"kiir:"<<s4.get();

return 0;

 }
