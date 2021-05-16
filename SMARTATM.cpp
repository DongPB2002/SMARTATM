
#include<stdio.h>

void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
void sapxep(int a[],int n){
	int c;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
		if(a[i]<a[j]){
		c=a[i];
		a[i]=a[j];
		a[j]=c;	
		}
	}
}
}
int min(int a[],int n){
    sapxep(a,n);
	return a[n-1];	
}
int tien(int a[],int k,int n){
	int b[100005],c[20];
	min(a,n);
	for(int i=0;i<=k;i++){
		if(i<min(a,n))
		b[i]=-10000000;
		else{
		for(int j=0;j<n;j++){
		if(i==a[j])
		c[j]=1;	
		else if(i>a[j])
		c[j]=b[i-a[j]]+1;
		else
		c[j]=10000000;
		}
		b[i]=min(c,n);
	}
}
		
	if(b[k]<=0)
	return -1;
	else
	return b[k];
	
}

int main(){
	int n,a[100],c,k;
	scanf("%d%d",&n,&k);
	nhap(a,n);
	tien(a,k,n);
	printf("%d",tien(a,k,n));
	
	
}
