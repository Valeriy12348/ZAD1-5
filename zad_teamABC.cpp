#include <iostream>

using namespace std;

int main()
{
    int mecze[12][6]={
        //           a-b a-c b-c
                    {1,2,3,2,4,3},
                    {1,1,1,2,2,3},
                    {1,3,2,2,3,3},
                    {4,2,0,3,5,4},
                    {4,2,0,0,1,3},
                    {2,2,2,2,3,3},
                    {3,2,1,3,2,1},
                    {1,0,0,2,0,3},
                    {2,1,3,2,1,1},
                    {0,0,2,3,4,4},
    };
    // za wygran¹ 3 pkt, za remis 1, za przegran¹ 0
    /*Kto wygra³, ile bramek zdoby³a a,b,c, ile by³o
      remisów, bilans bramek
    */
    int a=0,b=0,r=0,pktA=0;
    cout << "Hello world!" << endl;
    if(mecze[0][0]==mecze[0][1]){
        r++;
        pktA=pktA+1;
    }
