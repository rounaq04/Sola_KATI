


//this is a program for 16 kati game made by Rounak Runwal (Mtech NITK) as a project
#include<bits/stdc++.h>
#include<cstdlib>
#include<string>
using namespace std;

char arr[9][5];
int move_count,toss_result,score_A=0,score_B=0;
string player_1,player_2,toss_winner,toss_looser;
void game_start()
{
    int time;
    cout<<" "<<endl;
    cout<<" Welcome to the game SOLA KATI programmed by Rounak Runwal"<<endl;
    cout<<" "<<endl;
    cout<<" Enter name of player 1: ";
    cin>>player_1;
    cout<<" Enter name of player 2: ";
    cin>>player_2;
    cout<<" Press any key to toss"<<endl;
    system("pause");
    int toss;
    for(int z=0;z<5;z++)
    time = clock();
    toss = time%2;
    if(toss==0){cout<<" "<<player_1<<" wins the toss"<<endl;toss_result=1;}
    else{cout<<" "<<player_2<<" wins the toss"<<endl;toss_result=2;}
    system("pause");
    system("cls");
    if(toss_result==1){toss_winner=player_1;toss_looser=player_2;}
    else {toss_winner=player_2;toss_looser=player_1;}
    move_count =0;
    int i,j;
    for(j=0;j<5;j++)
        arr[2][j]= ' ';

    for(i=0;i<2;i++)
        for(j=0;j<5;j++)
        arr[i][j]= 'A';

    for(i=5;i<7;i++)
        for(j=1;j<4;j++)
        arr[i][j]= 'A';

    for(i=3;i<5;i++)
        for(j=0;j<5;j++)
        arr[i][j]= 'B';

    for(i=7;i<9;i++)
        for(j=1;j<4;j++)
        arr[i][j]= 'B';


}
void setup()
{

    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;

    cout<<"             "<<" "<<arr[6][3]<<"(63) _ _ _ _ _"<<arr[6][2]<<"(62)_ _ _ _ _ "<<arr[6][1]<<"(61)"<<endl;
    cout<<"             "<<"    *             |             *     "<<endl;
    cout<<"             "<<"      *           |           *       "<<endl;
    cout<<"             "<<"        *         |         *         "<<endl;
    cout<<"             "<<"        "<<arr[5][3]<<"(53)_ _"<<arr[5][2]<<"(52)_ _"<<arr[5][1]<<"(51)"<<endl;
    cout<<"             "<<"           *      |      *           "<<endl;
    cout<<"             "<<"             *    |    *             "<<endl;
    cout<<"             "<<"               *  |  *               "<<endl;
    cout<<"             "<<"                 *|*                  "<<endl;
    cout<<"           "<<arr[0][0]<<"(00)____"<<arr[0][1]<<"(01)____"<<arr[0][2]<<"(02)____"<<arr[0][3]<<"(03)____"<<arr[0][4]<<"(04)"<<endl;
    cout<<"             "<<"|*       |       *| *      |       *|"<<endl;
    cout<<"             "<<"|  *     |     *  |   *    |     *  |"<<endl;
    cout<<"             "<<"|    *   |   *    |     *  |   *    |"<<endl;
    cout<<"             "<<"|      * | *      |       *| *      |"<<endl;
    cout<<"           "<<arr[1][0]<<"(10)____"<<arr[1][1]<<"(11)____"<<arr[1][2]<<"(12)____"<<arr[1][3]<<"(13)____"<<arr[1][4]<<"(14)"<<endl;
    cout<<"             "<<"|       *|*       |       *| *      |"<<endl;
    cout<<"             "<<"|     *  |  *     |     *  |   *    |"<<endl;
    cout<<"             "<<"|   *    |    *   |   *    |     *  |"<<"                                     "<<"SCORE CARD"<<endl;
    cout<<"             "<<"| *      |      * | *      |       *|"<<endl;
    cout<<"           "<<arr[2][0]<<"(20)____"<<arr[2][1]<<"(21)____"<<arr[2][2]<<"(22)____"<<arr[2][3]<<"(23)____"<<arr[2][4]<<"(24)"<<"                         "<<toss_winner<<":  A"<<"          "<<toss_looser<<":  B"<<endl;
    cout<<"             "<<"|*       |       *|*       |      * |"<<endl;
    cout<<"             "<<"|  *     |     *  |  *     |    *   |"<<"                  SCORE:           "<<score_A<<"                   "<<score_B<<endl;
    cout<<"             "<<"|    *   |   *    |    *   |  *     |"<<endl;
    cout<<"             "<<"|      * | *      |      * |*       |"<<endl;
    cout<<"           "<<arr[3][0]<<"(30)____"<<arr[3][1]<<"(31)____"<<arr[3][2]<<"(32)____"<<arr[3][3]<<"(33)____"<<arr[3][4]<<"(34)"<<endl;
    cout<<"             "<<"|       *|*       |      * |*       |"<<endl;
    cout<<"             "<<"|     *  |  *     |    *   |  *     |"<<endl;
    cout<<"             "<<"|   *    |    *   |  *     |    *   |"<<endl;
    cout<<"             "<<"| *      |      * |*       |      * |"<<endl;
    cout<<"           "<<arr[4][0]<<"(40)____"<<arr[4][1]<<"(41)____"<<arr[4][2]<<"(42)____"<<arr[4][3]<<"(43)____"<<arr[4][4]<<"(44)"<<endl;
    cout<<"             "<<"                 *|*                  "<<endl;
    cout<<"             "<<"               *  |  *               "<<endl;
    cout<<"             "<<"             *    |    *             "<<endl;
    cout<<"             "<<"           *      |      *           "<<endl;
    cout<<"             "<<"        "<<arr[7][3]<<"(73)_ _"<<arr[7][2]<<"(72)_ _"<<arr[7][1]<<"(71)"<<endl;
    cout<<"             "<<"        *         |         *         "<<endl;
    cout<<"             "<<"      *           |           *       "<<endl;
    cout<<"             "<<"    *             |             *     "<<endl;
    cout<<"             "<<" "<<arr[8][3]<<"(83) _ _ _ _ _"<<arr[8][2]<<"(82)_ _ _ _ _ "<<arr[8][1]<<"(81)"<<endl;

    cout<<"             "<<endl;
    cout<<"             "<<endl;
}

