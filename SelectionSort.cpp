
int select(int arr[], int i, int sz)
{
    // code here such that selecionSort() sorts aar
    int min = arr[i];
    for (int j = i; j < sz; ++j)
    {
        if (min > arr[j])
        
            min = arr[j];
    }   
        
    return min;
}


void selectionSort(int arr[], int n)
{
  //code here
  int Select, *a, *b;
  
  for(int i = 0; i < n; ++i)
  {
     Select = select(arr, i, n);
  
     for (int j = i; j < n; ++j)
     {
        if(Select == arr[j])
        {
          a = &arr[i]; b = &arr[j];
          swap(a,b);
          break;
        }
     }
  }
}
