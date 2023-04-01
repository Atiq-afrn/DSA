/*

  #include <bits/stdc++.h>
#include <stdlib.h>
#include <ctime>    // to use time function
#include <unistd.h> // for usleep unistd.h file
using namespace std;
int main()
{
    // wap to generate the random number from 1-6;
     int randomvalue;
     srand(time(NULL));
     randomvalue=(rand()%6)+1;  //1,2,3,4,5,6;

     cout<<"rolling dice"<<endl;
        usleep(9000000);
     cout<<"you got "<<randomvalue;

    // srand(time(NULL));
    // for (int i = 1; i <= 5; i++)
    //     cout << (rand() % 6) + 1 << endl;

}
*/
#include <bits/stdc++.h>
#include <ctime>
#include <unistd.h>
using namespace std;
int main()
{
    // int randomvalue;
    // srand(time(0));
    // randomvalue = (rand() % 6);
    // cout << "dice is rolling " << endl;
    // usleep(900000);
    // cout << randomvalue;
    srand(time(0));
    for (int i = 1; i >= 6; i++)
        cout << (rand() % 5) + 1;
}
