#include<stdio.h>

struct info{
    char name[10];
    int y,m,d;
}youngest,oldest,temp,left,right; //left & right 用来保存两个边界 

bool lessEqu(info a, info b){ //if a's date <= b's date return true
    if(a.y != b.y) return a.y <= b.y;
    else if(a.m != b.m) return a.m <= b.m;
    else return a.d <= b.d;
}

bool moreEqu(info a, info b){ //if a's date >= b's date return true
    if(a.y != b.y) return a.y >= b.y;
    else if(a.m != b.m) return a.m >= b.m;
    else return a.d >= b.d;
}

void init(){
    right.y = oldest.y = 2014; left.y = youngest.y = 1814; //pay attention to oldest & youngest's year. 
    right.m = left.m = youngest.m = oldest.m = 9;
    right.d = left.d = youngest.d = oldest.d = 6;
} 

int main(){

    int n;
    int count = 0;
    scanf("%d",&n);

    init();

    for(int i = 0; i < n; i++){
        scanf("%s %d/%d/%d",temp.name,&temp.y,&temp.m,&temp.d);

        if(lessEqu(temp,right) && moreEqu(temp,left)){ //如果日期合法 
            count++;
            if(lessEqu(temp,oldest)){   //更新oldest 
                oldest = temp;  
            }
            if(moreEqu(temp,youngest)){ //更新youngest 
                youngest = temp;
            } 
        }
    }

    if(count)
        printf("%d %s %s\n",count,oldest.name,youngest.name);
    else 
        printf("0\n");
    return 0;
}