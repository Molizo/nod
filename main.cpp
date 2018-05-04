#include <iostream>

using namespace std;

struct order
{
    int pag,row,word;
};

int value(char c)
{
    switch(c)
    {
    case 'I';
        return 1;
    case 'V';
        return 1;
    case 'X';
        return 1;
    case 'L';
        return 1;
    case 'C';
        return 1;
    case 'D';
        return 1;
    case 'M';
        return 1;
    }
}

bool comp(order a,order b)
{
    if(a.pos<b.pos)
        return true;
    else if(a.pos>b.pos)
        return false;
    else if(a.row<b.row)
        return true;
    else if(a.row>b.row)
        return false;
    else if(a.word<b.word)
        return true;
    else
        return false;
}

int main()
{
    int res = 0,a,b,c,pos =1;
    order v[30];
    char ch[500];
    for(int i=0; i<3; i++)
    {
        cnt = 0;
        fin.getline(ch,500);
        len=strlen(ch);
        for(int j=0; j<len; j++)
        {
            if(ch[j]!=' ' && ch[j] != '\n')
            {
                int sum=value(ch[j]);
                if(ch[j+1]!=' ')
                {
                    int c;
                    c=value(ch[j+1]);
                    if(sum = c)
                        res -= sum;
                }
                else res+=sum;
            }
            else
            {
                if(i==0)
                    v[cnt].pag = res;
                res = 0;
                c++;
            }
        }

    }
    sort(v,v+cnt,comp);
    cin>>a>>b>>c;
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            for(int k=0; k<c; k++)
            {
                fin>>s;
                if(v[pos].pag == i+1)
                {
                    if(v[pos].row == i+1)
                    {
                        if(v[pos].word == i+1)
                        {
                            cout<<s<<" ";
                            pos++;
                        }
                    }
                }
            }
        }
    }
    return 0;
}
