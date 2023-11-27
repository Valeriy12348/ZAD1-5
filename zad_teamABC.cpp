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
    int a=0,b=0,c=0,r=0,pA=0,pB=0,pC=0;
    cout << "Hello world!" << endl;
    for (int i=0;i<10;i++){
    if(mecze[i][0]==mecze[i][1]){
        r++;
        pA=pA+1;
        pB=pB+1;
    }
    if(mecze[i][0]>mecze[i][1])
    {
       a++;
       pA=pA+3;
    }

    else {b++;
    pB=pB+3;
    }
    }
    cout << a <<" "<<b<<" "<<c<< " " <<r<<endl;
    cout << pA <<" "<<pB<<" "<<pC<<endl;
    return 0;
     if(pA>pB)
    {
       cout << "druzyna A wygrala" <<
    }
    else
}
