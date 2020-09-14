enum class Traffic_light { red, yellow, green };
enum class Warning { red, yellow, green, orange };
Warning a1 = 7;                                      //no integer value is assign so here is error
int a2 = green;                                      //here a2 can only hold the integer values not the attributes associated to warning class
int a3 = Warning::green;                             //even using class name directly a3 can't hold attribute, only integer values can be assigned
Warning a4 = Warning::green;                         //now a4 can hold the attribute because there is no restriction of holding integer values 
void f(Traffic_light x)                              
{
	if (x == 9) {/* ababbababa*/ }                   //there is no interger attribute in traffic_light enum class
	if (x == red) {/*efefefffeff*/}                  //
	if (x==Warning::red){/* ghghgghghgh*/ }
    if (x==Traffic_light::red){/* dffd*/ }
}

int main()
{
}