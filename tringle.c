#include<stdio.h>
int main(){

    float a,b,c,p[3],q;
    double t,n,m;
    int i,j,temp;
    scanf("%f%f%f",&a,&b,&c);
    p[0]=a;
    p[1]=b;
    p[2]=c;
    for(i=0;i<3;i++){
        for(j=i+1;j<3;j++){
           if(p[i]>p[j]){
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }
    q=p[0]+p[1];
    if(q>p[2]){
            m=(q+p[2])/2;
    n=sqrt(m*(m-p[0])*(m-p[1])*(m-p[2]))*2;
        printf("perimetro = %.1lf\n",n);
    }
    else{
        t=((p[1]+p[2])*p[0])/2;
        printf("Area = %.1lf\n",t);
    }


}
