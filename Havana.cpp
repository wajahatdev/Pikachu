#include <iostream>

using namespace std;

void IA()
{
	for(int i=1;i<=10;i++)
	cout<<"Peeno Mere Naal Weya Kr Ley"<<endl;
	cout<<endl;
}

void Lub()
{
	for (int i=1;i<=5;i++)
		cout<<"I love Pakistan."<<endl;
	cout<<endl;
}

void selectionSort(int a[], int n) {
   int i, j, min, temp;
   for (i = 0; i < n - 1; i++) {
      min = i;
      for (j = i + 1; j < n; j++)
      if (a[j] < a[min])
      min = j;
      temp = a[i];
      a[i] = a[min];
      a[min] = temp;
   }
}

int main ()
{
	IA();
	Lub();
	IA();
	
	
   int a[] = { 22, 91, 35, 78, 10, 8, 75, 99, 1, 67 };
   int n = sizeof(a)/ sizeof(a[0]);
   int i;
   cout<<"Given array is:"<<endl;
   for (i = 0; i < n; i++)
   cout<< a[i] <<" ";
   cout<<endl;
   selectionSort(a, n);
   printf("
Sorted array is: 
");
   for (i = 0; i < n; i++)
   cout<< a[i] <<" ";
   return 0;
}
}
