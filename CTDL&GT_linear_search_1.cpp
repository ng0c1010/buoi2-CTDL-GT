int LinearSearch(int a[], int n, int x){
	int i=0; a[n]=x; //a[n] là ph?n t? “lính canh”
	while(a[i]!=x){
		i++;
	}
	if(i==n){
		return -1; //Tìm không th?y x
	}
	else{
		return i; //Tìm th?y x
	}
}
cat dat tim kiem tuyen tinh, link tham khao: https://gochocit.com/ky-thuat-lap-trinh/thuat-toan-tim-kiem-tuyen-tinh-linear-search