void logic()
{
    char arr1[2];
    arr1[0]= 'A';
    arr1[1]= 'B';
    int a;
    int b;
    int p,q,i,j,d,e,flag,bonus_turn_a=0,bonus_turn_b=0,x,y;
    char first= 'A',second;
    while(score_A <16 && score_B<16)
    {
        flag=0;
        setup();

        if(bonus_turn_a==1)
        {
            bonus_turn_a=0;
            for(x=p-1;x<=p+1;x++)
            {
                for(y=q-1;y<=q+1;y++)
                {
                    if(x==p && y==q)continue;
                    if((x>=0 && x<=4 && y<=4 && y>=0) || (x>=5 && x<=8 && y>=1 && y<=3))
                    {
                        if(arr[x][y]== second)
                        {
                            if((x+y)%2==0)
                            {
                                d=x; e=y;
                                if(p-x > 0)d=x-1;
                                if(q-y > 0)e=y-1;
                                if(p-x < 0)d=x+1;
                                if(q-y < 0)e=y+1;
                                if(arr[d][e]==' ')bonus_turn_a=1;
                            }
                            else
                            {
                                d=x; e=y;
                                if(p-x > 0 && y==q)d=x-1;
                                if(q-y > 0 && x==p)e=y-1;
                                if(p-x < 0 && y==q)d=x+1;
                                if(q-y < 0 && x==p)e=y+1;
                                if(arr[d][e]==' ')bonus_turn_a=1;
                            }
                        }
                    }
                }
            }
        }

        if(bonus_turn_b==1)
        {
            bonus_turn_b=0;
            for(x=p-1;x<=p+1;x++)
            {
                for(y=q-1;y<=q+1;y++)
                {
                    if(x==p && y==q)continue;
                    if((x>=0 && x<=4 && y<=4 && y>=0) || (x>=5 && x<=8 && y>=1 && y<=3))
                    {
                        if(arr[x][y]== second)
                        {
                            if((x+y)%2==0)
                            {
                                d=x; e=y;
                                if(p-x > 0)d=x-1;
                                if(q-y > 0)e=y-1;
                                if(p-x < 0)d=x+1;
                                if(q-y < 0)e=y+1;
                                if(arr[d][e]==' ')bonus_turn_a=1;
                            }
                            else
                            {
                                d=x; e=y;
                                if(p-x > 0 && y==q)d=x-1;
                                if(q-y > 0 && x==p)e=y-1;
                                if(p-x < 0 && y==q)d=x+1;
                                if(q-y < 0 && x==p)e=y+1;
                                if(arr[d][e]==' ')bonus_turn_a=1;
                            }
                        }
                    }
                }
            }
        }


        if(bonus_turn_a){first = arr1[0]; second = arr1[1];move_count--;}
        else if(bonus_turn_b){first = arr1[1]; second = arr1[0];move_count--;}
        else if(move_count%2 ==0){first = arr1[0]; second = arr1[1];} // in this step since A takes its turn we set A=0 showing A's turn done
        else if(move_count%2!=0){first = arr1[1]; second = arr1[0];}

        if(bonus_turn_a || bonus_turn_b)
        {
            i=p;j=q;
            a= i*10+q;
        }
        else
        {
            if(toss_result==1)
            {
                if(first=='A')cout<<" "<<player_1<<"'s move from position: ";
                else cout<<" "<<player_2<<"'s move from position: ";
            }
            else if(toss_result==2)
            {
                if(first=='A')cout<<" "<<player_2<<"'s move from position: ";
                else cout<<" "<<player_1<<"'s move from position: ";
            }
            cin>>a;
            i=a/10; j=a%10;
        }

        if((first== 'A' && arr[i][j]== 'A') || (first == 'B' && arr[i][j]== 'B'))flag=1;
        else if(arr[i][j]==' '){cout<<" Position "<<i*10+j<<" is blank"<<endl;system("pause");system("cls");} // if the chosen position doesn't have any kati
        else
        {
            if(toss_result==1)
            {
                if(arr[i][j]=='A'){cout<<" Its not "<<player_1<<"'s turn"<<endl;system("pause");system("cls");}
                else {cout<<" Its not "<<player_2<<"'s turn"<<endl;system("pause");system("cls");}
            }
            if(toss_result==2)
            {
                if(arr[i][j]=='A'){cout<<" Its not "<<player_2<<"'s turn"<<endl;system("pause");system("cls");}
                else {cout<<" Its not "<<player_1<<"'s turn"<<endl;system("pause");system("cls");}
            }
        }

        if(flag==1)
        {
            cout<<" From "<<a<<" to position: ";
            cin>>b;
            p=b/10; q=b%10;
            if(arr[i][j]==arr[p][q]){flag=0;cout<<"move not allowed"<<endl;system("pause");system("cls");}
        }

        if(flag==1 && ((p>=0 && i>=0 && i<=4 && p<=4 && q<=4 && j<=4 && j>=0 && q>=0) || (p>=5 && i>=5 && p<=8 && i<=8 && q>=1 && j>=1 && q<=3 && j<=3) || (i==5 && j>=1 && j<=3 && p==0 && q==2) || (i==7 && j>=1 && j<=3 && p==4 && q==2) || (i==4 && j==2 && p==7 && q>=1 && q<=3) || (i==0 && j==2 && p==5 && q>=1 && q<=3)))
        {
            move_count++;
            if( ((a==11 || a==13 || a==22 || a==33 || a==31) && (p==i-1 || p==i || p==i+1) && (q==j-1 || q==j || q==j+1))  || ( ((a==12 || a==21 || a==23 || a==32) && (b==22 || b==24 || b==13 || b==33)) || ((a==12 || a==21 || a==23 || a==32) && (b==20 || b==22 || b==11 || b==31))) || ((a==20 || a==24) && (p==i-1 || p==i || p==i+1) && (q==j-1 || q==j || q==j+1)))
            {
                if(arr[p][q] == second  && (p!=0 || p!=4) && (q!=0 || q!=4))
                {
                    d=p; e=q;
                    if(i-d > 0)p=d-1;
                    if(j-e > 0)q=e-1;
                    if(i-d < 0)p=d+1;
                    if(j-e < 0)q=e+1;
                    if(arr[p][q]==' ')
                    {
                        arr[i][j] = ' ';
                        arr[d][e]= ' ';
                        arr[p][q]=first;
                        if(first=='A'){score_A++;bonus_turn_a=1;}
                        else {score_B++;bonus_turn_b=1;}
                    }
                    else{move_count--;cout<<"1st move not allowed"<<endl;}
                }
                else if(arr[p][q]= ' ')
                {
                    arr[i][j]= ' ';
                    arr[p][q]= first;
                    bonus_turn_a=0;
                    bonus_turn_b=0;
                }
                else if(arr[p][q]= second && (b==42 || b==02) && arr[p+4][j]== ' ')
                {
                    arr[i][j]= ' ';
                    arr[p][q]= ' ';
                    p=p+4;
                    arr[p][j]=first;
                    if(first=='A'){score_A++;bonus_turn_a=1;}
                        else {score_B++;bonus_turn_b=1;}
                }
                else{move_count--;cout<<"2nd move not allowed"<<endl;}
            }


            else if( ((a==00)&& (b==01 || b==10 || b==11 )) || ((a==04)&& (b==03 || b==13 || b==14)) || ((a==40)&& (b==30 || b==31 || b==41)) || ((a==44)&& (b==33 || b==34 || b==43)) )
            {
                if(arr[p][q] == second)
                {
                    d=p; e=q;
                    if(i-d > 0)p=d-1;
                    if(j-e > 0)q=e-1;
                    if(i-d < 0)p=d+1;
                    if(j-e < 0)q=e+1;

                    if(arr[p][q]==' ')
                    {
                        arr[i][j] = ' ';
                        arr[d][e]= ' ';
                        arr[p][q]=first;
                        if(first=='A'){score_A++;bonus_turn_a=1;}
                        else {score_B++;bonus_turn_b=1;}
                    }
                    else{move_count--;cout<<"move not allowed"<<endl;}
                }
                else if(arr[p][q]= ' ')
                {
                    arr[i][j]= ' ';
                    arr[p][q]= first;
                    bonus_turn_a=0;
                    bonus_turn_b=0;
                }
                else{move_count--;cout<<"move not allowed"<<endl;}
            }


            else if((a==10 && (b==00 || b==20 || b==11)) || (a==30 && (b==20 || b==40 || b==31)) || (a==41 && (b==40 || b==42 || b==31)) || (a==43 && (b==42 || b==44 || b==33)) || (a==34 && (b==44 || b==24 || b==33)) || (a==14 && (b==04 || b==24 || b==13)) || (a==03 && (b==04 || b==02 || b==13)) || (a==01 && (b==00 || b==02 || b==11)))
            {
                if((i==0 || i==4) && (arr[p][q] == second  && (q!=0 || q!=4)))
                {
                    d=p; e=q;
                    if(i-d > 0)p=d-1;
                    if(j-e > 0)q=e-1;
                    if(i-d < 0)p=d+1;
                    if(j-e < 0)q=e+1;
                    if(arr[p][q]==' ')
                    {
                        arr[i][j] = ' ';
                        arr[d][e]= ' ';
                        arr[p][q]=first;
                        if(first=='A'){score_A++;bonus_turn_a=1;}
                        else{score_B++;bonus_turn_b=1;}
                    }
                    else{move_count--;cout<<"move not allowed"<<endl;}
                }

                else if((i==1 || i==3) && (arr[p][q] == second  && (p!=0 || p!=4)))
                {
                    d=p; e=q;
                    if(i-d > 0)p=d-1;
                    if(j-e > 0)q=e-1;
                    if(i-d < 0)p=d+1;
                    if(j-e < 0)q=e+1;
                    if(arr[p][q]==' ')
                    {
                        arr[i][j] = ' ';
                        arr[d][e]= ' ';
                        arr[p][q]=first;
                        if(first=='A'){score_A++;bonus_turn_a=1;}
                        else {score_B++;bonus_turn_b=1;}
                    }
                    else{move_count--;cout<<"move not allowed"<<endl;}
                }


                else if(arr[p][q]= ' ')
                {
                    arr[i][j]= ' ';
                    arr[p][q]= first;
                    bonus_turn_a=0;
                    bonus_turn_b=0;
                }
                else if(arr[p][q]= second && (b==42 || b==02) && arr[p+4][j]== ' ')
                {
                    arr[i][j]= ' ';
                    arr[p][q]= ' ';
                    p=p+4;
                    arr[p][j]=first;
                    if(first=='A'){score_A++;bonus_turn_a=1;}
                        else {score_B++;bonus_turn_b=1;}
                }
                else{move_count--;cout<<"move not allowed"<<endl;}
            }


            else if( (a== 02  && (b==53 || b==52 || b==51 || b==01 || b==03 || b==11 || b==12 || b==13)) || (a==42 && (b==73 || b==72 || b==71 || b==31 || b==33 || b==32 || b==41 || b==43)))
            {
                if(arr[p][q] == second)
                {
                    if(b!=53 && b!=52 && b!=51 && b!=73 && b!=72 && b!=71)
                    {
                        d=p; e=q;
                        if(i-d > 0)p=d-1;
                        if(j-e > 0)q=e-1;
                        if(i-d < 0)p=d+1;
                        if(j-e < 0)q=e+1;
                    }
                    else p=p+1;

                    if(arr[p][q]==' ')
                    {
                        arr[i][j] = ' ';
                        arr[p-1][q]= ' ';
                        arr[p][q]=first;
                        if(first=='A'){score_A++;bonus_turn_a=1;}
                        else {score_B++;bonus_turn_b=1;}
                    }
                    else{move_count--;cout<<"move not allowed"<<endl;}

                }

                else if(arr[p][q]= ' ')
                {
                    arr[i][j]= ' ';
                    arr[p][q]= first;
                    bonus_turn_a=0;
                    bonus_turn_b=0;
                }
                else{move_count--;cout<<"move not allowed"<<endl;}
            }


            else if((a== 71  && (b==81 || b==42 || b==72)) || (a==72 && (b==71 || b==73 || b==82 || b==42)) || (a==73 && (b==42 || b==83 || b==72 )) || (a==51 && (b==02 || b==61 || b==52 )) || (a==52 && (b==62 || b==51 || b==53 || b==02)) || (a==53 && (b==02 || b==63 || b==52 )) )
            {
                if(arr[p][q] == second && b!=42 && b!=02 && b!=52 && b!=72){move_count--;cout<<"move not allowed"<<endl;}
                else if(arr[p][q]==second && (b==02 || b==42) && arr[p-4][q]==' ')
                {
                    arr[i][j]= ' ';
                    arr[p][q]= ' ';
                    p=p-4;
                    arr[p][j]=first;
                    if(first=='A'){score_A++;bonus_turn_a=1;}
                    else {score_B++;bonus_turn_b=1;}

                }
                else if(arr[p][q]==second && (b==52 || b==72))
                {
                    if(j==1 && arr[p][q+1]== ' ')
                    {
                        arr[i][j]= ' ';
                        arr[p][q]= ' ';
                        q=q+1;
                        arr[p][q]=first;
                        if(first=='A'){score_A++;bonus_turn_a=1;}
                        else {score_B++;bonus_turn_b=1;}
                    }
                    if(j==3 && arr[p][q-1]== ' ')
                    {
                        arr[i][j]= ' ';
                        arr[p][q]= ' ';
                        q=q-1;
                        arr[p][q]=first;
                        if(first=='A'){score_A++;bonus_turn_a=1;}
                        else {score_B++;bonus_turn_b=1;}
                    }
                }

                else if(arr[p][q]= ' ')
                {
                    arr[i][j]= ' ';
                    arr[p][q]= first;
                    bonus_turn_a=0;
                    bonus_turn_b=0;
                }
                else{move_count--;cout<<"move not allowed"<<endl;}
            }


            else if((a== 61  && (b==62 || b==51)) || (a== 62  && (b==63 || b==61 || b==52)) || (a== 63  && (b==62 || b==53)) || (a== 81  && (b==82 || b==71)) || (a== 82  && (b==83 || b==81 || b==72)) || (a== 83  && (b==82 || b==73)) )
            {
                if(arr[p][q] == second)
                {
                    if(b==62 && a==61 && arr[6][3]== ' ')
                    {
                        arr[6][1]= ' ';
                        arr[6][2]= ' ';
                        arr[6][3]= first;
                        if(first=='A'){score_A++;bonus_turn_a=1;}
                        else {score_B++;bonus_turn_b=1;}
                    }
                    else if(b==51 && a==61 && arr[0][2]== ' ')
                    {
                        arr[6][1]= ' ';
                        arr[5][1]= ' ';
                        arr[0][2]= first;
                        if(first=='A'){score_A++;bonus_turn_a=1;}
                        else {score_B++;bonus_turn_b=1;}
                    }

                    else if(b==52 && a==62 && arr[0][2]== ' ')
                    {
                        arr[6][2]= ' ';
                        arr[5][2]= ' ';
                        arr[0][2]= first;
                        if(first=='A'){score_A++;bonus_turn_a=1;}
                        else {score_B++;bonus_turn_b=1;}
                    }
                    else if(b==53 && a==63 && arr[0][2]== ' ')
                    {
                        arr[6][3]= ' ';
                        arr[5][3]= ' ';
                        arr[0][2]= first;
                        if(first=='A'){score_A++;bonus_turn_a=1;}
                        else {score_B++;bonus_turn_b=1;}
                    }

                    else if(b==62 && a==63 && arr[6][1]== ' ')
                    {
                        arr[6][3]= ' ';
                        arr[6][2]= ' ';
                        arr[6][1]= first;
                        if(first=='A'){score_A++;bonus_turn_a=1;}
                        else {score_B++;bonus_turn_b=1;}
                    }

                     else if(b==82 && a==83 && arr[8][1]== ' ')
                    {
                        arr[8][3]= ' ';
                        arr[8][2]= ' ';
                        arr[8][1]= first;
                        if(first=='A'){score_A++;bonus_turn_a=1;}
                        else {score_B++;bonus_turn_b=1;}
                    }

                    else if(b==73 && a==83 && arr[4][2]== ' ')
                    {
                        arr[8][3]= ' ';
                        arr[7][3]= ' ';
                        arr[4][2]= first;
                        if(first=='A'){score_A++;bonus_turn_a=1;}
                        else {score_B++;bonus_turn_b=1;}
                    }

                    else if(b==72 && a==82 && arr[4][2]== ' ')
                    {
                        arr[8][2]= ' ';
                        arr[7][2]= ' ';
                        arr[4][2]= first;
                        if(first=='A'){score_A++;bonus_turn_a=1;}
                        else {score_B++;bonus_turn_b=1;}
                    }

                     else if(b==71 && a==81 && arr[4][2]== ' ')
                    {
                        arr[8][1]= ' ';
                        arr[7][1]= ' ';
                        arr[4][2]= first;
                        if(first=='A'){score_A++;bonus_turn_a=1;}
                        else {score_B++;bonus_turn_b=1;}
                    }

                     if(b==82 && a==81 && arr[8][3]== ' ')
                    {
                        arr[8][1]= ' ';
                        arr[8][2]= ' ';
                        arr[8][3]= first;
                        if(first=='A'){score_A++;bonus_turn_a=1;}
                        else {score_B++;bonus_turn_b=1;}
                    }
                    else{move_count--;cout<<"move not allowed"<<endl;}

                }
                else if(arr[p][q]= ' ')
                {
                    arr[i][j]= ' ';
                    arr[p][q]= first;
                    bonus_turn_a=0;
                    bonus_turn_b=0;
                }
                else{move_count--;cout<<"move not allowed"<<endl;}
            }
            else{move_count--;cout<<"3rd move not allowed"<<endl;}

            system("pause");
            system("cls");
        }
        else
        {
            if(flag==1){cout<<"flag=1 move not allowed"<<endl;}
        }
    }
}
main()
{
    game_start();
    logic();
    if(score_A=16)cout<<toss_winner<<" wins the match!"<<endl;
    else cout<<toss_looser<<" wins the match!"<<endl;
    return(0);
}

//( (a==12 || a==21 || a==23 || a==32) && ((p==i && (q==j-1 || q==j+i)) || (q==j && (p==i-1 || p==i+1))))
