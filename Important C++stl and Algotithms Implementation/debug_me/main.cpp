#include <iostream>


using namespace std;

int main()
{
    int t,x,y,i,flag;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        flag=1;
        while(1)
        {
            if(x <= 0 || y <= 0 || (x == 1 && y == 1) || (x == 1 && y == 2) || (x == 2 && y == 1) || (x == 2 && y == 2))
            {
                if(flag == 1)
                {
                    cout<<"Second"<<endl;
                    break;
                }
                else
                {
                    cout<<"First"<<endl;
                    break;
                }
            }else    if(x - 2 > 0 && y - 1 > 0)
            {
                x -= 2;
                y -= 1;
            }else if(x - 1 > 0 && y - 2 > 0)
            {
                x -= 1;
                y -= 2;
            }
            else if(x - 2 > 0)
            {
                x -= 2;
                y += 1;
            }else if(y - 2 > 0)
            {
                x += 1;
                y -= 2;
            }
            if(flag == 1)
                flag = 0;
            else
                flag = 1;
        }
        
    }
    return 0;
}
