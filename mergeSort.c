#include<stdio.h>
int main()
{
  int n,i,arr[20]; //declaracion array de 20 elementos
  printf("Enter the size of array: ");
  scanf("%d",&n); //valor del tamaño del array
  printf("Enter the elements:\n");
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);//ingresa los valores al arreglo
  }
  printf("merge_sort(arr,0,%d)\n",n-1);
  merge_sort(arr,0,n-1);  //aca ocurre la magia

  printf("Array Ordenado:");  //imprime arreglo ordenado
  for(i=0;i<n;i++)
    printf("%d,",arr[i]);

  return 0;
}

int merge_sort(int arr[],int low,int high)
{
  int mid;
  if(low<high)
  {
    mid=(low+high)/2;
   // Divide en 2 al array
    printf("ordena toda izquierda -> merge_sort(arr,%d,%d)\n",low,mid);
    merge_sort(arr,low,mid); //izquierda
    printf("ordena toda derecha -> merge_sort(arr,%d,%d)\n",mid+1,high);
    merge_sort(arr,mid+1,high); //derecha
   // Combina
    printf("\nmerge(arr,%d,%d,%d)\n",low,mid,high);
    merge(arr,low,mid,high);
  }
  return 0;
}

int merge(int arr[],int l,int m,int h)
{
  int arr1[10],arr2[10];  //crea dos arreglos temporales
  int n1,n2,i,j,k;
  //i es indice izq de arr1 con tamaño n1, j es indice der de arr2 con tamaño n2
  n1=m-l+1; //mid-low+1 = tamaño izquierdo
  n2=h-m; // tamaño derecho
  //lo que hace es ordenar los valores del arr en arr1 y arr2
  printf("Funcion Merge l:%d ,m:%d ,h:%d \n",l,m,h);
  printf("n1:%d ,n2:%d \n",n1,n2);
  for(i=0;i<n1;i++){
    arr1[i]=arr[l+i];
    printf("i arr1[%d]:%d = arr[%d]:%d\n",i,arr[i],l+i,arr[l+i]);
    for(j=0;j<n2;j++){
        arr2[j]=arr[m+j+1];
        printf("j arr2[%d]:%d= arr[%d]:%d\n",j,arr2[j],m+j+1,arr[m+j+1]);
    }
  }
  arr1[i]=9999;  
  printf("arr1[%d]:%d\n",i,arr1[i]);
  arr2[j]=9999;
  printf("arr2[%d]:%d \n",j,arr2[j]);
  //el final del arr1 y arr2 les pone 9999
  i=0;j=0;
  
  //compara y ordena el arreglo "combina"
  for(k=l;k<=h;k++)
  {
    printf("\nCombinando dos arrays: k:%d \n",k);
    printf("arr1[%d]:%d <= arr2[%d]:%d\n",i,arr1[i],j,arr2[j]);
    if(arr1[i]<=arr2[j]){
      arr[k]=arr1[i];
      printf("if arr[%d]:%d = arr1[%d]:%d \n",k,arr[k],i,arr1[i]);
      i++;
    }else{
      arr[k]=arr2[j];
      printf("else arr[%d]:%d = arr2[%d]:%d \n",k,arr[k],j,arr2[j]);
      j++;
    }
  }
  return 0;
}
